/*
 main.c - final GOOSE publisher (CID-driven)
 Build:
   gcc -o goose_pub_final main.c cid_parser.c -liec61850 -lxml2
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

/* helper: fill 8-byte timestamp from Hal_getTimeInMs */
static void
fillTimestampOctet(uint8_t out[8])
{
    uint64_t now = (uint64_t)Hal_getTimeInMs();
    for (int i = 0; i < 8; i++)
        out[7 - i] = (uint8_t)((now >> (8 * i)) & 0xFF);
}

/* ---------------------------
   Create MV value (MAG, Q, T)
   structure: { MAG { FLOAT }, Q BIT-STRING(13), T OCTET-STRING(8) }
   --------------------------- */
static MmsValue*
createMVValue(float initial)
{
    MmsVariableSpecification* mvSpec = calloc(1, sizeof(MmsVariableSpecification));
    mvSpec->type = MMS_STRUCTURE;
    mvSpec->typeSpec.structure.elementCount = 3;
    mvSpec->typeSpec.structure.elements = calloc(3, sizeof(MmsVariableSpecification*));

    // MAG -> STRUCT { FLOAT }
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

    // set MAG float
    MmsValue* mag = MmsValue_getElement(mv, 0);
    MmsValue_setElement(mag, 0, MmsValue_newFloat(initial));

    // q default zeros
    MmsValue* q = MmsValue_getElement(mv, 1);
    if (q)
        for (int i = 0; i < 13; i++)
            MmsValue_setBitStringBit(q, i, 0);

    // timestamp
    MmsValue* t = MmsValue_getElement(mv, 2);
    if (t)
    {
        uint8_t buf[8];
        fillTimestampOctet(buf);
        MmsValue_setOctetString(t, buf, 8);
    }

    return mv;
}

/* ---------------------------
   Create SPS (stVal, q, t)
   --------------------------- */
static MmsValue*
createSPSValue(bool initial)
{
    MmsVariableSpecification* spec = calloc(1, sizeof(MmsVariableSpecification));
    spec->type = MMS_STRUCTURE;
    spec->typeSpec.structure.elementCount = 3;
    spec->typeSpec.structure.elements = calloc(3, sizeof(MmsVariableSpecification*));

    MmsVariableSpecification* stValSpec = calloc(1, sizeof(MmsVariableSpecification));
    stValSpec->type = MMS_BOOLEAN;

    MmsVariableSpecification* qSpec = calloc(1, sizeof(MmsVariableSpecification));
    qSpec->type = MMS_BIT_STRING;
    qSpec->typeSpec.bitString = 13;

    MmsVariableSpecification* tSpec = calloc(1, sizeof(MmsVariableSpecification));
    tSpec->type = MMS_OCTET_STRING;
    tSpec->typeSpec.octetString = 8;

    spec->typeSpec.structure.elements[0] = stValSpec;
    spec->typeSpec.structure.elements[1] = qSpec;
    spec->typeSpec.structure.elements[2] = tSpec;

    MmsValue* v = MmsValue_newStructure(spec);
    MmsValue_setBoolean(MmsValue_getElement(v, 0), initial);

    MmsValue* qv = MmsValue_getElement(v, 1);
    if (qv)
        for (int i = 0; i < 13; i++)
            MmsValue_setBitStringBit(qv, i, 0);

    uint8_t buf[8];
    fillTimestampOctet(buf);
    MmsValue_setOctetString(MmsValue_getElement(v, 2), buf, 8);

    return v;
}

/* ---------------------------
   Create SPC (controllable single point) - modeled as {stVal, q, t, ctlModel}
   --------------------------- */
