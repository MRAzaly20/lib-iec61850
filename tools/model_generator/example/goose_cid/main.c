/* goose_pub_manual_mms.c
 * Build MmsValue objects manually (robust across lib versions)
 */

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#ifdef _WIN32
#include <winsock2.h>
#endif

#include "goose_publisher.h"
#include "hal_thread.h"
#include "linked_list.h"
#include "mms_value.h"

#include "cid_parser.h"

/* parse MAC "01-0C-CD-01-00-01" */
static bool
parseMac(const char* macStr, uint8_t out[6])
{
    unsigned int mb[6];
    if (!macStr)
        return false;
    if (sscanf(macStr, "%02x-%02x-%02x-%02x-%02x-%02x", &mb[0], &mb[1], &mb[2], &mb[3], &mb[4], &mb[5]) != 6)
    {
        return false;
    }
    for (int i = 0; i < 6; i++)
        out[i] = (uint8_t)mb[i];
    return true;
}

/* helper to create MV MmsValue: structure { mag(struct{f}), q(bitstring), t(octet/binary time) } */
static MmsValue*
createAnalogMmsValue(float initial)
{
    /* ----------------------------
     * STEP 1: Define structure spec
     * ---------------------------- */

    /* Create typeSpec for MV (3 elements) */
    MmsVariableSpecification* mvSpec = (MmsVariableSpecification*)calloc(1, sizeof(MmsVariableSpecification));

    mvSpec->type = MMS_STRUCTURE;
    mvSpec->typeSpec.structure.elementCount = 3;
    mvSpec->typeSpec.structure.elements = (MmsVariableSpecification**)calloc(3, sizeof(MmsVariableSpecification*));

    /* ---- mag spec: structure with 1 float ---- */
    MmsVariableSpecification* magSpec = (MmsVariableSpecification*)calloc(1, sizeof(MmsVariableSpecification));
    magSpec->type = MMS_STRUCTURE;
    magSpec->typeSpec.structure.elementCount = 1;
    magSpec->typeSpec.structure.elements = (MmsVariableSpecification**)calloc(1, sizeof(MmsVariableSpecification*));

    MmsVariableSpecification* floatSpec = (MmsVariableSpecification*)calloc(1, sizeof(MmsVariableSpecification));
    floatSpec->type = MMS_FLOAT;
    floatSpec->typeSpec.floatingpoint.formatWidth = 32;
    floatSpec->typeSpec.floatingpoint.exponentWidth = 8;

    magSpec->typeSpec.structure.elements[0] = floatSpec;

    /* ---- q spec: bitstring(13) ---- */
    MmsVariableSpecification* qSpec = (MmsVariableSpecification*)calloc(1, sizeof(MmsVariableSpecification));
    qSpec->type = MMS_BIT_STRING;
    qSpec->typeSpec.bitString = 13;

    /* ---- t spec: octetString(8) ---- */
    MmsVariableSpecification* tSpec = (MmsVariableSpecification*)calloc(1, sizeof(MmsVariableSpecification));
    tSpec->type = MMS_OCTET_STRING;
    tSpec->typeSpec.octetString = 8;
    tSpec->typeSpec.octetString = 8;

    /* ---- bind MV structure ---- */
    mvSpec->typeSpec.structure.elements[0] = magSpec;
    mvSpec->typeSpec.structure.elements[1] = qSpec;
    mvSpec->typeSpec.structure.elements[2] = tSpec;

    /* ----------------------------
     * STEP 2: Create MV
     * ---------------------------- */
    MmsValue* mv = MmsValue_newStructure(mvSpec);

    /* MV[0] = mag */
    MmsValue* mag = MmsValue_getElement(mv, 0);
    MmsValue* f = MmsValue_newFloat(initial);
    MmsValue_setElement(mag, 0, f);
    /* MV[1] = q (clear bits = GOOD) */
    MmsValue* q = MmsValue_getElement(mv, 1);
    for (int i = 0; i < 13; i++)
        MmsValue_setBitStringBit(q, i, 0);

    /* MV[2] = t timestamp */
    MmsValue* t = MmsValue_getElement(mv, 2);
    uint64_t now = Hal_getTimeInMs();
    uint8_t buf[8];
    for (int i = 0; i < 8; i++)
        buf[7 - i] = (now >> (8 * i)) & 0xFF;

    MmsValue_setOctetString(t, buf, 8);

    return mv;
}

