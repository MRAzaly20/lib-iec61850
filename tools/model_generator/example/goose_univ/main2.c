/*
 * goose_pub_final.c
 *
 * Dynamic GOOSE Publisher (CID-driven) compatible with final subscriber
 * - parses CID using parseCIDFile()
 * - creates publishers for all GoCB entries
 * - maintains dataset values outside GoosePublisher
 * - publishes periodically
 *
 * Build (example):
 * gcc -o goose_pub_final goose_pub_final.c cid_parser.c -liec61850 -lxml2
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

#include "cid_parser.h"
#include "goose_publisher.h"
#include "hal_thread.h"
#include "linked_list.h"
#include "mms_value.h"

/* ============================================================
 * Create analog MMS value (MAG, Q, T)
 * ============================================================ */
static MmsValue*
createAnalogMmsValue(float initial)
{
    MmsVariableSpecification* mvSpec = calloc(1, sizeof(MmsVariableSpecification));
    mvSpec->type = MMS_STRUCTURE;
    mvSpec->typeSpec.structure.elementCount = 3;
    mvSpec->typeSpec.structure.elements = calloc(3, sizeof(MmsVariableSpecification*));

    // MAG
    MmsVariableSpecification* magSpec = calloc(1, sizeof(MmsVariableSpecification));
    magSpec->type = MMS_STRUCTURE;
    magSpec->typeSpec.structure.elementCount = 1;
    magSpec->typeSpec.structure.elements = calloc(1, sizeof(MmsVariableSpecification*));

    MmsVariableSpecification* floatSpec = calloc(1, sizeof(MmsVariableSpecification));
    floatSpec->type = MMS_FLOAT;
    floatSpec->typeSpec.floatingpoint.formatWidth = 32;
    floatSpec->typeSpec.floatingpoint.exponentWidth = 8;
    magSpec->typeSpec.structure.elements[0] = floatSpec;

    // Q
    MmsVariableSpecification* qSpec = calloc(1, sizeof(MmsVariableSpecification));
    qSpec->type = MMS_BIT_STRING;
    qSpec->typeSpec.bitString = 13;

    // T
    MmsVariableSpecification* tSpec = calloc(1, sizeof(MmsVariableSpecification));
    tSpec->type = MMS_OCTET_STRING;
    tSpec->typeSpec.octetString = 8;

    mvSpec->typeSpec.structure.elements[0] = magSpec;
    mvSpec->typeSpec.structure.elements[1] = qSpec;
    mvSpec->typeSpec.structure.elements[2] = tSpec;

    MmsValue* mv = MmsValue_newStructure(mvSpec);

    // MAG value
    MmsValue* mag = MmsValue_getElement(mv, 0);
    MmsValue_setElement(mag, 0, MmsValue_newFloat(initial));

    // Q default
    MmsValue* q = MmsValue_getElement(mv, 1);
    for (int i = 0; i < 13; i++)
        MmsValue_setBitStringBit(q, i, 0);

    // T timestamp
    MmsValue* t = MmsValue_getElement(mv, 2);
    uint64_t now = Hal_getTimeInMs();
    uint8_t buf[8];
    for (int i = 0; i < 8; i++)
        buf[7 - i] = (now >> (8 * i)) & 0xFF;
    MmsValue_setOctetString(t, buf, 8);

    return mv;
}

/* ============================================================
 * Main
 * ============================================================ */