static MmsValue*
createSPCValue(bool initial)
{
    MmsVariableSpecification* spec = calloc(1, sizeof(MmsVariableSpecification));
    spec->type = MMS_STRUCTURE;
    spec->typeSpec.structure.elementCount = 4;
    spec->typeSpec.structure.elements = calloc(4, sizeof(MmsVariableSpecification*));

    MmsVariableSpecification* stValSpec = calloc(1, sizeof(MmsVariableSpecification));
    stValSpec->type = MMS_BOOLEAN;

    MmsVariableSpecification* qSpec = calloc(1, sizeof(MmsVariableSpecification));
    qSpec->type = MMS_BIT_STRING;
    qSpec->typeSpec.bitString = 13;

    MmsVariableSpecification* tSpec = calloc(1, sizeof(MmsVariableSpecification));
    tSpec->type = MMS_OCTET_STRING;
    tSpec->typeSpec.octetString = 8;

    MmsVariableSpecification* ctlSpec = calloc(1, sizeof(MmsVariableSpecification));
    ctlSpec->type = MMS_INTEGER;

    spec->typeSpec.structure.elements[0] = stValSpec;
    spec->typeSpec.structure.elements[1] = qSpec;
    spec->typeSpec.structure.elements[2] = tSpec;
    spec->typeSpec.structure.elements[3] = ctlSpec;

    MmsValue* v = MmsValue_newStructure(spec);
    MmsValue_setBoolean(MmsValue_getElement(v, 0), initial);

    MmsValue* qv = MmsValue_getElement(v, 1);
    if (qv)
        for (int i = 0; i < 13; i++)
            MmsValue_setBitStringBit(qv, i, 0);

    uint8_t buf[8];
    fillTimestampOctet(buf);
    MmsValue_setOctetString(MmsValue_getElement(v, 2), buf, 8);

    // ctlModel default 0 (use MmsValue_setInt32)
    MmsValue_setInt32(MmsValue_getElement(v, 3), 0);

    return v;
}

/* ---------------------------
   Create ENS (enumerated) and INS (integer)
   We'll represent ENS as INTEGER in MMS structure {stVal:int, q, t}
   --------------------------- */
static MmsValue*
createENSValue(int initial)
{
    MmsVariableSpecification* spec = calloc(1, sizeof(MmsVariableSpecification));
    spec->type = MMS_STRUCTURE;
    spec->typeSpec.structure.elementCount = 3;
    spec->typeSpec.structure.elements = calloc(3, sizeof(MmsVariableSpecification*));

    MmsVariableSpecification* stValSpec = calloc(1, sizeof(MmsVariableSpecification));
    stValSpec->type = MMS_INTEGER;

    MmsVariableSpecification* qSpec = calloc(1, sizeof(MmsVariableSpecification));
    qSpec->type = MMS_BIT_STRING;
    qSpec->typeSpec.bitString = 13;

    MmsVariableSpecification* tSpec = calloc(1, sizeof(MmsVariableSpecification));
    tSpec->type = MMS_OCTET_STRING;
    tSpec->typeSpec.octetString = 8;

    spec->typeSpec.structure.elements[0] = stValSpec;
    spec->typeSpec.structure.elements[1] = qSpec;
    spec->typeSpec.structure.elements[2] = tSpec;

    MmsValue* v = MmsValue_newStructure(spec);
    MmsValue_setInt32(MmsValue_getElement(v, 0), initial);

    MmsValue* qv = MmsValue_getElement(v, 1);
    if (qv)
        for (int i = 0; i < 13; i++)
            MmsValue_setBitStringBit(qv, i, 0);

    uint8_t buf[8];
    fillTimestampOctet(buf);
    MmsValue_setOctetString(MmsValue_getElement(v, 2), buf, 8);

    return v;
}

static MmsValue*
createINSValue(int initial)
{
    return createENSValue(initial);
}

/* ---------------------------
   Heuristic mapper from FCDA to MMS structure
   - if isAnalog -> MV
   - else inspect daName / lnClass / fc for stVal -> SPS/ENS/SPC/INS
   - fallback -> SPS
   --------------------------- */
