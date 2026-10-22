#include <signal.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
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
    running = 0;
}

/* ============================================================
 * SAFE PRINT FOR ANY MMS VALUE (Windows Compatible)
 * ============================================================ */
static void
printMmsValue(MmsValue* v)
{
    if (!v)
    {
        printf(" <NULL>\n");
        return;
    }

    MmsType type = MmsValue_getType(v);

    switch (type)
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

    case MMS_BIT_STRING: {
        int bitSize = MmsValue_getBitStringSize(v);
        printf(" BITSTRING (%d bits)\n", bitSize);
        break;
    }

    case MMS_STRUCTURE:
        printf(" STRUCTURE:\n");
        break;

    default:
        printf(" [UNSUPPORTED TYPE %d]\n", type);
        break;
    }
}

/* ============================================================
 * PROCESS ENTIRE DATASET SAFELY
 * ============================================================ */
static void
datasetDumpV1(MmsValue* dataset)
{
    if (!dataset)
    {
        printf("Dataset NULL\n");
        return;
    }

    int count = MmsValue_getArraySize(dataset);

    for (int i = 0; i < count; i++)
    {
        MmsValue* v = MmsValue_getElement(dataset, i);

        printf(" [%d] ", i);

        if (MmsValue_getType(v) == MMS_STRUCTURE)
        {
            printf("STRUCT\n");

            /* Example: MV (mag.f) */
            MmsValue* mag = MmsValue_getElement(v, 0);
            if (mag && MmsValue_getType(mag) == MMS_STRUCTURE)
            {
                MmsValue* f = MmsValue_getElement(mag, 0);
                if (f)
                    printf("     mag.f = %f\n", MmsValue_toFloat(f));
            }
        }
        else
        {
            printMmsValue(v);
        }
    }
}

static void
dumpMmsValue(MmsValue* value, int indent)
{
    if (!value)
    {
        printf("%*s(null)\n", indent, "");
        return;
    }

    MmsType type = MmsValue_getType(value);

    switch (type)
    {
    case MMS_BOOLEAN:
        printf("%*sBOOLEAN = %s\n", indent, "", MmsValue_getBoolean(value) ? "TRUE" : "FALSE");
        break;

    case MMS_INTEGER:
    case MMS_UNSIGNED:
        printf("%*sINTEGER = %lld\n", indent, "", (long long)MmsValue_toInt64(value));
        break;

    case MMS_FLOAT:
        printf("%*sFLOAT = %f\n", indent, "", MmsValue_toFloat(value));
        break;

    case MMS_BIT_STRING: {
        int size = MmsValue_getBitStringSize(value);
        printf("%*sBIT-STRING size=%d : ", indent, "", size);

        for (int i = 0; i < size; i++)
            printf("%d", MmsValue_getBitStringBit(value, i));

        printf("\n");
        break;
    }

    case MMS_OCTET_STRING: {
        int len = MmsValue_getOctetStringSize(value);
        printf("%*sOCTET-STRING len=%d : ", indent, "", len);

        for (int i = 0; i < len; i++)
            printf("%02X ", MmsValue_getOctetStringOctet(value, i));

        printf("\n");
        break;
    }

    case MMS_VISIBLE_STRING:
        printf("%*sVISIBLE-STRING = %s\n", indent, "", MmsValue_toString(value));
        break;

    case MMS_STRUCTURE: {
        int count = MmsValue_getArraySize(value);
        printf("%*sSTRUCT (%d elements):\n", indent, "", count);

        for (int i = 0; i < count; i++)
        {
            MmsValue* elem = MmsValue_getElement(value, i);
            printf("%*s - [%d]\n", indent + 2, "", i);
            dumpMmsValue(elem, indent + 4);
        }
        break;
    }

    case MMS_ARRAY: {
        int count = MmsValue_getArraySize(value);
        printf("%*sARRAY (%d elements):\n", indent, "", count);

        for (int i = 0; i < count; i++)
        {
            dumpMmsValue(MmsValue_getElement(value, i), indent + 4);
        }
        break;
    }

    default:
        printf("%*sUNKNOWN TYPE %d\n", indent, "", type);
        break;
    }
}
static void
datasetDumpV2(MmsValue* dataset)
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
            /* Example structure: MV -> mag -> f */

            MmsValue* mag = MmsValue_getElement(v, 0);
            if (mag && MmsValue_getType(mag) == MMS_STRUCTURE)
            {
                MmsValue* f = MmsValue_getElement(mag, 0);
                if (f && MmsValue_getType(f) == MMS_FLOAT)
                {
                    float value = MmsValue_toFloat(f);
                    printf("ANALOG = %.3f\n", value);
                    continue;
                }
            }

            printf(" [%d] DATA:\n", i);
            dumpMmsValue(v, 4);
        }
        else
        {
            printMmsValue(v);
        }
    }
}