int
main(void)
{
    srand((unsigned int)time(NULL));
    printf("GOOSE PUB (manual MmsValue) starting...\n");

    CID_Config cfg;
    if (!parseCIDFile("simpleIO_direct_control.cid", &cfg))
    {
        fprintf(stderr, "CID parse failed (using defaults?)\n");
    }

    /* comm params */
    CommParameters gooseCommParameters;

    gooseCommParameters.appId = 0x1000;
    gooseCommParameters.dstAddress[0] = 0x01;
    gooseCommParameters.dstAddress[1] = 0x0c;
    gooseCommParameters.dstAddress[2] = 0xcd;
    gooseCommParameters.dstAddress[3] = 0x01;
    gooseCommParameters.dstAddress[4] = 0x01;
    gooseCommParameters.dstAddress[5] = 0xbe;
    gooseCommParameters.vlanId = 0;
    gooseCommParameters.vlanPriority = 4;

    GoosePublisher pub = GoosePublisher_create(&gooseCommParameters, "9");
    if (!pub)
    {
        fprintf(stderr, "GoosePublisher_create failed\n");
        return -1;
    }
    GoosePublisher_setGoCbRef(pub, cfg.goCbRef);
    GoosePublisher_setDataSetRef(pub, cfg.datasetRef[0] ? cfg.datasetRef : cfg.datasetName);
    GoosePublisher_setConfRev(pub, 1);
    GoosePublisher_setTimeAllowedToLive(pub, 1000);

    /* Build LinkedList of MmsValue values (head) */
    LinkedList values = LinkedList_create();

    for (int i = 0; i < cfg.fcdaCount; i++)
    {
        if (cfg.fcdaList[i].isAnalog)
        {
            MmsValue* mv = createAnalogMmsValue(0.0f); /* init 0.0 */
            LinkedList_add(values, mv);
        }
        else
        {
            MmsValue* b = MmsValue_newBoolean(false);
            LinkedList_add(values, b);
        }
    }

    /* ensure first frame is sent */
    GoosePublisher_increaseStNum(pub);
    // GoosePublisher_increaseSqNum(pub);

    printf("Publishing loop start (fcdaCount=%d)\n", cfg.fcdaCount);
    printf("goCB ref=%s\n", cfg.goCbRef);
    printf("dataset ref=%s\n", cfg.datasetRef[0] ? cfg.datasetRef : cfg.datasetName);
    while (1)
    {
        /* update each element */
        LinkedList node = values->next;
        int idx = 0;
        while (node && idx < cfg.fcdaCount)
        {
            MmsValue* v = node->data;
            if (cfg.fcdaList[idx].isAnalog)
            {
                /* navigate to mag->f */
                MmsValue* mag = MmsValue_getElement(v, 0);
                if (mag)
                {
                    MmsValue* f = MmsValue_getElement(mag, 0);
                    if (f)
                    {
                        float newVal = (float)(rand() % 500) / 10.0f;
                        MmsValue_setFloat(f, newVal);
                        /* debug print */
                        // printf("set fcda %d -> %.2f\n", idx, newVal);
                    }
                }
                /* update octet timestamp */
                MmsValue* t = MmsValue_getElement(v, 2);
                if (t)
                {
                    uint64_t now = (uint64_t)Hal_getTimeInMs();
                    uint8_t oct[8];
                    for (int j = 0; j < 8; j++)
                        oct[7 - j] = (uint8_t)((now >> (8 * j)) & 0xFF);
                    MmsValue_setOctetString(t, oct, 8);
                }
            }
            else
            {
                bool newVal = (rand() % 2) ? true : false;
                MmsValue_setBoolean(v, newVal);
            }
            node = node->next;
            idx++;
        }

        GoosePublisher_increaseStNum(pub);
        // GoosePublisher_increaseSqNum(pub);
        GoosePublisher_publish(pub, values);

        printf("GOOSE published stNum++\n");
        Thread_sleep(1000);
    }

    return 0;
}