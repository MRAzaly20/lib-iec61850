/*
 * client_example_control.c
 *
 * Generic IEC 61850 control client.
 *
 * Supports two control models:
 *   - SBO with enhanced security (CSWI.Pos, XCBR.Pos, etc.)
 *   - Direct with enhanced security (GBAY1.Loc)
 *
 * Usage:
 *   client_example_control <host> <port> <objectRef> [true|false|open|close]
 *
 * Examples:
 *   client_example_control 192.168.1.10 102 BT18_BC1CONTROL/CSWI1.Pos false
 *   client_example_control 10.0.0.5 102 E03_BCUE03BCU/XCBR1.Pos close
 *   client_example_control 0.tcp.ap.ngrok.io 16052 BT18_BC1CONTROL/CSWI1.Pos
 *   client_example_control 192.168.1.10 102 BT18_BC1CONTROL/GBAY1.Loc true
 *
 * Control parameters (matching IEDScout):
 *   Originator cat.:  station-control (orCat=2)
 *   Originator ident: 13 D5 C0 07
 *   Check condition:  Synchrocheck + Interlock-Check
 *   Test mode:        false
 */

#include "iec61850_client.h"
#include "hal_thread.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
 * Decode Dbpos (IEC61850_CODEDENUM) value from MmsValue.
 *
 * XCBR/XSWI Pos.stVal is a Dbpos (coded enum) which the server maps
 * to a 2-bit MMS_BIT_STRING.  MmsValue_getInt32() does NOT work on
 * bitstrings — it always returns 0.
 *
 * Bit layout (IEC 61850-7-3 Table 4):
 *   bit 0 (MSB) | bit 1 (LSB) | Dbpos value | Meaning
 *        0      |      0      |      0      | intermediate
 *        0      |      1      |      1      | off / open
 *        1      |      0      |      2      | on  / closed
 *        1      |      1      |      3      | bad state
 */
static int decodeDbpos(const MmsValue* dbposVal)
{
    if (dbposVal == NULL)
        return -1;

    /* If the server happens to expose it as an integer, handle that too */
    if (MmsValue_getType(dbposVal) == MMS_INTEGER ||
        MmsValue_getType(dbposVal) == MMS_UNSIGNED)
        return MmsValue_toInt32(dbposVal);

    /* Normal path: 2-bit bitstring */
    int val = 0;
    if (MmsValue_getBitStringBit(dbposVal, 0))  /* MSB */
        val |= 2;
    if (MmsValue_getBitStringBit(dbposVal, 1))  /* LSB */
        val |= 1;
    return val;
}

/* Helper: print human-readable addCause */
static void printAddCause(int addCause)
{
    switch (addCause) {
        case 0:  printf("   addCause: Unknown\n");                        break;
        case 1:  printf("   addCause: Not supported\n");                  break;
        case 2:  printf("   addCause: Blocked by interlocking (CILO)\n"); break;
        case 3:  printf("   addCause: Blocked by synchrocheck\n");        break;
        case 4:  printf("   addCause: Command already in execution\n");   break;
        case 5:  printf("   addCause: Object already in control\n");      break;
        case 7:  printf("   addCause: Position already reached\n");       break;
        case 10: printf("   addCause: Object not selected\n");            break;
        default: printf("   addCause: %i\n", addCause);                   break;
    }
}

static void commandTerminationHandler(void *parameter, ControlObjectClient connection)
{
    LastApplError lastApplError = ControlObjectClient_getLastApplError(connection);

    if (lastApplError.error != 0) {
        printf("\n[CALLBACK] CommandTermination- (Execution Failed).\n");
        printf(" -> LastApplError: %i\n", lastApplError.error);
        printAddCause(lastApplError.addCause);
    }
    else {
        printf("\n[CALLBACK] CommandTermination+ (Execution Fully Confirmed).\n");
    }
}

