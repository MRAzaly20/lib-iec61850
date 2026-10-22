/*
 * client_E03_control.c
 *
 * Controls Circuit Breaker (XCBR1) on E03_BCU
 * ctlModel: sbo-with-normal-security
 * Port: 102
 *
 * IMPORTANT: Before running this client, manually set
 * XCBR1.Pos.stVal = 1 (Open) in IEDScout UI first.
 * FC_ST values cannot be written from the client side.
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

int main(int argc, char** argv)
{
    char* hostname     = "127.0.0.1";
    int   tcpPort      = 102;
    bool  commandValue = true;
    bool  forceMode    = false;
    bool  promptForCommand = true;

    /* Parse args: [host] [port] [open|close] [--force|-f] */
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--force") == 0 || strcmp(argv[i], "-f") == 0) {
            forceMode = true;
        } else if (i == 1 && argv[i][0] != '-') {
            hostname = argv[i];
        } else if (i == 2 && argv[i][0] != '-') {
            tcpPort = atoi(argv[i]);
        } else if (i == 3 && argv[i][0] != '-') {
            commandValue = !(strcmp(argv[i], "open") == 0 ||
                             strcmp(argv[i], "OPEN") == 0);
            promptForCommand = false;
        }
    }

    printf("Connecting to IED : %s:%i\n", hostname, tcpPort);
    if (!promptForCommand) {
        printf("Target Command    : %s\n", commandValue ? "CLOSE (true)" : "OPEN (false)");
    }
    if (forceMode)
        printf("[FORCE MODE]      : Pre-check bypassed\n");

    IedClientError error;
    IedConnection  con = IedConnection_create();
    IedConnection_connect(con, &error, hostname, tcpPort);

    if (error == IED_ERROR_OK)
    {
        MmsValue* ctlVal = NULL;
        MmsValue* stVal  = NULL;

        /* Read and confirm current stVal before attempting control */
        printf("\n[PRE-CHECK] Reading current XCBR1.Pos.stVal...\n");
        stVal = IedConnection_readObject(con, &error,
                    "E03_BCUE03BCU/XCBR1.Pos.stVal", IEC61850_FC_ST);

        if (error == IED_ERROR_OK) {
            int currentState = decodeDbpos(stVal);
            MmsValue_delete(stVal);
            printf(" -> Current stVal = %i ", currentState);
            switch (currentState) {
                case 0: printf("(Intermediate) ← SET THIS TO 1 IN IEDScout!\n"); break;
                case 1: printf("(Open) ← OK, ready to CLOSE\n");                 break;
                case 2: printf("(Closed) ← OK, ready to OPEN\n");                break;
                case 3: printf("(Fault)\n");                                      break;
            }
            if (currentState == 0) {
                if (forceMode) {
                    printf("\n[WARN] stVal is Intermediate (0), but --force active. Proceeding...\n");
                } else {
                    printf("\n[ABORT] stVal is Intermediate (0).\n");
                    printf(" Please set XCBR1.Pos.stVal = 1 (Open) in IEDScout first,\n");
                    printf(" or re-run with --force to bypass this check.\n");
                    IedConnection_close(con);
                    IedConnection_destroy(con);
                    return 1;
                }
            }
        }

        if (promptForCommand) {
            char input[10];
            printf("\nEnter command (open/close): ");
            if (fgets(input, sizeof(input), stdin) != NULL) {
                if (strncmp(input, "open", 4) == 0 || strncmp(input, "OPEN", 4) == 0) {
                    commandValue = false;
                } else if (strncmp(input, "close", 5) == 0 || strncmp(input, "CLOSE", 5) == 0) {
                    commandValue = true;
                } else {
                    printf("Invalid input. Defaulting to %s.\n", commandValue ? "CLOSE" : "OPEN");
                }
            }
            printf("Target Command    : %s\n", commandValue ? "CLOSE (true)" : "OPEN (false)");
        }

        printf("\nInitializing Control Object for E03BCU/XCBR1.Pos...\n");
        ControlObjectClient control =
            ControlObjectClient_create("E03_BCUE03BCU/XCBR1.Pos", con);

        if (control)
        {
            ControlObjectClient_setCommandTerminationHandler(
                control, commandTerminationHandler, NULL);

            /* Disable interlock and synchro checks for simulator testing */
            ControlObjectClient_setInterlockCheck(control, false);
            ControlObjectClient_setSynchroCheck(control, false);

            ctlVal = MmsValue_newBoolean(commandValue);

            printf("Step 1: Sending 'Select' request (sbo-with-normal-security)...\n");
            if (ControlObjectClient_select(control)) {
                printf(" -> Selection SUCCESS. Object armed.\n");

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
                /* Detailed rejection diagnostics */
                LastApplError err = ControlObjectClient_getLastApplError(control);
                printf(" -> Selection FAILED!\n");
                printf(" -> LastApplError: %i\n", err.error);
                printAddCause(err.addCause);
            }

            MmsValue_delete(ctlVal);

            printf("Waiting for CommandTermination callback...\n");
            Thread_sleep(1000);

            ControlObjectClient_destroy(control);

            /* Final telemetry readback */
            printf("\nStep 3: Reading final telemetry...\n");
            stVal = IedConnection_readObject(con, &error,
                        "E03_BCUE03BCU/XCBR1.Pos.stVal", IEC61850_FC_ST);

            if (error == IED_ERROR_OK) {
                int dbposState = decodeDbpos(stVal);
                MmsValue_delete(stVal);
                printf(" -> XCBR1.Pos.stVal = %i ", dbposState);
                switch (dbposState) {
                    case 0: printf("(Intermediate/Transition)\n"); break;
                    case 1: printf("(Fully OPEN)\n");              break;
                    case 2: printf("(Fully CLOSED)\n");            break;
                    case 3: printf("(Bad / Fault State)\n");       break;
                    default: printf("(Unknown)\n");                break;
                }
            }
            else {
                printf(" -> Failed to read telemetry! (Error: %i)\n", error);
            }
        }
        else {
            printf("Error: Control object not recognized by server.\n");
        }

        IedConnection_close(con);
    }
    else {
        printf("Connection to %s:%i FAILED! (Error: %i)\n", hostname, tcpPort, error);
    }

    IedConnection_destroy(con);
    return 0;
}