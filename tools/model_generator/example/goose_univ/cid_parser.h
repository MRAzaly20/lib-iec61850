#ifndef CID_PARSER_H
#define CID_PARSER_H

#include <stdint.h>

#define MAX_STR 256

typedef struct {
    char ldInst[64];
    char lnClass[64];
    char lnInst[32];
    char prefix[64];
    char doName[64];
    char daName[64];
    char fc[8];
    int isAnalog;  /* 1 = MV, 0 = status/other */
} FCDA_Item;

typedef struct {
    char name[128];
    char ln0LdInst[64];
    char ln0IedName[64];

    FCDA_Item* items;      // alokasikan secara dinamis
    int itemCount;
    int maxItems;
} CID_DataSet;

typedef struct {
    char name[128];
    char goID[128];
    char datSet[128];
    char iedName[64];
    char ldInst[64];
    char lnInst[32];

    char mac[64];
    int appId;
    int vlanId;
    int vlanPrio;
} CID_GoCB;

typedef struct {
    CID_GoCB* goCbs;       // alokasikan dinamis
    int goCbCount;
    int maxGoCb;

    CID_DataSet* datasets; // alokasikan dinamis
    int datasetCount;
    int maxDatasets;
} CID_Config_Universal;

/* parseCIDFile:
 * - path: filepath to CID/SCL
 * - cfg: out param (harus dialokasikan & diinisialisasi oleh caller)
 * Returns: 1 on success, 0 on failure.
 */
int parseCIDFile(const char* path, CID_Config_Universal* cfg);

/* cleanup: membebaskan semua alokasi dinamis di cfg */
void freeCIDConfig(CID_Config_Universal* cfg);

#endif