/*
 * Check whether the objectRef refers to a GBAY1.Loc (local/remote mode)
 * control object.  GBAY1.Loc is CDC SPC (Single Point Controllable) with:
 *   - stVal  = BOOLEAN (not Dbpos)
 *   - ctlVal = BOOLEAN
 *   - ctlModel = direct-with-enhanced-security (no selectWithValue)
 *
 * This differs from CSWI.Pos / XCBR.Pos which are DPC (Double Point)
 * with Dbpos stVal and sbo-with-enhanced-security.
 */
static bool isGbayLocRef(const char* objectRef)
{
    return (strstr(objectRef, "GBAY1.Loc") != NULL);
}

static void printUsage(const char* progName)
{
    printf("Usage: %s <host> <port> <objectRef> [true|false|open|close]\n", progName);
    printf("\n");
    printf("  <host>       IED hostname or IP address\n");
    printf("  <port>       TCP port (usually 102)\n");
    printf("  <objectRef>  Control object reference, e.g.:\n");
    printf("                 BT18_BC1CONTROL/CSWI1.Pos\n");
    printf("                 E03_BCUE03BCU/XCBR1.Pos\n");
    printf("                 BT18_BC1CONTROL/CSWI2.Pos\n");
    printf("                 BT18_BC1CONTROL/GBAY1.Loc  (local/remote)\n");
    printf("  [value]      Control value: true/close or false/open\n");
    printf("               For GBAY1.Loc: only true or false.\n");
    printf("               If omitted, you will be prompted.\n");
    printf("\n");
    printf("Control parameters (fixed, matching IEDScout):\n");
    printf("  orCat   = station-control (2)\n");
    printf("  orIdent = 13 D5 C0 07\n");
    printf("  checks  = synchrocheck + interlock\n");
    printf("  test    = false\n");
}

