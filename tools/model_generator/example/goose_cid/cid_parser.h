

#ifndef CID_PARSER_H
#define CID_PARSER_H

#define MAX_FCDA 32

typedef struct {
    char lnName[64];
    char doName[64];
    char daName[64];
    int isAnalog;  /* 1 = MV, 0 = ST val */
} FCDA_Item;

typedef struct {
    char goCbRef[128];
    char datasetName[128];
    char datasetRef[128];
    char mac[32];
    int appId;
    int vlanId;
    int vlanPrio;

    FCDA_Item fcdaList[MAX_FCDA];
    int fcdaCount;
} CID_Config;

int parseCIDFile(const char* path, CID_Config* cfg);

#endif