static MmsValue*
createMmsValueForFcda(const FCDA_Item* it)
{
    if (!it)
        return MmsValue_newBoolean(false);

    if (it->isAnalog)
    {
        return createMVValue(0.0f);
    }

    const char* da = it->daName ? it->daName : "";
    const char* ln = it->lnClass ? it->lnClass : "";
    const char* fc = it->fc ? it->fc : "";

    // lowercase copies for simple case-insensitive checks
    char da_l[128] = {0}, ln_l[128] = {0}, fc_l[32] = {0};
    for (size_t i = 0; i < sizeof(da_l) - 1 && da[i]; i++)
        da_l[i] = (char)tolower((unsigned char)da[i]);
    for (size_t i = 0; i < sizeof(ln_l) - 1 && ln[i]; i++)
        ln_l[i] = (char)tolower((unsigned char)ln[i]);
    for (size_t i = 0; i < sizeof(fc_l) - 1 && fc[i]; i++)
        fc_l[i] = (char)tolower((unsigned char)fc[i]);

    if (strstr(da_l, "stval") || strstr(da_l, "st_val") || strstr(da_l, "st"))
    {
        // detect enumerated
        if (strstr(ln_l, "enum") || strstr(da_l, "enum"))
        {
            printf("[MAP] %s.%s.%s -> ENS\n", it->lnClass, it->doName, it->daName);
            return createENSValue(0);
        }
        // detect control / CO
        if (strstr(fc_l, "co") || strstr(ln_l, "ctl") || strstr(ln_l, "spc"))
        {
            printf("[MAP] %s.%s.%s -> SPC\n", it->lnClass, it->doName, it->daName);
            return createSPCValue(false);
        }
        // otherwise SPS
        printf("[MAP] %s.%s.%s -> SPS\n", it->lnClass, it->doName, it->daName);
        return createSPSValue(false);
    }

    // some DA names indicate MV
    if (strstr(da_l, "mag") || strstr(da_l, "val") || strstr(da_l, "phs"))
    {
        printf("[MAP] %s.%s.%s -> MV (heuristic)\n", it->lnClass, it->doName, it->daName);
        return createMVValue(0.0f);
    }

    // fallback
    printf("[MAP] %s.%s.%s -> fallback SPS\n", it->lnClass, it->doName, it->daName);
    return createSPSValue(false);
}

/* ---------------------------
   main
   --------------------------- */
