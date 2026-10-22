#include "cid_parser.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libxml/parser.h>
#include <libxml/tree.h>

static void trim(char* s)
{
    if (!s) return;
    while (*s == ' ' || *s == '\n' || *s == '\t' || *s == '\r') s++;

    char* end = s + strlen(s) - 1;
    while (end > s && (*end == ' ' || *end == '\n' || *end == '\t' || *end == '\r'))
        *end-- = '\0';
}

/* add dataset */
static CID_DataSet* addDataSet(CID_Config_Universal* cfg, const char* name)
{
    if (cfg->datasetCount >= cfg->maxDatasets) {
        cfg->maxDatasets *= 2;
        cfg->datasets = realloc(cfg->datasets, cfg->maxDatasets * sizeof(CID_DataSet));
    }

    CID_DataSet* ds = &cfg->datasets[cfg->datasetCount++];
    memset(ds, 0, sizeof(CID_DataSet));

    strncpy(ds->name, name, sizeof(ds->name) - 1);

    ds->maxItems = 32;
    ds->items = malloc(ds->maxItems * sizeof(FCDA_Item));
    ds->itemCount = 0;

    return ds;
}

/* add FCDA item */
static void addFCDA(CID_DataSet* ds, FCDA_Item* src)
{
    if (ds->itemCount >= ds->maxItems) {
        ds->maxItems *= 2;
        ds->items = realloc(ds->items, ds->maxItems * sizeof(FCDA_Item));
    }

    ds->items[ds->itemCount++] = *src;
}

/* add GOCB */
static CID_GoCB* addGoCB(CID_Config_Universal* cfg)
{
    if (cfg->goCbCount >= cfg->maxGoCb) {
        cfg->maxGoCb *= 2;
        cfg->goCbs = realloc(cfg->goCbs, cfg->maxGoCb * sizeof(CID_GoCB));
    }

    CID_GoCB* g = &cfg->goCbs[cfg->goCbCount++];
    memset(g, 0, sizeof(CID_GoCB));

    return g;
}

static int parseFCDA(xmlNode* fNode, FCDA_Item* out)
{
    memset(out, 0, sizeof(FCDA_Item));

    xmlChar* val;

    val = xmlGetProp(fNode, (xmlChar*)"ldInst");
    if (val) { strncpy(out->ldInst, (char*)val, sizeof(out->ldInst)-1); xmlFree(val); }

    val = xmlGetProp(fNode, (xmlChar*)"lnClass");
    if (val) { strncpy(out->lnClass, (char*)val, sizeof(out->lnClass)-1); xmlFree(val); }

    val = xmlGetProp(fNode, (xmlChar*)"lnInst");
    if (val) { strncpy(out->lnInst, (char*)val, sizeof(out->lnInst)-1); xmlFree(val); }

    val = xmlGetProp(fNode, (xmlChar*)"prefix");
    if (val) { strncpy(out->prefix, (char*)val, sizeof(out->prefix)-1); xmlFree(val); }

    val = xmlGetProp(fNode, (xmlChar*)"doName");
    if (val) { strncpy(out->doName, (char*)val, sizeof(out->doName)-1); xmlFree(val); }

    val = xmlGetProp(fNode, (xmlChar*)"daName");
    if (val) { strncpy(out->daName, (char*)val, sizeof(out->daName)-1); xmlFree(val); }

    val = xmlGetProp(fNode, (xmlChar*)"fc");
    if (val) { strncpy(out->fc, (char*)val, sizeof(out->fc)-1); xmlFree(val); }

    /* Analog? hanya jika MX & punya .f */
    if (strstr(out->daName, "mag.f") != NULL)
        out->isAnalog = 1;
    else
        out->isAnalog = 0;

    return 1;
}

/* Parse dataset & FCDA di LN0 */
static void parseDataSets(xmlNode* ln0Node, CID_Config_Universal* cfg)
{
    xmlNode* cur = ln0Node->children;

    for (; cur; cur = cur->next)
    {
        if (cur->type == XML_ELEMENT_NODE && strcmp((char*)cur->name, "DataSet") == 0)
        {
            xmlChar* nameAttr = xmlGetProp(cur, (xmlChar*)"name");
            if (!nameAttr) continue;

            CID_DataSet* ds = addDataSet(cfg, (char*)nameAttr);
            xmlFree(nameAttr);

            xmlNode* f = cur->children;
            for (; f; f = f->next)
            {
                if (f->type == XML_ELEMENT_NODE && strcmp((char*)f->name, "FCDA") == 0) {
                    FCDA_Item item;
                    parseFCDA(f, &item);
                    addFCDA(ds, &item);
                }
            }
        }
    }
}

/* Parse GSEControl */
static void parseGSEControl(xmlNode* ln0Node, CID_Config_Universal* cfg, const char* iedName, const char* ldInst)
{
    xmlNode* cur = ln0Node->children;

    for (; cur; cur = cur->next)
    {
        if (cur->type == XML_ELEMENT_NODE && strcmp((char*)cur->name, "GSEControl") == 0)
        {
            CID_GoCB* g = addGoCB(cfg);

            xmlChar* val;

            val = xmlGetProp(cur, (xmlChar*)"name");
            if (val) { strncpy(g->name, (char*)val, sizeof(g->name)-1); xmlFree(val); }

            val = xmlGetProp(cur, (xmlChar*)"datSet");
            if (val) { strncpy(g->datSet, (char*)val, sizeof(g->datSet)-1); xmlFree(val); }

            val = xmlGetProp(cur, (xmlChar*)"appID");
            if (val) { strncpy(g->goID, (char*)val, sizeof(g->goID)-1); xmlFree(val); }

            strncpy(g->iedName, iedName, sizeof(g->iedName)-1);
            strncpy(g->ldInst, ldInst, sizeof(g->ldInst)-1);
        }
    }
}

