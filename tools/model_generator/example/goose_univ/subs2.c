/*
 * goose_subscriber_final.c
 *
 * Final GOOSE Subscriber (CID parser universal)
 * - parses CID/SCL using parseCIDFile()
 * - subscribes to all GoCB entries in CID
 * - decodes dataset including MV (mag.f), quality (q), timestamp (t)
 * - prints human-readable output
 *
 * Build (example):
 *   gcc -o goose_subscriber_final goose_subscriber_final.c cid_parser.c -liec61850 -lxml2
 */

#include <signal.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "cid_parser.h"
#include "goose_receiver.h"
#include "goose_subscriber.h"
#include "hal_thread.h"
#include "mms_value.h"

static int running = 1;

static void
sigint_handler(int sig)
{
    (void)sig;
    running = 0;
}

/* Parse MAC string to 6-byte array */
static bool
parseMacStr(const char* macStr, uint8_t out[6])
{
    if (!macStr)
        return false;
    int vals[6] = {0};
    if (sscanf(macStr, "%02x-%02x-%02x-%02x-%02x-%02x", &vals[0], &vals[1], &vals[2], &vals[3], &vals[4], &vals[5]) ==
        6)
    {
        for (int i = 0; i < 6; i++)
            out[i] = (uint8_t)vals[i];
        return true;
    }
    if (sscanf(macStr, "%02x:%02x:%02x:%02x:%02x:%02x", &vals[0], &vals[1], &vals[2], &vals[3], &vals[4], &vals[5]) ==
        6)
    {
        for (int i = 0; i < 6; i++)
            out[i] = (uint8_t)vals[i];
        return true;
    }
    size_t len = strlen(macStr);
    if (len == 12)
    {
        for (int i = 0; i < 6; i++)
        {
            char buf[3] = {macStr[i * 2], macStr[i * 2 + 1], 0};
            out[i] = (uint8_t)strtol(buf, NULL, 16);
        }
        return true;
    }
    return false;
}

/* Decode IEC61850 quality (16-bit) */
static void
decodeQuality2(uint16_t q, char* out, size_t size)
{
    const char* validity = "GOOD";
    uint8_t validityBits = q & 0x3;
    if (validityBits == 1)
        validity = "INVALID";
    else if (validityBits == 2)
        validity = "RESERVED";
    else if (validityBits == 3)
        validity = "QUESTIONABLE";

    snprintf(out, size, "%s (Ov=%d, OutOfRange=%d, BadRef=%d, Osc=%d, Fail=%d, Old=%d, Inacc=%d, Src=%s)", validity,
             (q >> 2) & 1, (q >> 3) & 1, (q >> 4) & 1, (q >> 5) & 1, (q >> 6) & 1, (q >> 7) & 1,
             ((q >> 10) & 1) ? "substituted" : "process");
}

/* Decode 8-byte IEC61850 timestamp to human-readable UTC */
static void
decodeTimestamp2(const uint8_t* tBuf, char* out, size_t size)
{
    if (!tBuf || !out)
        return;
    uint32_t sec = ((uint32_t)tBuf[0] << 24) | ((uint32_t)tBuf[1] << 16) | ((uint32_t)tBuf[2] << 8) | tBuf[3];
    uint32_t frac = ((uint32_t)tBuf[4] << 24) | ((uint32_t)tBuf[5] << 16) | ((uint32_t)tBuf[6] << 8) | tBuf[7];
    double fracUnit = (double)frac / (double)0xFFFFFFFFu;
    uint32_t micros = (uint32_t)(fracUnit * 1000000.0);

    time_t t_sec = (time_t)sec;
    struct tm tm_info;
#if defined(_WIN32)
    gmtime_s(&tm_info, &t_sec);
#else
    gmtime_r(&t_sec, &tm_info);
#endif
    snprintf(out, size, "%04d-%02d-%02d %02d:%02d:%02d.%03u UTC", tm_info.tm_year + 1900, tm_info.tm_mon + 1,
             tm_info.tm_mday, tm_info.tm_hour, tm_info.tm_min, tm_info.tm_sec, micros / 1000);
}

