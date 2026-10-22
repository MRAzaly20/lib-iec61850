#ifdef _WIN32
#define _CRT_SECURE_NO_WARNINGS
#endif

#include "cid_parser.h"

#include <libxml/parser.h>
#include <libxml/tree.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

static int parseUnsigned(const char* s) {
    return (int)strtol(s, NULL, 10);
}

int parseCIDFile(const char* path, CID_Config* cfg)
{
    memset(cfg, 0, sizeof(CID_Config));

    xmlDoc* doc = xmlReadFile(path, NULL, 0);
    if (!doc) return 0;

    xmlNode* root = xmlDocGetRootElement(doc);

    /* ---- Find GSEControl ---- */
    xmlNode* node = root->children;

    while (node) {
        if (!xmlStrcmp(node->name, (xmlChar*) "IED")) {
            xmlNode* ap = node->children;

            while (ap) {
                if (!xmlStrcmp(ap->name, (xmlChar*) "AccessPoint")) {
                    xmlNode* ln = ap->children;

                    while (ln) {
                        if (!xmlStrcmp(ln->name, (xmlChar*) "Server")) {
                            xmlNode* ld = ln->children;

                            while (ld) {
                                if (!xmlStrcmp(ld->name, (xmlChar*) "LDevice")) {

                                    xmlNode* child = ld->children;
                                    while (child) {

                                        if (!xmlStrcmp(child->name, (xmlChar*) "LN0")) {

                                            xmlNode* gc = child->children;

                                            while (gc) {
                                                if (!xmlStrcmp(gc->name, (xmlChar*) "GSEControl")) {

                                                    xmlChar* name = xmlGetProp(gc, (xmlChar*)"name");
                                                    xmlChar* ds   = xmlGetProp(gc, (xmlChar*)"datSet");

                                                    sprintf(cfg->goCbRef, "simpleIOGenericIO/LLN0$GO$%s", (char*)name);
                                                    sprintf(cfg->datasetName, "%s", (char*)ds);
                                                    sprintf(cfg->datasetRef, "simpleIOGenericIO/LLN0$%s", (char*)ds);

                                                    xmlFree(name);
                                                    xmlFree(ds);
                                                }
                                                gc = gc->next;
                                            }
                                        }
                                        child = child->next;
                                    }

                                }
                                ld = ld->next;
                            }
                        }
                        ln = ln->next;
                    }
                }
                ap = ap->next;
            }
        }
        node = node->next;
    }

    /* ---- Find Communication / GSE network params ---- */
    node = root->children;
    while (node) {
        if (!xmlStrcmp(node->name, (xmlChar*)"Communication")) {
            xmlNode* sub = node->children;

            while (sub) {
                if (!xmlStrcmp(sub->name, (xmlChar*)"SubNetwork")) {
                    xmlNode* c = sub->children;

                    while (c) {
                        if (!xmlStrcmp(c->name, (xmlChar*)"ConnectedAP")) {
                            xmlNode* itf = c->children;

                            while (itf) {
                                if (!xmlStrcmp(itf->name, (xmlChar*)"GSE")) {
                                    xmlNode* adr = itf->children;

                                    while (adr) {
                                        if (!xmlStrcmp(adr->name, (xmlChar*)"Address")) {

                                            xmlNode* p = adr->children;
                                            while (p) {
                                                if (!xmlStrcmp(p->name, (xmlChar*)"P")) {
                                                    xmlChar* type = xmlGetProp(p, (xmlChar*)"type");
                                                    char* val = (char*)xmlNodeGetContent(p);

                                                    if (!strcmp((char*)type, "MAC-Address"))
                                                        strcpy(cfg->mac, val);
                                                    if (!strcmp((char*)type, "APPID"))
                                                        cfg->appId = parseUnsigned(val);
                                                    if (!strcmp((char*)type, "VLAN-ID"))
                                                        cfg->vlanId = parseUnsigned(val);
                                                    if (!strcmp((char*)type, "VLAN-PRIORITY"))
                                                        cfg->vlanPrio = parseUnsigned(val);

                                                    xmlFree(type);
                                                }
                                                p = p->next;
                                            }
                                        }
                                        adr = adr->next;
                                    }

                                }
                                itf = itf->next;
                            }
                        }
                        c = c->next;
                    }
                }
                sub = sub->next;
            }
        }
        node = node->next;
    }

    /* ---- Find FCDA Items ---- */
    node = root->children;
    while (node) {
        if (!xmlStrcmp(node->name, (xmlChar*)"IED")) {
            xmlNode* ap = node->children;

            while (ap) {
                if (!xmlStrcmp(ap->name, (xmlChar*)"AccessPoint")) {
                    xmlNode* srv = ap->children;

                    while (srv) {
                        if (!xmlStrcmp(srv->name, (xmlChar*)"Server")) {
                            xmlNode* ld = srv->children;

                            while (ld) {
                                if (!xmlStrcmp(ld->name, (xmlChar*)"LDevice")) {

                                    xmlNode* ln0 = ld->children;
                                    while (ln0) {

                                        if (!xmlStrcmp(ln0->name, (xmlChar*)"LN0")) {

                                            xmlNode* ds = ln0->children;
                                            while (ds) {
                                                if (!xmlStrcmp(ds->name, (xmlChar*)"DataSet")) {
                                                    xmlChar* name = xmlGetProp(ds, (xmlChar*)"name");

                                                    if (!strcmp((char*)name, cfg->datasetName)) {

                                                        xmlNode* fc = ds->children;
                                                        while (fc) {
                                                            if (!xmlStrcmp(fc->name, (xmlChar*)"FCDA")) {

                                                                FCDA_Item* item = &cfg->fcdaList[cfg->fcdaCount];

                                                                xmlChar* ln = xmlGetProp(fc, (xmlChar*)"lnClass");
                                                                xmlChar* doName = xmlGetProp(fc, (xmlChar*)"doName");
                                                                xmlChar* daName = xmlGetProp(fc, (xmlChar*)"daName");

                                                                strcpy(item->doName, (char*)doName);
                                                                if (daName)
                                                                    strcpy(item->daName, (char*)daName);

                                                                if (!strncmp((char*)doName, "AnIn", 4))
                                                                    item->isAnalog = 1;
                                                                else
                                                                    item->isAnalog = 0;

                                                                cfg->fcdaCount++;

                                                                xmlFree(ln);
                                                                xmlFree(doName);
                                                                if (daName) xmlFree(daName);
                                                            }
                                                            fc = fc->next;
                                                        }
                                                    }
                                                    xmlFree(name);
                                                }
                                                ds = ds->next;
                                            }
                                        }
                                        ln0 = ln0->next;
                                    }
                                }
                                ld = ld->next;
                            }
                        }
                        srv = srv->next;
                    }
                }
                ap = ap->next;
            }
        }
        node = node->next;
    }

    xmlFreeDoc(doc);
    return 1;
}