int
main(void)
{
    printf("=== Dynamic GOOSE Publisher (final) ===\n");
    srand((unsigned int)time(NULL));

    CID_Config_Universal cfg;
    if (!parseCIDFile("simpleIO_direct_control.cid", &cfg))
    {
        fprintf(stderr, "CID parse failed\n");
        return -1;
    }

    printf("GoCB found = %d\nDatasets found = %d\n", cfg.goCbCount, cfg.datasetCount);

    /* allocate publishers array and linkedlist array (LinkedList is typedef pointer) */
    GoosePublisher* pubs = calloc(cfg.goCbCount, sizeof(GoosePublisher));
    LinkedList* pubValues = calloc(cfg.goCbCount, sizeof(LinkedList)); // array of LinkedList

    for (int g = 0; g < cfg.goCbCount; g++)
    {
        CID_GoCB* gcb = &cfg.goCbs[g];

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

        // network params
        // CommParameters params;
        // params.appId = gcb->appId > 0 ? gcb->appId : 1000;
        // params.vlanId = gcb->vlanId;
        // params.vlanPriority = gcb->vlanPrio;

        // uint8_t mac[6] = {0x50, 0x3E, 0xAA, 0x12, 0xEE, 0xF0};
        // uint8_t defMac[6] = {0x01,0x0c,0xcd,0x01,0x00,0x01};
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

        pubValues[g] = LinkedList_create();

        // find dataset by name (robust lookup)
        CID_DataSet* ds = NULL;
        for (int d = 0; d < cfg.datasetCount; d++)
        {
            if (strcmp(cfg.datasets[d].name, gcb->datSet) == 0)
            {
                ds = &cfg.datasets[d];
                break;
            }
        }
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
                    printf("[INFO] matched dataset by $-suffix: '%s' -> '%s'\n", gcb->datSet, ds->name);
            }
        }

        if (!ds)
        {
            printf("[WARN] Dataset '%s' not found. Available datasets:\n", gcb->datSet);
            for (int d = 0; d < cfg.datasetCount; d++)
                printf("  %d: '%s' items=%d\n", d, cfg.datasets[d].name, cfg.datasets[d].itemCount);
            continue;
        }

        if (ds->itemCount == 0)
        {
            printf("[WARN] Dataset '%s' has 0 items\n", ds->name);
        }

        // create mms values for each FCDA in dataset
        for (int i = 0; i < ds->itemCount; i++)
        {
            FCDA_Item* it = &ds->items[i];
            MmsValue* v = createMmsValueForFcda(it);
            LinkedList_add(pubValues[g], v);
        }
    }

    printf("=== Publishing loop start ===\n");

    for (;;)
    {
        for (int g = 0; g < cfg.goCbCount; g++)
        {
            if (!pubs[g] || !pubValues[g])
                continue;

            // find dataset again to know itemCount
            CID_DataSet* ds = NULL;
            for (int d = 0; d < cfg.datasetCount; d++)
                if (strcmp(cfg.datasets[d].name, cfg.goCbs[g].datSet) == 0)
                {
                    ds = &cfg.datasets[d];
                    break;
                }
            if (!ds)
                continue;

            LinkedList n = pubValues[g];
            int idx = 0;
            while (n && idx < ds->itemCount)
            {
                MmsValue* v = (MmsValue*)n->data;

                if (!v)
                {
                    n = n->next;
                    idx++;
                    continue;
                }

                // detect MV: structure with nested float
                MmsValue* first = MmsValue_getElement(v, 0);
                if (first && MmsValue_getType(first) == MMS_STRUCTURE)
                {
                    MmsValue* nested = MmsValue_getElement(first, 0);
                    if (nested && MmsValue_getType(nested) == MMS_FLOAT)
                    {
                        float newVal = (rand() % 500) / 10.0f;
                        MmsValue_setFloat(nested, newVal);
                        // update timestamp
                        MmsValue* t = MmsValue_getElement(v, 2);
                        if (t)
                        {
                            uint8_t oct[8];
                            fillTimestampOctet(oct);
                            MmsValue_setOctetString(t, oct, 8);
                        }
                    }
                    else
                    {
                        // fallback: if first elem is boolean/integer, update accordingly
                        if (MmsValue_getType(first) == MMS_BOOLEAN)
                        {
                            bool b = rand() % 2;
                            MmsValue_setBoolean(first, b);
                        }
                        else if (MmsValue_getType(first) == MMS_INTEGER)
                        {
                            MmsValue_setInt32(first, rand() % 100);
                        }
                    }
                }
                else if (first && MmsValue_getType(first) == MMS_BOOLEAN)
                {
                    MmsValue_setBoolean(first, rand() % 2);
                    MmsValue* t = MmsValue_getElement(v, 2);
                    if (t)
                    {
                        uint8_t oct[8];
                        fillTimestampOctet(oct);
                        MmsValue_setOctetString(t, oct, 8);
                    }
                }
                else if (first && MmsValue_getType(first) == MMS_INTEGER)
                {
                    MmsValue_setInt32(first, rand() % 10);
                    MmsValue* t = MmsValue_getElement(v, 2);
                    if (t)
                    {
                        uint8_t oct[8];
                        fillTimestampOctet(oct);
                        MmsValue_setOctetString(t, oct, 8);
                    }
                }
                else
                {
                    // final fallback: if v itself is boolean
                    if (MmsValue_getType(v) == MMS_BOOLEAN)
                        MmsValue_setBoolean(v, rand() % 2);
                }

                n = n->next;
                idx++;
            }

            GoosePublisher_increaseStNum(pubs[g]);
            GoosePublisher_publish(pubs[g], pubValues[g]);
        }

        Thread_sleep(1000);
    }

    // never reached, but free resources if you extend with graceful exit
    free(pubs);
    free(pubValues);
    freeCIDConfig(&cfg);

    return 0;
}