/* ============================================================
 * QUALITY INTERPRETATION
 * ============================================================ */
static void
decodeQuality(uint16_t q, char* out, size_t size)
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
             (q >> 2) & 1, (q >> 3) & 1, (q >> 4) & 1, (q >> 5) & 1, (q >> 6) & 1, (q >> 7) & 1, (q >> 9) & 1,
             ((q >> 10) & 1) ? "substituted" : "process");
}

/* ============================================================
 * IEC61850 TIMESTAMP → HUMAN READABLE UTC
 * ============================================================ */
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
datasetDump(MmsValue* dataset)
{
    if (!dataset)
        return;

    int count = MmsValue_getArraySize(dataset);

    for (int i = 0; i < count; i++)
    {
        MmsValue* v = MmsValue_getElement(dataset, i);

        printf(" [%d] ", i);

        /* ============================
         * Struktur MV → { mag, q, t }
         * ============================ */
        if (MmsValue_getType(v) == MMS_STRUCTURE)
        {
            /* ----- mag.f ----- */
            MmsValue* mag = MmsValue_getElement(v, 0);
            if (mag && MmsValue_getType(mag) == MMS_STRUCTURE)
            {
                MmsValue* f = MmsValue_getElement(mag, 0);
                if (f && MmsValue_getType(f) == MMS_FLOAT)
                {
                    float value = MmsValue_toFloat(f);
                    printf("ANALOG = %.3f\n", value);
                }
                else
                    printf("ANALOG = <INVALID>\n");
            }

            /* ----- q (Quality) ----- */
            /* ----- q (Quality) ----- */
            MmsValue* q = MmsValue_getElement(v, 1);
            if (q && MmsValue_getType(q) == MMS_BIT_STRING)
            {
                uint16_t qBits = MmsValue_getBitStringAsInteger(q);

                char qStr[256];
                decodeQuality(qBits, qStr, sizeof(qStr));

                printf("     q = %s\n", qStr);
            }
            else
            {
                printf("     q = <INVALID>\n");
            }

            /* ----- t (Timestamp) ----- */
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

            continue;
        }

        /* Non-structure value */
        printMmsValue(v);
    }
}
/* ============================================================
 * CALLBACK
 * ============================================================ */
static void
gooseListener(GooseSubscriber subscriber, void* param)
{
    printf("\n=== GOOSE RECEIVED ===\n");

    printf(" stNum=%u sqNum=%u\n", GooseSubscriber_getStNum(subscriber), GooseSubscriber_getSqNum(subscriber));

    MmsValue* dataset = GooseSubscriber_getDataSetValues(subscriber);
    datasetDump(dataset);

    printf("==============================\n");
}

/* ============================================================
 * MAIN
 * ============================================================ */
int
main()
{
    printf("=== GOOSE Subscriber (Windows Compatible) ===\n");

    CID_Config cfg;
    if (!parseCIDFile("simpleIO_direct_control.cid", &cfg))
    {
        printf("CID parse failed\n");
        return -1;
    }

    GooseReceiver receiver = GooseReceiver_create();
    GooseReceiver_setInterfaceId(receiver, "1");

    GooseSubscriber subscriber = GooseSubscriber_create(cfg.goCbRef, NULL);

    uint8_t mac[6] = {0x01, 0x0c, 0xcd, 0x01, 0x00, 0x01};
    GooseSubscriber_setDstMac(subscriber, mac);
    GooseSubscriber_setAppId(subscriber, cfg.appId);

    printf("Subscribing to GoCB: %s with AppID=%d\n", cfg.goCbRef, cfg.appId);
    GooseSubscriber_setListener(subscriber, gooseListener, NULL);

    GooseReceiver_addSubscriber(receiver, subscriber);
    GooseReceiver_start(receiver);

    signal(SIGINT, sigint_handler);

    while (running)
        Thread_sleep(200);

    return 0;
}