/* Print MMSValue in human-readable form */
static void
printMmsValue(MmsValue* v)
{
    if (!v)
    {
        printf(" <NULL>\n");
        return;
    }
    MmsType t = MmsValue_getType(v);
    switch (t)
    {
    case MMS_BOOLEAN:
        printf(" BOOLEAN = %s\n", MmsValue_getBoolean(v) ? "TRUE" : "FALSE");
        break;
    case MMS_INTEGER:
        printf(" INTEGER = %lld\n", (long long)MmsValue_toInt64(v));
        break;
    case MMS_FLOAT:
        printf(" FLOAT = %f\n", MmsValue_toFloat(v));
        break;
    case MMS_VISIBLE_STRING:
        printf(" STRING = %s\n", MmsValue_toString(v));
        break;
    default:
        printf(" [TYPE %d]\n", t);
        break;
    }
}
/* Decode IEC61850 quality (assume up to 32-bit container but only bitLen bits valid) */
static void
decodeQuality(uint32_t qBits, int bitLen, char* out, size_t size)
{
    (void)bitLen; /* bitLen available if you want to interpret different sizes */

    /* validity (2 LSBs) */
    uint8_t validityBits = qBits & 0x3;
    const char* validity = "GOOD";
    if (validityBits == 1)
        validity = "INVALID";
    else if (validityBits == 2)
        validity = "RESERVED";
    else if (validityBits == 3)
        validity = "QUESTIONABLE";

    int ov = (qBits >> 2) & 0x1;
    int outOfRange = (qBits >> 3) & 0x1;
    int badRef = (qBits >> 4) & 0x1;
    int oscill = (qBits >> 5) & 0x1;
    int failure = (qBits >> 6) & 0x1;
    int oldData = (qBits >> 7) & 0x1;
    int inacc = (qBits >> 8) & 0x1; /* bit positions depend on encoding, adapt if needed */
    int substituted = (qBits >> 10) & 0x1;
    const char* src = substituted ? "substituted" : "process";

    /* Compose safe string */
    snprintf(out, size, "%s (Ov=%d, OutOfRange=%d, BadRef=%d, Osc=%d, Fail=%d, Old=%d, Inacc=%d, Src=%s)", validity, ov,
             outOfRange, badRef, oscill, failure, oldData, inacc, src);
}
static void
decodeTimestamp(const uint8_t* tBuf, char* out, size_t size)
{
    uint32_t secondsSinceEpoch = (tBuf[0] << 24) | (tBuf[1] << 16) | (tBuf[2] << 8) | tBuf[3];

    uint32_t fracSec = (tBuf[4] << 24) | (tBuf[5] << 16) | (tBuf[6] << 8) | tBuf[7];

    /* Convert fractional seconds (24 bits) → microseconds */
    uint32_t micros = (uint32_t)(fracSec / 16777.216);

    time_t sec = secondsSinceEpoch;
    struct tm* tm_info = gmtime(&sec);

    snprintf(out, size, "%04d-%02d-%02d %02d:%02d:%02d.%03u UTC", tm_info->tm_year + 1900, tm_info->tm_mon + 1,
             tm_info->tm_mday, tm_info->tm_hour, tm_info->tm_min, tm_info->tm_sec, micros / 1000);
}

static void
hexdump(const uint8_t* buf, int len)
{
    if (!buf)
        return;
    for (int i = 0; i < len; i++)
        printf("%02X ", buf[i]);
    printf("\n");
}

static void
datasetDump(MmsValue* dataset)
{
    if (!dataset)
        return;
    int count = MmsValue_getArraySize(dataset);
    for (int i = 0; i < count; i++)
    {
        MmsValue* v = MmsValue_getElement(dataset, i);
        printf(" [%d] ", i);
        if (MmsValue_getType(v) == MMS_STRUCTURE)
        {
            /* mag.f */
            MmsValue* mag = MmsValue_getElement(v, 0);
            if (mag && MmsValue_getType(mag) == MMS_STRUCTURE)
            {
                MmsValue* f = MmsValue_getElement(mag, 0);
                if (f && MmsValue_getType(f) == MMS_FLOAT)
                {
                    printf("ANALOG = %.3f\n", MmsValue_toFloat(f));
                }
                else
                    printf("ANALOG = <INVALID>\n");
            }

            /* quality (BIT-STRING) */
            MmsValue* q = MmsValue_getElement(v, 1);
            if (q && MmsValue_getType(q) == MMS_BIT_STRING)
            {
                int bitLen = MmsValue_getBitStringSize(q);        /* e.g. 13 */
                uint32_t raw = MmsValue_getBitStringAsInteger(q); /* returns unsigned integer */
                uint32_t mask = (bitLen >= 32) ? 0xFFFFFFFFu : ((1u << bitLen) - 1u);
                uint32_t qBits = raw & mask;

                char qs[256];
                decodeQuality(qBits, bitLen, qs, sizeof(qs));
                printf("     q = %s\n", qs);
            }
            else
            {
                printf("     q = <INVALID>\n");
            }

            /* timestamp (OCTET STRING) */
            MmsValue* t = MmsValue_getElement(v, 2);
            if (t && MmsValue_getType(t) == MMS_OCTET_STRING)
            {
                uint8_t tBuf[8];
                memcpy(tBuf, MmsValue_getOctetStringBuffer(t), 8);

                char tStr[128];
                decodeTimestamp(tBuf, tStr, sizeof(tStr));

                printf("     t = %s\n", tStr);
            }
            else
            {
                printf("     t = <INVALID>\n");
            }
        }
        else
        {
            printMmsValue(v);
        }
    }
}