int main(int argc, char** argv)
{
    if (argc < 4) {
        printUsage(argv[0]);
        return 1;
    }

    char* hostname  = argv[1];
    int   tcpPort   = atoi(argv[2]);
    char* objectRef = argv[3];

    bool  commandValue     = false;
    bool  promptForCommand = true;
    bool  gbayLoc          = isGbayLocRef(objectRef);

    /* Optional 4th arg: control value */
    if (argc >= 5) {
        if (strcmp(argv[4], "true") == 0 || strcmp(argv[4], "close") == 0 ||
            strcmp(argv[4], "TRUE") == 0 || strcmp(argv[4], "CLOSE") == 0) {
            commandValue = true;
        } else if (strcmp(argv[4], "false") == 0 || strcmp(argv[4], "open") == 0 ||
                   strcmp(argv[4], "FALSE") == 0 || strcmp(argv[4], "OPEN") == 0) {
            commandValue = false;
        } else {
            printf("Invalid value '%s'. Expected: true/false%s\n",
                   argv[4], gbayLoc ? "." : " or open/close.");
            return 1;
        }
        promptForCommand = false;
    }

    /* Build stVal reference: "<objectRef>.stVal" */
    char stValRef[256];
    snprintf(stValRef, sizeof(stValRef), "%s.stVal", objectRef);

    if (gbayLoc) {
        printf("=== IEC 61850 Direct-E Control Client (SPC) ===\n");
    } else {
        printf("=== IEC 61850 SBO-E Control Client ===\n");
    }
    printf("Host            : %s:%i\n", hostname, tcpPort);
    printf("Control object  : %s\n", objectRef);
    if (gbayLoc) {
        printf("Object type     : GBAY1.Loc (Local/Remote -- SPC, direct-with-enhanced-security)\n");
    }
    if (!promptForCommand) {
        if (gbayLoc)
            printf("Control value   : %s\n", commandValue ? "true (LOCAL)" : "false (REMOTE)");
        else
            printf("Control value   : %s\n", commandValue ? "true (CLOSE)" : "false (OPEN)");
    }

    IedClientError error;
    IedConnection  con = IedConnection_create();

    /* Increase connect timeout for high-latency links (e.g. ngrok tunnels) */
    IedConnection_setConnectTimeout(con, 10000);
    IedConnection_setRequestTimeout(con, 10000);

    IedConnection_connect(con, &error, hostname, tcpPort);

    if (error == IED_ERROR_OK)
    {
        printf("Connected successfully.\n");

        MmsValue* ctlVal = NULL;
        MmsValue* stVal  = NULL;

        /* Read and confirm current stVal before attempting control */
        printf("\n[PRE-CHECK] Reading %s ...\n", stValRef);
        stVal = IedConnection_readObject(con, &error, stValRef, IEC61850_FC_ST);

        if (error == IED_ERROR_OK) {
            if (gbayLoc) {
                /* SPC: stVal is BOOLEAN */
                bool currentBool = MmsValue_getBoolean(stVal);
                MmsValue_delete(stVal);
                printf(" -> Current stVal = %s (%s)\n",
                       currentBool ? "true" : "false",
                       currentBool ? "LOCAL" : "REMOTE");
            } else {
                /* DPC: stVal is Dbpos (2-bit bitstring) */
                int currentState = decodeDbpos(stVal);
                MmsValue_delete(stVal);
                printf(" -> Current stVal = %i ", currentState);
                switch (currentState) {
                    case 0: printf("(Intermediate)\n");          break;
                    case 1: printf("(Off / Open)\n");            break;
                    case 2: printf("(On / Closed)\n");           break;
                    case 3: printf("(Bad State)\n");             break;
                    default: printf("(Unknown)\n");              break;
                }
            }
        }
        else {
            printf(" -> Failed to read stVal (Error: %i). Proceeding anyway...\n", error);
        }

        if (promptForCommand) {
            char input[10];
            if (gbayLoc) {
                printf("\nEnter command (true/false): ");
                if (fgets(input, sizeof(input), stdin) != NULL) {
                    if (strncmp(input, "true", 4) == 0 || strncmp(input, "TRUE", 4) == 0) {
                        commandValue = true;
                    } else if (strncmp(input, "false", 5) == 0 || strncmp(input, "FALSE", 5) == 0) {
                        commandValue = false;
                    } else {
                        printf("Invalid input. Defaulting to %s.\n",
                               commandValue ? "true" : "false");
                    }
                }
                printf("Control value   : %s\n", commandValue ? "true (LOCAL)" : "false (REMOTE)");
            } else {
                printf("\nEnter command (open/close): ");
                if (fgets(input, sizeof(input), stdin) != NULL) {
                    if (strncmp(input, "open", 4) == 0 || strncmp(input, "OPEN", 4) == 0) {
                        commandValue = false;
                    } else if (strncmp(input, "close", 5) == 0 || strncmp(input, "CLOSE", 5) == 0) {
                        commandValue = true;
                    } else {
                        printf("Invalid input. Defaulting to %s.\n",
                               commandValue ? "CLOSE" : "OPEN");
                    }
                }
                printf("Control value   : %s\n", commandValue ? "true (CLOSE)" : "false (OPEN)");
            }
        }

        printf("\nInitializing Control Object for %s ...\n", objectRef);
        ControlObjectClient control = ControlObjectClient_create(objectRef, con);

        if (control)
        {
            ControlObjectClient_setCommandTerminationHandler(
                control, commandTerminationHandler, NULL);

            /*
             * Set originator parameters (matching IEDScout):
             *   orCat   = station-control (CONTROL_ORCAT_STATION_CONTROL = 2)
             *   orIdent = "13 D5 C0 07" (hex bytes)
             */
            ControlObjectClient_setOrigin(control, "\x13\xd5\xc0\x07",
                                          CONTROL_ORCAT_STATION_CONTROL);

            /* Enable check conditions (matching IEDScout checkboxes) */
            ControlObjectClient_setInterlockCheck(control, true);
            ControlObjectClient_setSynchroCheck(control, true);

            /* Test mode: off (matching IEDScout) */
            ControlObjectClient_setTestMode(control, false);

            ctlVal = MmsValue_newBoolean(commandValue);

            if (gbayLoc) {
                /*
                 * GBAY1.Loc: SPC with direct-with-enhanced-security.
                 * No selectWithValue step -- just direct operate.
                 */
                printf("Step 1: Sending direct 'Operate' (direct-with-enhanced-security)...\n");
                printf("   object  = %s\n", objectRef);
                printf("   orCat   = station-control (2)\n");
                printf("   orIdent = 13 D5 C0 07\n");
                printf("   checks  = synchro + interlock\n");
                printf("   test    = false\n");
                printf("   ctlVal  = %s\n", commandValue ? "true" : "false");

                if (ControlObjectClient_operate(control, ctlVal, 0)) {
                    printf(" -> Operate accepted by server.\n");
                }
                else {
                    LastApplError err = ControlObjectClient_getLastApplError(control);
                    printf(" -> Operate REJECTED!\n");
                    printf(" -> LastApplError: %i\n", err.error);
                    printAddCause(err.addCause);
                }
            }
            else {
                /*
                 * DPC objects (CSWI.Pos, XCBR.Pos, etc.):
                 * SBO with enhanced security requires selectWithValue + operate.
                 */
                printf("Step 1: Sending 'SelectWithValue' (sbo-with-enhanced-security)...\n");
                printf("   object  = %s\n", objectRef);
                printf("   orCat   = station-control (2)\n");
                printf("   orIdent = 13 D5 C0 07\n");
                printf("   checks  = synchro + interlock\n");
                printf("   test    = false\n");
                printf("   ctlVal  = %s\n", commandValue ? "true" : "false");

                if (ControlObjectClient_selectWithValue(control, ctlVal)) {
                    printf(" -> SelectWithValue SUCCESS. Object armed.\n");

                    printf("Step 2: Sending 'Operate' command...\n");
                    if (ControlObjectClient_operate(control, ctlVal, 0)) {
                        printf(" -> Operation accepted by server.\n");
                    }
                    else {
                        LastApplError err = ControlObjectClient_getLastApplError(control);
                        printf(" -> Operation REJECTED!\n");
                        printf(" -> LastApplError: %i\n", err.error);
                        printAddCause(err.addCause);
                    }
                }
                else {
                    LastApplError err = ControlObjectClient_getLastApplError(control);
                    printf(" -> SelectWithValue FAILED!\n");
                    printf(" -> LastApplError: %i\n", err.error);
                    printAddCause(err.addCause);
                }
            }

            MmsValue_delete(ctlVal);

            printf("Waiting for CommandTermination callback...\n");
            Thread_sleep(1000);

            ControlObjectClient_destroy(control);

            /* Final telemetry readback */
            printf("\nStep 3: Reading final telemetry...\n");
            stVal = IedConnection_readObject(con, &error, stValRef, IEC61850_FC_ST);

            if (error == IED_ERROR_OK) {
                if (gbayLoc) {
                    /* SPC: stVal is BOOLEAN */
                    bool finalBool = MmsValue_getBoolean(stVal);
                    MmsValue_delete(stVal);
                    printf(" -> %s = %s (%s)\n", stValRef,
                           finalBool ? "true" : "false",
                           finalBool ? "LOCAL" : "REMOTE");
                } else {
                    /* DPC: stVal is Dbpos */
                    int dbposState = decodeDbpos(stVal);
                    MmsValue_delete(stVal);
                    printf(" -> %s = %i ", stValRef, dbposState);
                    switch (dbposState) {
                        case 0: printf("(Intermediate/Transition)\n"); break;
                        case 1: printf("(Off / Open)\n");              break;
                        case 2: printf("(On / Closed)\n");             break;
                        case 3: printf("(Bad State)\n");               break;
                        default: printf("(Unknown)\n");                break;
                    }
                }
            }
            else {
                printf(" -> Failed to read telemetry! (Error: %i)\n", error);
            }
        }
        else {
            printf("Error: Control object '%s' not recognized by server.\n", objectRef);
        }

        IedConnection_close(con);
    }
    else {
        printf("Connection to %s:%i FAILED! (Error: %i)\n", hostname, tcpPort, error);
    }

    IedConnection_destroy(con);
    return 0;
}