int
main(void)
{
    printf("=== Dynamic GOOSE Publisher (final) ===\n");
    srand((unsigned int)time(NULL));

    // Parse CID
    CID_Config_Universal cfg;
    if (!parseCIDFile("simpleIO_direct_control.cid", &cfg))
    {
        fprintf(stderr, "CID parse failed\n");
        return -1;
    }

    printf("GoCB found = %d\nDatasets found = %d\n", cfg.goCbCount, cfg.datasetCount);

    // Allocate publishers and values
    GoosePublisher* pubs = calloc(cfg.goCbCount, sizeof(GoosePublisher));
    LinkedList* pubValues = calloc(cfg.goCbCount, sizeof(LinkedList));

    for (int g = 0; g < cfg.goCbCount; g++)
    {
        CID_GoCB* gcb = &cfg.goCbs[g];

        // Build GoCB and dataset references like subscriber
        char goCbRef[256], dataSetRef[256];
        if (gcb->iedName[0] && gcb->ldInst[0])
        {
            snprintf(goCbRef, sizeof(goCbRef), "%s%s/LLN0$GO$%s", gcb->iedName, gcb->ldInst, gcb->name);
            snprintf(dataSetRef, sizeof(dataSetRef), "%s%s/LLN0$%s", gcb->iedName, gcb->ldInst, gcb->datSet);
        }
        else if (gcb->iedName[0])
        {
            snprintf(goCbRef, sizeof(goCbRef), "%s/LLN0$GO$%s", gcb->iedName, gcb->name);
            snprintf(dataSetRef, sizeof(dataSetRef), "%s/LLN0$%s", gcb->iedName, gcb->datSet);
        }
        else
        {
            snprintf(goCbRef, sizeof(goCbRef), "LLN0$GO$%s", gcb->name);
            snprintf(dataSetRef, sizeof(dataSetRef), "LLN0$%s", gcb->datSet);
        }

        printf("Creating publisher: %s dataset=%s\n", goCbRef, dataSetRef);

        // Network parameters
        // CommParameters params;
        // params.appId = gcb->appId > 0 ? gcb->appId : 1000;
        // params.vlanId = gcb->vlanId;
        // params.vlanPriority = gcb->vlanPrio;
        // uint8_t defMac[6] = {0x01, 0x0c, 0xcd, 0x01, 0x00, 0x01};
        // memcpy(params.dstAddress, defMac, 6);
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
        // Create publisher
        pubs[g] = GoosePublisher_create(&gooseCommParameters, "9");
        if (!pubs[g])
        {
            fprintf(stderr, "Failed to create publisher %s\n", goCbRef);
            continue;
        }

        GoosePublisher_setGoCbRef(pubs[g], goCbRef);
        GoosePublisher_setDataSetRef(pubs[g], dataSetRef);
        GoosePublisher_setConfRev(pubs[g], 1);
        GoosePublisher_setTimeAllowedToLive(pubs[g], 1000);

        // Create dataset values outside the struct
        // Create dataset values outside the struct
        pubValues[g] = LinkedList_create();

        /* --- robust lookup: try exact name, then try name after last '$' if any --- */
        CID_DataSet* ds = NULL;
        for (int d = 0; d < cfg.datasetCount; d++)
        {
            if (strcmp(cfg.datasets[d].name, gcb->datSet) == 0)
            {
                ds = &cfg.datasets[d];
                break;
            }
        }

        /* fallback: if gcb->datSet contains path or $ prefix (e.g. "IED/LD/LLN0$Events"),
           extract substring after last '$' and try again */
        if (!ds)
        {
            const char* lastDollar = strrchr(gcb->datSet, '$');
            if (lastDollar && lastDollar[1] != '\0')
            {
                const char* justName = lastDollar + 1;
                for (int d = 0; d < cfg.datasetCount; d++)
                {
                    if (strcmp(cfg.datasets[d].name, justName) == 0)
                    {
                        ds = &cfg.datasets[d];
                        break;
                    }
                }
                if (ds)
                {
                    printf("[INFO] matched dataset by $-suffix: '%s' -> '%s'\n", gcb->datSet, ds->name);
                }
            }
        }

        /* If still not found, print all parsed dataset names for debugging */
        if (!ds)
        {
            printf("[WARN] Dataset '%s' not found in parsed CID. Listing parsed datasets:\n", gcb->datSet);
            for (int d = 0; d < cfg.datasetCount; d++)
            {
                printf("  parsed dataset[%d] = '%s' (items=%d)\n", d, cfg.datasets[d].name, cfg.datasets[d].itemCount);
            }
            continue; /* skip this publisher entry */
        }

        /* If dataset found but itemCount==0, print details for debugging */
        if (ds->itemCount == 0)
        {
            printf("[WARN] Dataset '%s' found but itemCount == 0. Dumping parsed FCDA entries (if any):\n", ds->name);
            for (int f = 0; f < ds->maxItems && f < 16; f++)
            { /* just first few for safety */
                FCDA_Item* it = &ds->items[f];
                if (it->doName[0] == '\0')
                    break;
                printf("   FCDA[%d] ldInst='%s' lnClass='%s' lnInst='%s' doName='%s' daName='%s' fc='%s' isAnalog=%d\n",
                       f, it->ldInst, it->lnClass, it->lnInst, it->doName, it->daName, it->fc, it->isAnalog);
            }
            /* still allow continuing (but nothing will be added) */
        }

        /* now build LinkedList items only if ds->itemCount > 0 */
        if (ds->itemCount > 0)
        {
            for (int i = 0; i < ds->itemCount; i++)
            {
                if (ds->items[i].isAnalog)
                {
                    printf("  FCDA %d: %s.%s.%s (analog)\n", i, ds->items[i].lnClass, ds->items[i].doName,
                           ds->items[i].daName);
                    LinkedList_add(pubValues[g], createAnalogMmsValue(0.0f));
                }
                else
                {
                    printf("  FCDA %d: %s.%s.%s (boolean)\n", i, ds->items[i].lnClass, ds->items[i].doName,
                           ds->items[i].daName);
                    LinkedList_add(pubValues[g], MmsValue_newBoolean(false));
                }
            }
        }
        else
        {
            printf("[INFO] Skipping payload creation for GoCB '%s' because dataset '%s' contains 0 items\n", gcb->name,
                   ds->name);
        }
    }

    printf("=== Publishing loop start ===\n");

    while (1)
    {
        for (int g = 0; g < cfg.goCbCount; g++)
        {
            // Update values
            LinkedList n = pubValues[g]->next;
            int idx = 0;
            CID_DataSet* ds = NULL;
            for (int d = 0; d < cfg.datasetCount; d++)
            {
                if (strcmp(cfg.datasets[d].name, cfg.goCbs[g].datSet) == 0)
                {
                    ds = &cfg.datasets[d];
                    break;
                }
            }
            if (!ds)
                continue;

            while (n && idx < ds->itemCount)
            {
                MmsValue* v = n->data;
                if (ds->items[idx].isAnalog)
                {
                    MmsValue* mag = MmsValue_getElement(v, 0);
                    MmsValue* f = MmsValue_getElement(mag, 0);
                    float newVal = (rand() % 500) / 10.0f;
                    MmsValue_setFloat(f, newVal);

                    // MmsValue* t = MmsValue_getElement(v, 2);
                    // uint64_t now = Hal_getTimeInMs();
                    // uint8_t buf[8];
                    // for (int j = 0; j < 8; j++) buf[7 - j] = (now >> (8 * j)) & 0xFF;
                    // MmsValue_setOctetString(t, buf, 8);/
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
                    bool newVal = rand() % 2;
                    MmsValue_setBoolean(v, newVal);
                }
                n = n->next;
                idx++;
            }

            GoosePublisher_increaseStNum(pubs[g]);
            GoosePublisher_publish(pubs[g], pubValues[g]);
        }
        Thread_sleep(1000);
    }

    return 0;
}