/* Listener callback */
static void
gooseListener(GooseSubscriber subscriber, void* param)
{
    (void)param;
    printf("\n=== GOOSE RECEIVED ===\n");
    printf(" stNum=%u sqNum=%u\n", GooseSubscriber_getStNum(subscriber), GooseSubscriber_getSqNum(subscriber));
    MmsValue* ds = GooseSubscriber_getDataSetValues(subscriber);
    datasetDump(ds);
    printf("==============================\n");
}

int
main(int argc, char** argv)
{
    (void)argc;
    (void)argv;
    printf("GOOSE Subscriber (final) starting...\n");

    CID_Config_Universal cfg;
    if (!parseCIDFile("simpleIO_direct_control.cid", &cfg))
    {
        fprintf(stderr, "CID parse failed\n");
        return -1;
    }

    printf("Found GoCB entries: %d\n", cfg.goCbCount);
    printf("Found datasets: %d\n", cfg.datasetCount);

    /* debug print GoCB info */
    for (int i = 0; i < cfg.goCbCount; i++)
    {
        CID_GoCB* g = &cfg.goCbs[i];
        printf("GoCB %d: name=%s dataset=%s appId=%d mac=%s\n", i, g->name, g->datSet, g->appId, g->mac);
    }

    GooseReceiver receiver = GooseReceiver_create();
    GooseReceiver_setInterfaceId(receiver, "1"); // sesuaikan interface

    GooseSubscriber* subs = (GooseSubscriber*)calloc(cfg.goCbCount, sizeof(GooseSubscriber));
    for (int i = 0; i < cfg.goCbCount; i++)
    {
        CID_GoCB* g = &cfg.goCbs[i];

        char goCbRef[256] = {0};
        char dataSetRef[256] = {0};

        if (g->iedName[0] && g->ldInst[0])
        {
            snprintf(goCbRef, sizeof(goCbRef), "%s%s/LLN0$GO$%s", g->iedName, g->ldInst, g->name);
            snprintf(dataSetRef, sizeof(dataSetRef), "%s%s/LLN0$%s", g->iedName, g->ldInst, g->datSet);
        }
        else if (g->iedName[0])
        {
            snprintf(goCbRef, sizeof(goCbRef), "%s/LLN0$GO$%s", g->iedName, g->name);
            snprintf(dataSetRef, sizeof(dataSetRef), "%s/LLN0$%s", g->iedName, g->datSet);
        }
        else
        {
            snprintf(goCbRef, sizeof(goCbRef), "LLN0$GO$%s", g->name);
            snprintf(dataSetRef, sizeof(dataSetRef), "LLN0$%s", g->datSet);
        }

        printf("Subscribing to GoCB: %s dataset=%s appId=%d mac=%s\n", goCbRef, dataSetRef, g->appId, g->mac);

        GooseSubscriber sub = GooseSubscriber_create(goCbRef, NULL);
        if (!sub)
        {
            fprintf(stderr, "Failed to create subscriber for %s\n", goCbRef);
            continue;
        }

        uint8_t mac[6] = {0x01, 0x0c, 0xcd, 0x01, 0x00, 0x01};
        if (g->mac[0] && !parseMacStr(g->mac, mac))
        {
            printf(" Warning: cannot parse MAC '%s', using default\n", g->mac);
        }

        GooseSubscriber_setDstMac(sub, mac);
        // if(g->appId) GooseSubscriber_setAppId(sub,g->appId);
        GooseSubscriber_setAppId(sub, 1000);
        GooseSubscriber_setListener(sub, gooseListener, NULL);
        GooseReceiver_addSubscriber(receiver, sub);
        subs[i] = sub;
    }

    GooseReceiver_start(receiver);
    signal(SIGINT, sigint_handler);

    while (running)
    {
        Thread_sleep(200);
    }

    printf("shutting down...\n");
    for (int i = 0; i < cfg.goCbCount; i++)
    {
        if (subs[i])
            GooseSubscriber_destroy(subs[i]);
    }
    free(subs);
    GooseReceiver_destroy(receiver);
    return 0;
}