/* Parse GSE mapping di ConnectedAP */
static void parseGSEinConnectedAP(xmlNode* connectedAP, CID_Config_Universal* cfg)
{
    xmlChar* ied = xmlGetProp(connectedAP, (xmlChar*)"iedName");

    xmlNode* cur = connectedAP->children;

    for (; cur; cur = cur->next)
    {
        if (cur->type == XML_ELEMENT_NODE && strcmp((char*)cur->name, "GSE") == 0)
        {
            xmlChar* ldInst = xmlGetProp(cur, (xmlChar*)"ldInst");
            xmlChar* cbName = xmlGetProp(cur, (xmlChar*)"cbName");

            for (int i = 0; i < cfg->goCbCount; i++) {
                CID_GoCB* g = &cfg->goCbs[i];

                if (strcmp(g->name, (char*)cbName) == 0 &&
                    strcmp(g->ldInst, (char*)ldInst) == 0 &&
                    strcmp(g->iedName, (char*)ied) == 0)
                {
                    xmlNode* add = cur->children;
                    for (; add; add = add->next)
                    {
                        if (add->type == XML_ELEMENT_NODE && strcmp((char*)add->name, "Address") == 0)
                        {
                            xmlNode* p = add->children;
                            for (; p; p = p->next)
                            {
                                if (p->type != XML_ELEMENT_NODE) continue;

                                xmlChar* type = xmlGetProp(p, (xmlChar*)"type");
                                xmlChar* txt  = xmlNodeGetContent(p);

                                if (!type || !txt) continue;

                                if (strcmp((char*)type, "MAC-Address") == 0)
                                    strncpy(g->mac, (char*)txt, sizeof(g->mac)-1);
                                else if (strcmp((char*)type, "APPID") == 0)
                                    g->appId = strtol((char*)txt, NULL, 16);
                                else if (strcmp((char*)type, "VLAN-ID") == 0)
                                    g->vlanId = atoi((char*)txt);
                                else if (strcmp((char*)type, "VLAN-PRIORITY") == 0)
                                    g->vlanPrio = atoi((char*)txt);

                                xmlFree(type);
                                xmlFree(txt);
                            }
                        }
                    }
                }
            }

            xmlFree(ldInst);
            xmlFree(cbName);
        }
    }

    xmlFree(ied);
}

/* MAIN PARSER */
int parseCIDFile(const char* path, CID_Config_Universal* cfg)
{
    memset(cfg, 0, sizeof(CID_Config_Universal));

    cfg->maxDatasets = 8;
    cfg->maxGoCb     = 8;
    cfg->datasets = malloc(cfg->maxDatasets * sizeof(CID_DataSet));
    cfg->goCbs    = malloc(cfg->maxGoCb * sizeof(CID_GoCB));

    xmlDoc* doc = xmlReadFile(path, NULL, 0);
    if (!doc) return 0;

    xmlNode* root = xmlDocGetRootElement(doc);

    xmlNode* cur = root->children;

    for (; cur; cur = cur->next)
    {
        /* Parse Communication -> SubNetwork -> ConnectedAP -> GSE */
        if (cur->type == XML_ELEMENT_NODE && strcmp((char*)cur->name, "Communication") == 0)
        {
            xmlNode* comm = cur->children;
            for (; comm; comm = comm->next)
            {
                if (comm->type == XML_ELEMENT_NODE && strcmp((char*)comm->name, "SubNetwork") == 0)
                {
                    xmlNode* sn = comm->children;
                    for (; sn; sn = sn->next)
                    {
                        if (sn->type == XML_ELEMENT_NODE && strcmp((char*)sn->name, "ConnectedAP") == 0)
                            parseGSEinConnectedAP(sn, cfg);
                    }
                }
            }
        }

        /* Parse IED -> AccessPoint -> Server -> LDevice -> LN0 */
        if (cur->type == XML_ELEMENT_NODE && strcmp((char*)cur->name, "IED") == 0)
        {
            xmlChar* iedName = xmlGetProp(cur, (xmlChar*)"name");

            xmlNode* ap = cur->children;
            for (; ap; ap = ap->next)
            {
                if (ap->type == XML_ELEMENT_NODE && strcmp((char*)ap->name, "AccessPoint") == 0)
                {
                    xmlNode* srv = ap->children;
                    for (; srv; srv = srv->next)
                    {
                        if (srv->type == XML_ELEMENT_NODE && strcmp((char*)srv->name, "Server") == 0)
                        {
                            xmlNode* ld = srv->children;
                            for (; ld; ld = ld->next)
                            {
                                if (ld->type == XML_ELEMENT_NODE && strcmp((char*)ld->name, "LDevice") == 0)
                                {
                                    xmlChar* ldInst = xmlGetProp(ld, (xmlChar*)"inst");

                                    xmlNode* ldChild = ld->children;
                                    for (; ldChild; ldChild = ldChild->next)
                                    {
                                        if (ldChild->type == XML_ELEMENT_NODE &&
                                            strcmp((char*)ldChild->name, "LN0") == 0)
                                        {
                                            parseDataSets(ldChild, cfg);
                                            parseGSEControl(ldChild, cfg, (char*)iedName, (char*)ldInst);
                                        }
                                    }

                                    xmlFree(ldInst);
                                }
                            }
                        }
                    }
                }
            }

            xmlFree(iedName);
        }
    }

    xmlFreeDoc(doc);
    return 1;
}

void freeCIDConfig(CID_Config_Universal* cfg)
{
    for (int i = 0; i < cfg->datasetCount; i++) {
        free(cfg->datasets[i].items);
    }

    free(cfg->datasets);
    free(cfg->goCbs);
}