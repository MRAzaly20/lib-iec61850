/*
 * static_model.c
 *
 * automatically generated from simpleIO_comprehensive.cid
 */
#include "static_model.h"

static void initializeValues();

extern DataSet iedModelds_GenericIO_LLN0_Events;
extern DataSet iedModelds_GenericIO_LLN0_Events2;
extern DataSet iedModelds_GenericIO_LLN0_Events3;
extern DataSet iedModelds_GenericIO_LLN0_AnalogValues;
extern DataSet iedModelds_GenericIO_LLN0_EventsBuffered;
extern DataSet iedModelds_PROT_LLN0_TripData;
extern DataSet iedModelds_PROT_LLN0_ProtStatus;
extern DataSet iedModelds_MEAS_LLN0_MeasData;
extern DataSet iedModelds_MEAS_LLN0_SeqData;
extern DataSet iedModelds_CONTROL_LLN0_SwitchStatus;


extern DataSetEntry iedModelds_GenericIO_LLN0_Events_fcda0;
extern DataSetEntry iedModelds_GenericIO_LLN0_Events_fcda1;
extern DataSetEntry iedModelds_GenericIO_LLN0_Events_fcda2;
extern DataSetEntry iedModelds_GenericIO_LLN0_Events_fcda3;

DataSetEntry iedModelds_GenericIO_LLN0_Events_fcda0 = {
  "GenericIO",
  false,
  "GGIO1$ST$SPCSO1$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_Events_fcda1
};

DataSetEntry iedModelds_GenericIO_LLN0_Events_fcda1 = {
  "GenericIO",
  false,
  "GGIO1$ST$SPCSO2$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_Events_fcda2
};

DataSetEntry iedModelds_GenericIO_LLN0_Events_fcda2 = {
  "GenericIO",
  false,
  "GGIO1$ST$SPCSO3$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_Events_fcda3
};

DataSetEntry iedModelds_GenericIO_LLN0_Events_fcda3 = {
  "GenericIO",
  false,
  "GGIO1$ST$SPCSO4$stVal", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_GenericIO_LLN0_Events = {
  "GenericIO",
  "LLN0$Events",
  4,
  &iedModelds_GenericIO_LLN0_Events_fcda0,
  &iedModelds_GenericIO_LLN0_Events2
};

extern DataSetEntry iedModelds_GenericIO_LLN0_Events2_fcda0;
extern DataSetEntry iedModelds_GenericIO_LLN0_Events2_fcda1;
extern DataSetEntry iedModelds_GenericIO_LLN0_Events2_fcda2;
extern DataSetEntry iedModelds_GenericIO_LLN0_Events2_fcda3;

DataSetEntry iedModelds_GenericIO_LLN0_Events2_fcda0 = {
  "GenericIO",
  false,
  "GGIO1$ST$SPCSO1", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_Events2_fcda1
};

DataSetEntry iedModelds_GenericIO_LLN0_Events2_fcda1 = {
  "GenericIO",
  false,
  "GGIO1$ST$SPCSO2", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_Events2_fcda2
};

DataSetEntry iedModelds_GenericIO_LLN0_Events2_fcda2 = {
  "GenericIO",
  false,
  "GGIO1$ST$SPCSO3", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_Events2_fcda3
};

DataSetEntry iedModelds_GenericIO_LLN0_Events2_fcda3 = {
  "GenericIO",
  false,
  "GGIO1$ST$SPCSO4", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_GenericIO_LLN0_Events2 = {
  "GenericIO",
  "LLN0$Events2",
  4,
  &iedModelds_GenericIO_LLN0_Events2_fcda0,
  &iedModelds_GenericIO_LLN0_Events3
};

extern DataSetEntry iedModelds_GenericIO_LLN0_Events3_fcda0;
extern DataSetEntry iedModelds_GenericIO_LLN0_Events3_fcda1;
extern DataSetEntry iedModelds_GenericIO_LLN0_Events3_fcda2;
extern DataSetEntry iedModelds_GenericIO_LLN0_Events3_fcda3;
extern DataSetEntry iedModelds_GenericIO_LLN0_Events3_fcda4;
extern DataSetEntry iedModelds_GenericIO_LLN0_Events3_fcda5;
extern DataSetEntry iedModelds_GenericIO_LLN0_Events3_fcda6;
extern DataSetEntry iedModelds_GenericIO_LLN0_Events3_fcda7;

DataSetEntry iedModelds_GenericIO_LLN0_Events3_fcda0 = {
  "GenericIO",
  false,
  "GGIO1$ST$SPCSO1$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_Events3_fcda1
};

DataSetEntry iedModelds_GenericIO_LLN0_Events3_fcda1 = {
  "GenericIO",
  false,
  "GGIO1$ST$SPCSO1$q", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_Events3_fcda2
};

DataSetEntry iedModelds_GenericIO_LLN0_Events3_fcda2 = {
  "GenericIO",
  false,
  "GGIO1$ST$SPCSO2$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_Events3_fcda3
};

DataSetEntry iedModelds_GenericIO_LLN0_Events3_fcda3 = {
  "GenericIO",
  false,
  "GGIO1$ST$SPCSO2$q", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_Events3_fcda4
};

DataSetEntry iedModelds_GenericIO_LLN0_Events3_fcda4 = {
  "GenericIO",
  false,
  "GGIO1$ST$SPCSO3$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_Events3_fcda5
};

DataSetEntry iedModelds_GenericIO_LLN0_Events3_fcda5 = {
  "GenericIO",
  false,
  "GGIO1$ST$SPCSO3$q", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_Events3_fcda6
};

DataSetEntry iedModelds_GenericIO_LLN0_Events3_fcda6 = {
  "GenericIO",
  false,
  "GGIO1$ST$SPCSO4$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_Events3_fcda7
};

DataSetEntry iedModelds_GenericIO_LLN0_Events3_fcda7 = {
  "GenericIO",
  false,
  "GGIO1$ST$SPCSO4$q", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_GenericIO_LLN0_Events3 = {
  "GenericIO",
  "LLN0$Events3",
  8,
  &iedModelds_GenericIO_LLN0_Events3_fcda0,
  &iedModelds_GenericIO_LLN0_AnalogValues
};

extern DataSetEntry iedModelds_GenericIO_LLN0_AnalogValues_fcda0;
extern DataSetEntry iedModelds_GenericIO_LLN0_AnalogValues_fcda1;
extern DataSetEntry iedModelds_GenericIO_LLN0_AnalogValues_fcda2;
extern DataSetEntry iedModelds_GenericIO_LLN0_AnalogValues_fcda3;

DataSetEntry iedModelds_GenericIO_LLN0_AnalogValues_fcda0 = {
  "GenericIO",
  false,
  "GGIO1$MX$AnIn1", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_AnalogValues_fcda1
};

DataSetEntry iedModelds_GenericIO_LLN0_AnalogValues_fcda1 = {
  "GenericIO",
  false,
  "GGIO1$MX$AnIn2", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_AnalogValues_fcda2
};

DataSetEntry iedModelds_GenericIO_LLN0_AnalogValues_fcda2 = {
  "GenericIO",
  false,
  "GGIO1$MX$AnIn3", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_AnalogValues_fcda3
};

DataSetEntry iedModelds_GenericIO_LLN0_AnalogValues_fcda3 = {
  "GenericIO",
  false,
  "GGIO1$MX$AnIn4", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_GenericIO_LLN0_AnalogValues = {
  "GenericIO",
  "LLN0$AnalogValues",
  4,
  &iedModelds_GenericIO_LLN0_AnalogValues_fcda0,
  &iedModelds_GenericIO_LLN0_EventsBuffered
};

extern DataSetEntry iedModelds_GenericIO_LLN0_EventsBuffered_fcda0;
extern DataSetEntry iedModelds_GenericIO_LLN0_EventsBuffered_fcda1;
extern DataSetEntry iedModelds_GenericIO_LLN0_EventsBuffered_fcda2;
extern DataSetEntry iedModelds_GenericIO_LLN0_EventsBuffered_fcda3;
extern DataSetEntry iedModelds_GenericIO_LLN0_EventsBuffered_fcda4;
extern DataSetEntry iedModelds_GenericIO_LLN0_EventsBuffered_fcda5;

DataSetEntry iedModelds_GenericIO_LLN0_EventsBuffered_fcda0 = {
  "GenericIO",
  false,
  "GGIO1$ST$SPCSO1$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_EventsBuffered_fcda1
};

DataSetEntry iedModelds_GenericIO_LLN0_EventsBuffered_fcda1 = {
  "GenericIO",
  false,
  "GGIO1$ST$SPCSO1$q", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_EventsBuffered_fcda2
};

DataSetEntry iedModelds_GenericIO_LLN0_EventsBuffered_fcda2 = {
  "GenericIO",
  false,
  "GGIO1$ST$SPCSO1$t", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_EventsBuffered_fcda3
};

DataSetEntry iedModelds_GenericIO_LLN0_EventsBuffered_fcda3 = {
  "GenericIO",
  false,
  "GGIO1$ST$SPCSO2$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_EventsBuffered_fcda4
};

DataSetEntry iedModelds_GenericIO_LLN0_EventsBuffered_fcda4 = {
  "GenericIO",
  false,
  "GGIO1$ST$SPCSO2$q", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_EventsBuffered_fcda5
};

DataSetEntry iedModelds_GenericIO_LLN0_EventsBuffered_fcda5 = {
  "GenericIO",
  false,
  "GGIO1$ST$SPCSO2$t", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_GenericIO_LLN0_EventsBuffered = {
  "GenericIO",
  "LLN0$EventsBuffered",
  6,
  &iedModelds_GenericIO_LLN0_EventsBuffered_fcda0,
  &iedModelds_PROT_LLN0_TripData
};

extern DataSetEntry iedModelds_PROT_LLN0_TripData_fcda0;
extern DataSetEntry iedModelds_PROT_LLN0_TripData_fcda1;
extern DataSetEntry iedModelds_PROT_LLN0_TripData_fcda2;
extern DataSetEntry iedModelds_PROT_LLN0_TripData_fcda3;
extern DataSetEntry iedModelds_PROT_LLN0_TripData_fcda4;
extern DataSetEntry iedModelds_PROT_LLN0_TripData_fcda5;

DataSetEntry iedModelds_PROT_LLN0_TripData_fcda0 = {
  "PROT",
  false,
  "PTRC1$ST$Tr$general", 
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_TripData_fcda1
};

DataSetEntry iedModelds_PROT_LLN0_TripData_fcda1 = {
  "PROT",
  false,
  "PTRC1$ST$Tr$q", 
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_TripData_fcda2
};

DataSetEntry iedModelds_PROT_LLN0_TripData_fcda2 = {
  "PROT",
  false,
  "PTRC1$ST$Tr$t", 
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_TripData_fcda3
};

DataSetEntry iedModelds_PROT_LLN0_TripData_fcda3 = {
  "PROT",
  false,
  "PDIS1$ST$Op$general", 
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_TripData_fcda4
};

DataSetEntry iedModelds_PROT_LLN0_TripData_fcda4 = {
  "PROT",
  false,
  "PDIS1$ST$Op$q", 
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_TripData_fcda5
};

DataSetEntry iedModelds_PROT_LLN0_TripData_fcda5 = {
  "PROT",
  false,
  "PDIS1$ST$Op$t", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_PROT_LLN0_TripData = {
  "PROT",
  "LLN0$TripData",
  6,
  &iedModelds_PROT_LLN0_TripData_fcda0,
  &iedModelds_PROT_LLN0_ProtStatus
};

extern DataSetEntry iedModelds_PROT_LLN0_ProtStatus_fcda0;
extern DataSetEntry iedModelds_PROT_LLN0_ProtStatus_fcda1;
extern DataSetEntry iedModelds_PROT_LLN0_ProtStatus_fcda2;

DataSetEntry iedModelds_PROT_LLN0_ProtStatus_fcda0 = {
  "PROT",
  false,
  "RREC1$ST$Op$general", 
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_ProtStatus_fcda1
};

DataSetEntry iedModelds_PROT_LLN0_ProtStatus_fcda1 = {
  "PROT",
  false,
  "RREC1$ST$AutoRecSt$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_ProtStatus_fcda2
};

DataSetEntry iedModelds_PROT_LLN0_ProtStatus_fcda2 = {
  "PROT",
  false,
  "PSCH1$ST$SchNum$stVal", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_PROT_LLN0_ProtStatus = {
  "PROT",
  "LLN0$ProtStatus",
  3,
  &iedModelds_PROT_LLN0_ProtStatus_fcda0,
  &iedModelds_MEAS_LLN0_MeasData
};

extern DataSetEntry iedModelds_MEAS_LLN0_MeasData_fcda0;
extern DataSetEntry iedModelds_MEAS_LLN0_MeasData_fcda1;
extern DataSetEntry iedModelds_MEAS_LLN0_MeasData_fcda2;
extern DataSetEntry iedModelds_MEAS_LLN0_MeasData_fcda3;
extern DataSetEntry iedModelds_MEAS_LLN0_MeasData_fcda4;
extern DataSetEntry iedModelds_MEAS_LLN0_MeasData_fcda5;

DataSetEntry iedModelds_MEAS_LLN0_MeasData_fcda0 = {
  "MEAS",
  false,
  "MMXU1$MX$TotW", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_MeasData_fcda1
};

DataSetEntry iedModelds_MEAS_LLN0_MeasData_fcda1 = {
  "MEAS",
  false,
  "MMXU1$MX$TotVAr", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_MeasData_fcda2
};

DataSetEntry iedModelds_MEAS_LLN0_MeasData_fcda2 = {
  "MEAS",
  false,
  "MMXU1$MX$TotVA", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_MeasData_fcda3
};

DataSetEntry iedModelds_MEAS_LLN0_MeasData_fcda3 = {
  "MEAS",
  false,
  "MMXU1$MX$Hz", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_MeasData_fcda4
};

DataSetEntry iedModelds_MEAS_LLN0_MeasData_fcda4 = {
  "MEAS",
  false,
  "MMXU1$MX$PhV", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_MeasData_fcda5
};

DataSetEntry iedModelds_MEAS_LLN0_MeasData_fcda5 = {
  "MEAS",
  false,
  "MMXU1$MX$A", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_MEAS_LLN0_MeasData = {
  "MEAS",
  "LLN0$MeasData",
  6,
  &iedModelds_MEAS_LLN0_MeasData_fcda0,
  &iedModelds_MEAS_LLN0_SeqData
};

extern DataSetEntry iedModelds_MEAS_LLN0_SeqData_fcda0;
extern DataSetEntry iedModelds_MEAS_LLN0_SeqData_fcda1;

DataSetEntry iedModelds_MEAS_LLN0_SeqData_fcda0 = {
  "MEAS",
  false,
  "MSQI1$MX$SeqA", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_SeqData_fcda1
};

DataSetEntry iedModelds_MEAS_LLN0_SeqData_fcda1 = {
  "MEAS",
  false,
  "MSQI1$MX$SeqV", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_MEAS_LLN0_SeqData = {
  "MEAS",
  "LLN0$SeqData",
  2,
  &iedModelds_MEAS_LLN0_SeqData_fcda0,
  &iedModelds_CONTROL_LLN0_SwitchStatus
};

extern DataSetEntry iedModelds_CONTROL_LLN0_SwitchStatus_fcda0;
extern DataSetEntry iedModelds_CONTROL_LLN0_SwitchStatus_fcda1;
extern DataSetEntry iedModelds_CONTROL_LLN0_SwitchStatus_fcda2;
extern DataSetEntry iedModelds_CONTROL_LLN0_SwitchStatus_fcda3;
extern DataSetEntry iedModelds_CONTROL_LLN0_SwitchStatus_fcda4;
extern DataSetEntry iedModelds_CONTROL_LLN0_SwitchStatus_fcda5;

DataSetEntry iedModelds_CONTROL_LLN0_SwitchStatus_fcda0 = {
  "CONTROL",
  false,
  "XCBR1$ST$Pos$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_CONTROL_LLN0_SwitchStatus_fcda1
};

DataSetEntry iedModelds_CONTROL_LLN0_SwitchStatus_fcda1 = {
  "CONTROL",
  false,
  "XCBR1$ST$Pos$q", 
  -1,
  NULL,
  NULL,
  &iedModelds_CONTROL_LLN0_SwitchStatus_fcda2
};

DataSetEntry iedModelds_CONTROL_LLN0_SwitchStatus_fcda2 = {
  "CONTROL",
  false,
  "XCBR1$ST$Pos$t", 
  -1,
  NULL,
  NULL,
  &iedModelds_CONTROL_LLN0_SwitchStatus_fcda3
};

DataSetEntry iedModelds_CONTROL_LLN0_SwitchStatus_fcda3 = {
  "CONTROL",
  false,
  "CSWI1$ST$Pos$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_CONTROL_LLN0_SwitchStatus_fcda4
};

DataSetEntry iedModelds_CONTROL_LLN0_SwitchStatus_fcda4 = {
  "CONTROL",
  false,
  "CSWI1$ST$Pos$q", 
  -1,
  NULL,
  NULL,
  &iedModelds_CONTROL_LLN0_SwitchStatus_fcda5
};

DataSetEntry iedModelds_CONTROL_LLN0_SwitchStatus_fcda5 = {
  "CONTROL",
  false,
  "CSWI1$ST$Pos$t", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_CONTROL_LLN0_SwitchStatus = {
  "CONTROL",
  "LLN0$SwitchStatus",
  6,
  &iedModelds_CONTROL_LLN0_SwitchStatus_fcda0,
  NULL
};

LogicalDevice iedModel_GenericIO = {
    LogicalDeviceModelType,
    "GenericIO",
    (ModelNode*) &iedModel,
    (ModelNode*) &iedModel_PROT,
    (ModelNode*) &iedModel_GenericIO_LLN0,
    NULL
};

LogicalNode iedModel_GenericIO_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_GenericIO,
    (ModelNode*) &iedModel_GenericIO_LPHD1,
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod,
};

DataObject iedModel_GenericIO_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_GenericIO_LLN0,
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh,
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod,
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod,
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod,
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod,
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_GenericIO_LLN0,
    (ModelNode*) &iedModel_GenericIO_LLN0_Health,
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh,
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh,
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh,
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_GenericIO_LLN0,
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt,
    (ModelNode*) &iedModel_GenericIO_LLN0_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_LLN0_Health,
    (ModelNode*) &iedModel_GenericIO_LLN0_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_LLN0_Health,
    (ModelNode*) &iedModel_GenericIO_LLN0_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_LLN0_Health,
    (ModelNode*) &iedModel_GenericIO_LLN0_Health_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_LLN0_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_GenericIO_LLN0,
    NULL,
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_GenericIO_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt,
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt,
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt,
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_NamPlt_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt,
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt,
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt_ldNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_GenericIO_LPHD1 = {
    LogicalNodeModelType,
    "LPHD1",
    (ModelNode*) &iedModel_GenericIO,
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyNam,
};

DataObject iedModel_GenericIO_LPHD1_PhyNam = {
    DataObjectModelType,
    "PhyNam",
    (ModelNode*) &iedModel_GenericIO_LPHD1,
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyNam_vendor,
    0,
    -1
};

DataAttribute iedModel_GenericIO_LPHD1_PhyNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyNam,
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyNam_hwRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LPHD1_PhyNam_hwRev = {
    DataAttributeModelType,
    "hwRev",
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyNam,
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyNam_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LPHD1_PhyNam_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyNam,
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyNam_serNum,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LPHD1_PhyNam_serNum = {
    DataAttributeModelType,
    "serNum",
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyNam,
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyNam_model,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LPHD1_PhyNam_model = {
    DataAttributeModelType,
    "model",
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyNam,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_LPHD1_PhyHealth = {
    DataObjectModelType,
    "PhyHealth",
    (ModelNode*) &iedModel_GenericIO_LPHD1,
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy,
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_LPHD1_PhyHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LPHD1_PhyHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LPHD1_PhyHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyHealth_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LPHD1_PhyHealth_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_LPHD1_Proxy = {
    DataObjectModelType,
    "Proxy",
    (ModelNode*) &iedModel_GenericIO_LPHD1,
    NULL,
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_LPHD1_Proxy_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy,
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LPHD1_Proxy_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy,
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LPHD1_Proxy_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy,
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LPHD1_Proxy_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_GenericIO_GGIO1 = {
    LogicalNodeModelType,
    "GGIO1",
    (ModelNode*) &iedModel_GenericIO,
    NULL,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod,
};

DataObject iedModel_GenericIO_GGIO1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Health,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_NamPlt,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Health,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Health,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Health,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Health_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_GenericIO_GGIO1_NamPlt,
    (ModelNode*) &iedModel_GenericIO_GGIO1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_GenericIO_GGIO1_NamPlt,
    (ModelNode*) &iedModel_GenericIO_GGIO1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_AnIn1 = {
    DataObjectModelType,
    "AnIn1",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1_mag,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_AnIn1_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1_q,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn1_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn1_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1_d,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn1_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1_units,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn1_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_AnIn2 = {
    DataObjectModelType,
    "AnIn2",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2_mag,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_AnIn2_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2_q,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn2_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn2_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2_d,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn2_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2_units,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn2_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn2,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_AnIn3 = {
    DataObjectModelType,
    "AnIn3",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3_mag,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_AnIn3_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3_q,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn3_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn3_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3_d,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn3_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3_units,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn3_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn3_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn3,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_AnIn4 = {
    DataObjectModelType,
    "AnIn4",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4_mag,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_AnIn4_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4_q,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn4_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn4_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn4_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn4_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4_d,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn4_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4_units,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn4_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn4_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn4,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_SPCSO1 = {
    DataObjectModelType,
    "SPCSO1",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_SBOw,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper_ctlNum,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_SBOw = {
    DataAttributeModelType,
    "SBOw",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Cancel,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_SBOw_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_SBOw_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_SBOw,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_SBOw_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_SBOw_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_SBOw,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_SBOw_ctlNum,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_SBOw_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_SBOw_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_SBOw_origin,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_SBOw_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_SBOw_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_SBOw_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_SBOw_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_SBOw,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_SBOw_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_SBOw_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_SBOw,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_SBOw_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_SBOw_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_SBOw,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_SBOw_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_SBOw_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_SBOw,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Cancel = {
    DataAttributeModelType,
    "Cancel",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_ctlModel,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Cancel_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Cancel_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Cancel,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Cancel_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Cancel_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Cancel,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Cancel_ctlNum,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Cancel_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Cancel_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Cancel_origin,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Cancel_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Cancel_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Cancel_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Cancel_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Cancel,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Cancel_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Cancel_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Cancel,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Cancel_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Cancel_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Cancel,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Cancel_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Cancel_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Cancel,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_sboTimeout,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_sboTimeout = {
    DataAttributeModelType,
    "sboTimeout",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_SPCSO2 = {
    DataObjectModelType,
    "SPCSO2",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_ctlModel,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_Oper_ctlNum,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_Oper_origin,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_sboTimeout,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_sboTimeout = {
    DataAttributeModelType,
    "sboTimeout",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO2,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_SPCSO3 = {
    DataObjectModelType,
    "SPCSO3",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_ctlModel,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_Oper_ctlNum,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_Oper_origin,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_sboTimeout,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_sboTimeout = {
    DataAttributeModelType,
    "sboTimeout",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO3_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO3,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_SPCSO4 = {
    DataObjectModelType,
    "SPCSO4",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_ctlModel,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_Oper_ctlNum,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_Oper_origin,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_sboTimeout,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_sboTimeout = {
    DataAttributeModelType,
    "sboTimeout",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO4_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO4,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_Ind1 = {
    DataObjectModelType,
    "Ind1",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_Ind1_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_Ind2 = {
    DataObjectModelType,
    "Ind2",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_Ind2_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_Ind3 = {
    DataObjectModelType,
    "Ind3",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_Ind3_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind3_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_Ind4 = {
    DataObjectModelType,
    "Ind4",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    NULL,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_Ind4_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind4_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind4_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind4_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};


LogicalDevice iedModel_PROT = {
    LogicalDeviceModelType,
    "PROT",
    (ModelNode*) &iedModel,
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_PROT_LLN0,
    NULL
};

LogicalNode iedModel_PROT_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_PROT,
    (ModelNode*) &iedModel_PROT_LPHD1,
    (ModelNode*) &iedModel_PROT_LLN0_Mod,
};

DataObject iedModel_PROT_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_PROT_LLN0,
    (ModelNode*) &iedModel_PROT_LLN0_Beh,
    (ModelNode*) &iedModel_PROT_LLN0_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_PROT_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_LLN0_Mod,
    (ModelNode*) &iedModel_PROT_LLN0_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_LLN0_Mod,
    (ModelNode*) &iedModel_PROT_LLN0_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_LLN0_Mod,
    (ModelNode*) &iedModel_PROT_LLN0_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_PROT_LLN0_Mod,
    (ModelNode*) &iedModel_PROT_LLN0_Mod_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_LLN0_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_PROT_LLN0,
    (ModelNode*) &iedModel_PROT_LLN0_Health,
    (ModelNode*) &iedModel_PROT_LLN0_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_PROT_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_LLN0_Beh,
    (ModelNode*) &iedModel_PROT_LLN0_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_LLN0_Beh,
    (ModelNode*) &iedModel_PROT_LLN0_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_LLN0_Beh,
    (ModelNode*) &iedModel_PROT_LLN0_Beh_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_LLN0_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_PROT_LLN0,
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt,
    (ModelNode*) &iedModel_PROT_LLN0_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_PROT_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_LLN0_Health,
    (ModelNode*) &iedModel_PROT_LLN0_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_LLN0_Health,
    (ModelNode*) &iedModel_PROT_LLN0_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_LLN0_Health,
    (ModelNode*) &iedModel_PROT_LLN0_Health_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_LLN0_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_PROT_LLN0,
    NULL,
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_PROT_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt,
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt,
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt,
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_NamPlt_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt,
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt,
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt_ldNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_PROT_LPHD1 = {
    LogicalNodeModelType,
    "LPHD1",
    (ModelNode*) &iedModel_PROT,
    (ModelNode*) &iedModel_PROT_PDIS1,
    (ModelNode*) &iedModel_PROT_LPHD1_PhyNam,
};

DataObject iedModel_PROT_LPHD1_PhyNam = {
    DataObjectModelType,
    "PhyNam",
    (ModelNode*) &iedModel_PROT_LPHD1,
    (ModelNode*) &iedModel_PROT_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_PROT_LPHD1_PhyNam_vendor,
    0,
    -1
};

DataAttribute iedModel_PROT_LPHD1_PhyNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_PROT_LPHD1_PhyNam,
    (ModelNode*) &iedModel_PROT_LPHD1_PhyNam_hwRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LPHD1_PhyNam_hwRev = {
    DataAttributeModelType,
    "hwRev",
    (ModelNode*) &iedModel_PROT_LPHD1_PhyNam,
    (ModelNode*) &iedModel_PROT_LPHD1_PhyNam_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LPHD1_PhyNam_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_PROT_LPHD1_PhyNam,
    (ModelNode*) &iedModel_PROT_LPHD1_PhyNam_serNum,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LPHD1_PhyNam_serNum = {
    DataAttributeModelType,
    "serNum",
    (ModelNode*) &iedModel_PROT_LPHD1_PhyNam,
    (ModelNode*) &iedModel_PROT_LPHD1_PhyNam_model,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LPHD1_PhyNam_model = {
    DataAttributeModelType,
    "model",
    (ModelNode*) &iedModel_PROT_LPHD1_PhyNam,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_LPHD1_PhyHealth = {
    DataObjectModelType,
    "PhyHealth",
    (ModelNode*) &iedModel_PROT_LPHD1,
    (ModelNode*) &iedModel_PROT_LPHD1_Proxy,
    (ModelNode*) &iedModel_PROT_LPHD1_PhyHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_PROT_LPHD1_PhyHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_PROT_LPHD1_PhyHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_LPHD1_PhyHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_PROT_LPHD1_PhyHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_LPHD1_PhyHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_PROT_LPHD1_PhyHealth_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LPHD1_PhyHealth_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_LPHD1_PhyHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_LPHD1_Proxy = {
    DataObjectModelType,
    "Proxy",
    (ModelNode*) &iedModel_PROT_LPHD1,
    NULL,
    (ModelNode*) &iedModel_PROT_LPHD1_Proxy_stVal,
    0,
    -1
};

DataAttribute iedModel_PROT_LPHD1_Proxy_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_LPHD1_Proxy,
    (ModelNode*) &iedModel_PROT_LPHD1_Proxy_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_LPHD1_Proxy_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_LPHD1_Proxy,
    (ModelNode*) &iedModel_PROT_LPHD1_Proxy_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_LPHD1_Proxy_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_LPHD1_Proxy,
    (ModelNode*) &iedModel_PROT_LPHD1_Proxy_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LPHD1_Proxy_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_LPHD1_Proxy,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_PROT_PDIS1 = {
    LogicalNodeModelType,
    "PDIS1",
    (ModelNode*) &iedModel_PROT,
    (ModelNode*) &iedModel_PROT_PTRC1,
    (ModelNode*) &iedModel_PROT_PDIS1_Mod,
};

DataObject iedModel_PROT_PDIS1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_PROT_PDIS1,
    (ModelNode*) &iedModel_PROT_PDIS1_Beh,
    (ModelNode*) &iedModel_PROT_PDIS1_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_PROT_PDIS1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PDIS1_Mod,
    (ModelNode*) &iedModel_PROT_PDIS1_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PDIS1_Mod,
    (ModelNode*) &iedModel_PROT_PDIS1_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PDIS1_Mod,
    (ModelNode*) &iedModel_PROT_PDIS1_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_PROT_PDIS1_Mod,
    (ModelNode*) &iedModel_PROT_PDIS1_Mod_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_PDIS1_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PDIS1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_PROT_PDIS1,
    (ModelNode*) &iedModel_PROT_PDIS1_Health,
    (ModelNode*) &iedModel_PROT_PDIS1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_PROT_PDIS1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PDIS1_Beh,
    (ModelNode*) &iedModel_PROT_PDIS1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PDIS1_Beh,
    (ModelNode*) &iedModel_PROT_PDIS1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PDIS1_Beh,
    (ModelNode*) &iedModel_PROT_PDIS1_Beh_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_PDIS1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PDIS1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_PROT_PDIS1,
    (ModelNode*) &iedModel_PROT_PDIS1_NamPlt,
    (ModelNode*) &iedModel_PROT_PDIS1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_PROT_PDIS1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PDIS1_Health,
    (ModelNode*) &iedModel_PROT_PDIS1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PDIS1_Health,
    (ModelNode*) &iedModel_PROT_PDIS1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PDIS1_Health,
    (ModelNode*) &iedModel_PROT_PDIS1_Health_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_PDIS1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PDIS1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_PROT_PDIS1,
    (ModelNode*) &iedModel_PROT_PDIS1_Op,
    (ModelNode*) &iedModel_PROT_PDIS1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_PROT_PDIS1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_PROT_PDIS1_NamPlt,
    (ModelNode*) &iedModel_PROT_PDIS1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_PROT_PDIS1_NamPlt,
    (ModelNode*) &iedModel_PROT_PDIS1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_PDIS1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PDIS1_Op = {
    DataObjectModelType,
    "Op",
    (ModelNode*) &iedModel_PROT_PDIS1,
    (ModelNode*) &iedModel_PROT_PDIS1_Str,
    (ModelNode*) &iedModel_PROT_PDIS1_Op_general,
    0,
    -1
};

DataAttribute iedModel_PROT_PDIS1_Op_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PDIS1_Op,
    (ModelNode*) &iedModel_PROT_PDIS1_Op_phsA,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Op_phsA = {
    DataAttributeModelType,
    "phsA",
    (ModelNode*) &iedModel_PROT_PDIS1_Op,
    (ModelNode*) &iedModel_PROT_PDIS1_Op_phsB,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Op_phsB = {
    DataAttributeModelType,
    "phsB",
    (ModelNode*) &iedModel_PROT_PDIS1_Op,
    (ModelNode*) &iedModel_PROT_PDIS1_Op_phsC,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Op_phsC = {
    DataAttributeModelType,
    "phsC",
    (ModelNode*) &iedModel_PROT_PDIS1_Op,
    (ModelNode*) &iedModel_PROT_PDIS1_Op_neut,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Op_neut = {
    DataAttributeModelType,
    "neut",
    (ModelNode*) &iedModel_PROT_PDIS1_Op,
    (ModelNode*) &iedModel_PROT_PDIS1_Op_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Op_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PDIS1_Op,
    (ModelNode*) &iedModel_PROT_PDIS1_Op_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Op_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PDIS1_Op,
    (ModelNode*) &iedModel_PROT_PDIS1_Op_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Op_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_PDIS1_Op,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PDIS1_Str = {
    DataObjectModelType,
    "Str",
    (ModelNode*) &iedModel_PROT_PDIS1,
    NULL,
    (ModelNode*) &iedModel_PROT_PDIS1_Str_general,
    0,
    -1
};

DataAttribute iedModel_PROT_PDIS1_Str_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PDIS1_Str,
    (ModelNode*) &iedModel_PROT_PDIS1_Str_dirGeneral,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Str_dirGeneral = {
    DataAttributeModelType,
    "dirGeneral",
    (ModelNode*) &iedModel_PROT_PDIS1_Str,
    (ModelNode*) &iedModel_PROT_PDIS1_Str_phsA,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Str_phsA = {
    DataAttributeModelType,
    "phsA",
    (ModelNode*) &iedModel_PROT_PDIS1_Str,
    (ModelNode*) &iedModel_PROT_PDIS1_Str_dirPhsA,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Str_dirPhsA = {
    DataAttributeModelType,
    "dirPhsA",
    (ModelNode*) &iedModel_PROT_PDIS1_Str,
    (ModelNode*) &iedModel_PROT_PDIS1_Str_phsB,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Str_phsB = {
    DataAttributeModelType,
    "phsB",
    (ModelNode*) &iedModel_PROT_PDIS1_Str,
    (ModelNode*) &iedModel_PROT_PDIS1_Str_dirPhsB,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Str_dirPhsB = {
    DataAttributeModelType,
    "dirPhsB",
    (ModelNode*) &iedModel_PROT_PDIS1_Str,
    (ModelNode*) &iedModel_PROT_PDIS1_Str_phsC,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Str_phsC = {
    DataAttributeModelType,
    "phsC",
    (ModelNode*) &iedModel_PROT_PDIS1_Str,
    (ModelNode*) &iedModel_PROT_PDIS1_Str_dirPhsC,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Str_dirPhsC = {
    DataAttributeModelType,
    "dirPhsC",
    (ModelNode*) &iedModel_PROT_PDIS1_Str,
    (ModelNode*) &iedModel_PROT_PDIS1_Str_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Str_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PDIS1_Str,
    (ModelNode*) &iedModel_PROT_PDIS1_Str_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Str_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PDIS1_Str,
    (ModelNode*) &iedModel_PROT_PDIS1_Str_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIS1_Str_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_PDIS1_Str,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_PROT_PTRC1 = {
    LogicalNodeModelType,
    "PTRC1",
    (ModelNode*) &iedModel_PROT,
    (ModelNode*) &iedModel_PROT_RREC1,
    (ModelNode*) &iedModel_PROT_PTRC1_Mod,
};

DataObject iedModel_PROT_PTRC1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_PROT_PTRC1,
    (ModelNode*) &iedModel_PROT_PTRC1_Beh,
    (ModelNode*) &iedModel_PROT_PTRC1_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_PROT_PTRC1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTRC1_Mod,
    (ModelNode*) &iedModel_PROT_PTRC1_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC1_Mod,
    (ModelNode*) &iedModel_PROT_PTRC1_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC1_Mod,
    (ModelNode*) &iedModel_PROT_PTRC1_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_PROT_PTRC1_Mod,
    (ModelNode*) &iedModel_PROT_PTRC1_Mod_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_PTRC1_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_PROT_PTRC1,
    (ModelNode*) &iedModel_PROT_PTRC1_Health,
    (ModelNode*) &iedModel_PROT_PTRC1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_PROT_PTRC1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTRC1_Beh,
    (ModelNode*) &iedModel_PROT_PTRC1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC1_Beh,
    (ModelNode*) &iedModel_PROT_PTRC1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC1_Beh,
    (ModelNode*) &iedModel_PROT_PTRC1_Beh_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_PTRC1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_PROT_PTRC1,
    (ModelNode*) &iedModel_PROT_PTRC1_NamPlt,
    (ModelNode*) &iedModel_PROT_PTRC1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_PROT_PTRC1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTRC1_Health,
    (ModelNode*) &iedModel_PROT_PTRC1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC1_Health,
    (ModelNode*) &iedModel_PROT_PTRC1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC1_Health,
    (ModelNode*) &iedModel_PROT_PTRC1_Health_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_PTRC1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_PROT_PTRC1,
    (ModelNode*) &iedModel_PROT_PTRC1_Tr,
    (ModelNode*) &iedModel_PROT_PTRC1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_PROT_PTRC1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_PROT_PTRC1_NamPlt,
    (ModelNode*) &iedModel_PROT_PTRC1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_PROT_PTRC1_NamPlt,
    (ModelNode*) &iedModel_PROT_PTRC1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_PTRC1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC1_Tr = {
    DataObjectModelType,
    "Tr",
    (ModelNode*) &iedModel_PROT_PTRC1,
    (ModelNode*) &iedModel_PROT_PTRC1_TrMod,
    (ModelNode*) &iedModel_PROT_PTRC1_Tr_general,
    0,
    -1
};

DataAttribute iedModel_PROT_PTRC1_Tr_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTRC1_Tr,
    (ModelNode*) &iedModel_PROT_PTRC1_Tr_phsA,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Tr_phsA = {
    DataAttributeModelType,
    "phsA",
    (ModelNode*) &iedModel_PROT_PTRC1_Tr,
    (ModelNode*) &iedModel_PROT_PTRC1_Tr_phsB,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Tr_phsB = {
    DataAttributeModelType,
    "phsB",
    (ModelNode*) &iedModel_PROT_PTRC1_Tr,
    (ModelNode*) &iedModel_PROT_PTRC1_Tr_phsC,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Tr_phsC = {
    DataAttributeModelType,
    "phsC",
    (ModelNode*) &iedModel_PROT_PTRC1_Tr,
    (ModelNode*) &iedModel_PROT_PTRC1_Tr_neut,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Tr_neut = {
    DataAttributeModelType,
    "neut",
    (ModelNode*) &iedModel_PROT_PTRC1_Tr,
    (ModelNode*) &iedModel_PROT_PTRC1_Tr_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Tr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC1_Tr,
    (ModelNode*) &iedModel_PROT_PTRC1_Tr_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Tr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC1_Tr,
    (ModelNode*) &iedModel_PROT_PTRC1_Tr_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Tr_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_PTRC1_Tr,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC1_TrMod = {
    DataObjectModelType,
    "TrMod",
    (ModelNode*) &iedModel_PROT_PTRC1,
    NULL,
    (ModelNode*) &iedModel_PROT_PTRC1_TrMod_stVal,
    0,
    -1
};

DataAttribute iedModel_PROT_PTRC1_TrMod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTRC1_TrMod,
    (ModelNode*) &iedModel_PROT_PTRC1_TrMod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_TrMod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC1_TrMod,
    (ModelNode*) &iedModel_PROT_PTRC1_TrMod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_TrMod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC1_TrMod,
    (ModelNode*) &iedModel_PROT_PTRC1_TrMod_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_TrMod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_PTRC1_TrMod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_PROT_RREC1 = {
    LogicalNodeModelType,
    "RREC1",
    (ModelNode*) &iedModel_PROT,
    (ModelNode*) &iedModel_PROT_PSCH1,
    (ModelNode*) &iedModel_PROT_RREC1_Mod,
};

DataObject iedModel_PROT_RREC1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_PROT_RREC1,
    (ModelNode*) &iedModel_PROT_RREC1_Beh,
    (ModelNode*) &iedModel_PROT_RREC1_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_PROT_RREC1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_RREC1_Mod,
    (ModelNode*) &iedModel_PROT_RREC1_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_RREC1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_RREC1_Mod,
    (ModelNode*) &iedModel_PROT_RREC1_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_RREC1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_RREC1_Mod,
    (ModelNode*) &iedModel_PROT_RREC1_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_RREC1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_PROT_RREC1_Mod,
    (ModelNode*) &iedModel_PROT_RREC1_Mod_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_RREC1_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_RREC1_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_RREC1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_PROT_RREC1,
    (ModelNode*) &iedModel_PROT_RREC1_Health,
    (ModelNode*) &iedModel_PROT_RREC1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_PROT_RREC1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_RREC1_Beh,
    (ModelNode*) &iedModel_PROT_RREC1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_RREC1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_RREC1_Beh,
    (ModelNode*) &iedModel_PROT_RREC1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_RREC1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_RREC1_Beh,
    (ModelNode*) &iedModel_PROT_RREC1_Beh_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_RREC1_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_RREC1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_RREC1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_PROT_RREC1,
    (ModelNode*) &iedModel_PROT_RREC1_NamPlt,
    (ModelNode*) &iedModel_PROT_RREC1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_PROT_RREC1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_RREC1_Health,
    (ModelNode*) &iedModel_PROT_RREC1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_RREC1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_RREC1_Health,
    (ModelNode*) &iedModel_PROT_RREC1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_RREC1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_RREC1_Health,
    (ModelNode*) &iedModel_PROT_RREC1_Health_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_RREC1_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_RREC1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_RREC1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_PROT_RREC1,
    (ModelNode*) &iedModel_PROT_RREC1_Op,
    (ModelNode*) &iedModel_PROT_RREC1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_PROT_RREC1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_PROT_RREC1_NamPlt,
    (ModelNode*) &iedModel_PROT_RREC1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_RREC1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_PROT_RREC1_NamPlt,
    (ModelNode*) &iedModel_PROT_RREC1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_RREC1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_RREC1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_RREC1_Op = {
    DataObjectModelType,
    "Op",
    (ModelNode*) &iedModel_PROT_RREC1,
    (ModelNode*) &iedModel_PROT_RREC1_AutoRecSt,
    (ModelNode*) &iedModel_PROT_RREC1_Op_general,
    0,
    -1
};

DataAttribute iedModel_PROT_RREC1_Op_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_RREC1_Op,
    (ModelNode*) &iedModel_PROT_RREC1_Op_phsA,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_RREC1_Op_phsA = {
    DataAttributeModelType,
    "phsA",
    (ModelNode*) &iedModel_PROT_RREC1_Op,
    (ModelNode*) &iedModel_PROT_RREC1_Op_phsB,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_RREC1_Op_phsB = {
    DataAttributeModelType,
    "phsB",
    (ModelNode*) &iedModel_PROT_RREC1_Op,
    (ModelNode*) &iedModel_PROT_RREC1_Op_phsC,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_RREC1_Op_phsC = {
    DataAttributeModelType,
    "phsC",
    (ModelNode*) &iedModel_PROT_RREC1_Op,
    (ModelNode*) &iedModel_PROT_RREC1_Op_neut,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_RREC1_Op_neut = {
    DataAttributeModelType,
    "neut",
    (ModelNode*) &iedModel_PROT_RREC1_Op,
    (ModelNode*) &iedModel_PROT_RREC1_Op_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_RREC1_Op_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_RREC1_Op,
    (ModelNode*) &iedModel_PROT_RREC1_Op_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_RREC1_Op_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_RREC1_Op,
    (ModelNode*) &iedModel_PROT_RREC1_Op_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_RREC1_Op_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_RREC1_Op,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_RREC1_AutoRecSt = {
    DataObjectModelType,
    "AutoRecSt",
    (ModelNode*) &iedModel_PROT_RREC1,
    NULL,
    (ModelNode*) &iedModel_PROT_RREC1_AutoRecSt_stVal,
    0,
    -1
};

DataAttribute iedModel_PROT_RREC1_AutoRecSt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_RREC1_AutoRecSt,
    (ModelNode*) &iedModel_PROT_RREC1_AutoRecSt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_RREC1_AutoRecSt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_RREC1_AutoRecSt,
    (ModelNode*) &iedModel_PROT_RREC1_AutoRecSt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_RREC1_AutoRecSt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_RREC1_AutoRecSt,
    (ModelNode*) &iedModel_PROT_RREC1_AutoRecSt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_RREC1_AutoRecSt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_RREC1_AutoRecSt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_PROT_PSCH1 = {
    LogicalNodeModelType,
    "PSCH1",
    (ModelNode*) &iedModel_PROT,
    NULL,
    (ModelNode*) &iedModel_PROT_PSCH1_Mod,
};

DataObject iedModel_PROT_PSCH1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_PROT_PSCH1,
    (ModelNode*) &iedModel_PROT_PSCH1_Beh,
    (ModelNode*) &iedModel_PROT_PSCH1_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_PROT_PSCH1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PSCH1_Mod,
    (ModelNode*) &iedModel_PROT_PSCH1_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PSCH1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PSCH1_Mod,
    (ModelNode*) &iedModel_PROT_PSCH1_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PSCH1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PSCH1_Mod,
    (ModelNode*) &iedModel_PROT_PSCH1_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PSCH1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_PROT_PSCH1_Mod,
    (ModelNode*) &iedModel_PROT_PSCH1_Mod_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PSCH1_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_PSCH1_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PSCH1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_PROT_PSCH1,
    (ModelNode*) &iedModel_PROT_PSCH1_Health,
    (ModelNode*) &iedModel_PROT_PSCH1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_PROT_PSCH1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PSCH1_Beh,
    (ModelNode*) &iedModel_PROT_PSCH1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PSCH1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PSCH1_Beh,
    (ModelNode*) &iedModel_PROT_PSCH1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PSCH1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PSCH1_Beh,
    (ModelNode*) &iedModel_PROT_PSCH1_Beh_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PSCH1_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_PSCH1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PSCH1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_PROT_PSCH1,
    (ModelNode*) &iedModel_PROT_PSCH1_NamPlt,
    (ModelNode*) &iedModel_PROT_PSCH1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_PROT_PSCH1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PSCH1_Health,
    (ModelNode*) &iedModel_PROT_PSCH1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PSCH1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PSCH1_Health,
    (ModelNode*) &iedModel_PROT_PSCH1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PSCH1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PSCH1_Health,
    (ModelNode*) &iedModel_PROT_PSCH1_Health_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PSCH1_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_PSCH1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PSCH1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_PROT_PSCH1,
    (ModelNode*) &iedModel_PROT_PSCH1_SchNum,
    (ModelNode*) &iedModel_PROT_PSCH1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_PROT_PSCH1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_PROT_PSCH1_NamPlt,
    (ModelNode*) &iedModel_PROT_PSCH1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PSCH1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_PROT_PSCH1_NamPlt,
    (ModelNode*) &iedModel_PROT_PSCH1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PSCH1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_PSCH1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PSCH1_SchNum = {
    DataObjectModelType,
    "SchNum",
    (ModelNode*) &iedModel_PROT_PSCH1,
    NULL,
    (ModelNode*) &iedModel_PROT_PSCH1_SchNum_stVal,
    0,
    -1
};

DataAttribute iedModel_PROT_PSCH1_SchNum_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PSCH1_SchNum,
    (ModelNode*) &iedModel_PROT_PSCH1_SchNum_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PSCH1_SchNum_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PSCH1_SchNum,
    (ModelNode*) &iedModel_PROT_PSCH1_SchNum_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_PROT_PSCH1_SchNum_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PSCH1_SchNum,
    (ModelNode*) &iedModel_PROT_PSCH1_SchNum_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PSCH1_SchNum_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_PSCH1_SchNum,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};


LogicalDevice iedModel_MEAS = {
    LogicalDeviceModelType,
    "MEAS",
    (ModelNode*) &iedModel,
    (ModelNode*) &iedModel_CONTROL,
    (ModelNode*) &iedModel_MEAS_LLN0,
    NULL
};

LogicalNode iedModel_MEAS_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_MEAS_LPHD1,
    (ModelNode*) &iedModel_MEAS_LLN0_Mod,
};

DataObject iedModel_MEAS_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_MEAS_LLN0,
    (ModelNode*) &iedModel_MEAS_LLN0_Beh,
    (ModelNode*) &iedModel_MEAS_LLN0_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_LLN0_Mod,
    (ModelNode*) &iedModel_MEAS_LLN0_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_LLN0_Mod,
    (ModelNode*) &iedModel_MEAS_LLN0_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_LLN0_Mod,
    (ModelNode*) &iedModel_MEAS_LLN0_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_MEAS_LLN0_Mod,
    (ModelNode*) &iedModel_MEAS_LLN0_Mod_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_LLN0_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MEAS_LLN0,
    (ModelNode*) &iedModel_MEAS_LLN0_Health,
    (ModelNode*) &iedModel_MEAS_LLN0_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_LLN0_Beh,
    (ModelNode*) &iedModel_MEAS_LLN0_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_LLN0_Beh,
    (ModelNode*) &iedModel_MEAS_LLN0_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_LLN0_Beh,
    (ModelNode*) &iedModel_MEAS_LLN0_Beh_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_LLN0_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_MEAS_LLN0,
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt,
    (ModelNode*) &iedModel_MEAS_LLN0_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_LLN0_Health,
    (ModelNode*) &iedModel_MEAS_LLN0_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_LLN0_Health,
    (ModelNode*) &iedModel_MEAS_LLN0_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_LLN0_Health,
    (ModelNode*) &iedModel_MEAS_LLN0_Health_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_LLN0_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_MEAS_LLN0,
    NULL,
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_MEAS_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt,
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt,
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt,
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_NamPlt_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt,
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt,
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt_ldNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_MEAS_LPHD1 = {
    LogicalNodeModelType,
    "LPHD1",
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_MEAS_MMXU1,
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam,
};

DataObject iedModel_MEAS_LPHD1_PhyNam = {
    DataObjectModelType,
    "PhyNam",
    (ModelNode*) &iedModel_MEAS_LPHD1,
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam_vendor,
    0,
    -1
};

DataAttribute iedModel_MEAS_LPHD1_PhyNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam,
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam_hwRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_PhyNam_hwRev = {
    DataAttributeModelType,
    "hwRev",
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam,
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_PhyNam_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam,
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam_serNum,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_PhyNam_serNum = {
    DataAttributeModelType,
    "serNum",
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam,
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam_model,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_PhyNam_model = {
    DataAttributeModelType,
    "model",
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LPHD1_PhyHealth = {
    DataObjectModelType,
    "PhyHealth",
    (ModelNode*) &iedModel_MEAS_LPHD1,
    (ModelNode*) &iedModel_MEAS_LPHD1_Proxy,
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_LPHD1_PhyHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_PhyHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_PhyHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyHealth_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_PhyHealth_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LPHD1_Proxy = {
    DataObjectModelType,
    "Proxy",
    (ModelNode*) &iedModel_MEAS_LPHD1,
    NULL,
    (ModelNode*) &iedModel_MEAS_LPHD1_Proxy_stVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_LPHD1_Proxy_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_LPHD1_Proxy,
    (ModelNode*) &iedModel_MEAS_LPHD1_Proxy_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_Proxy_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_LPHD1_Proxy,
    (ModelNode*) &iedModel_MEAS_LPHD1_Proxy_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_Proxy_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_LPHD1_Proxy,
    (ModelNode*) &iedModel_MEAS_LPHD1_Proxy_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_Proxy_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_LPHD1_Proxy,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_MEAS_MMXU1 = {
    LogicalNodeModelType,
    "MMXU1",
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_MEAS_MSQI1,
    (ModelNode*) &iedModel_MEAS_MMXU1_Mod,
};

DataObject iedModel_MEAS_MMXU1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_MEAS_MMXU1,
    (ModelNode*) &iedModel_MEAS_MMXU1_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU1_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_MMXU1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_Mod,
    (ModelNode*) &iedModel_MEAS_MMXU1_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_Mod,
    (ModelNode*) &iedModel_MEAS_MMXU1_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_Mod,
    (ModelNode*) &iedModel_MEAS_MMXU1_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_MEAS_MMXU1_Mod,
    (ModelNode*) &iedModel_MEAS_MMXU1_Mod_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MMXU1_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MEAS_MMXU1,
    (ModelNode*) &iedModel_MEAS_MMXU1_Health,
    (ModelNode*) &iedModel_MEAS_MMXU1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_MMXU1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU1_Beh_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MMXU1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_MEAS_MMXU1,
    (ModelNode*) &iedModel_MEAS_MMXU1_NamPlt,
    (ModelNode*) &iedModel_MEAS_MMXU1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_MMXU1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_Health,
    (ModelNode*) &iedModel_MEAS_MMXU1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_Health,
    (ModelNode*) &iedModel_MEAS_MMXU1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_Health,
    (ModelNode*) &iedModel_MEAS_MMXU1_Health_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MMXU1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_MEAS_MMXU1,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_MEAS_MMXU1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_MEAS_MMXU1_NamPlt,
    (ModelNode*) &iedModel_MEAS_MMXU1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_MEAS_MMXU1_NamPlt,
    (ModelNode*) &iedModel_MEAS_MMXU1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MMXU1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_TotW = {
    DataObjectModelType,
    "TotW",
    (ModelNode*) &iedModel_MEAS_MMXU1,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW_mag,
    0,
    -1
};

DataAttribute iedModel_MEAS_MMXU1_TotW_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotW_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotW_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotW_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW_d,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotW_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW_units,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotW_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotW_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_TotVAr = {
    DataObjectModelType,
    "TotVAr",
    (ModelNode*) &iedModel_MEAS_MMXU1,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr_mag,
    0,
    -1
};

DataAttribute iedModel_MEAS_MMXU1_TotVAr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotVAr_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotVAr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotVAr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotVAr_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr_d,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotVAr_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr_units,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotVAr_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotVAr_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_TotVA = {
    DataObjectModelType,
    "TotVA",
    (ModelNode*) &iedModel_MEAS_MMXU1,
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA_mag,
    0,
    -1
};

DataAttribute iedModel_MEAS_MMXU1_TotVA_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotVA_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotVA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotVA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotVA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA_d,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotVA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA_units,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotVA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotVA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_Hz = {
    DataObjectModelType,
    "Hz",
    (ModelNode*) &iedModel_MEAS_MMXU1,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz_mag,
    0,
    -1
};

DataAttribute iedModel_MEAS_MMXU1_Hz_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz,
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_Hz_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_Hz_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz,
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_Hz_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz,
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_Hz_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz,
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz_d,
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_Hz_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz_units,
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_Hz_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_Hz_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_PhV = {
    DataObjectModelType,
    "PhV",
    (ModelNode*) &iedModel_MEAS_MMXU1,
    (ModelNode*) &iedModel_MEAS_MMXU1_A,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA,
    0,
    -1
};

DataObject iedModel_MEAS_MMXU1_PhV_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA_cVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA_cVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsA_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsA_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_PhV_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB_cVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB_cVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsB_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsB_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsB_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_PhV_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC_cVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC_cVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsC_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsC_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsC_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_PhV_neut = {
    DataObjectModelType,
    "neut",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut_cVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_MMXU1_PhV_neut_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_neut_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut_cVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_neut_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_neut_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_neut_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_neut_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_neut_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_neut_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_A = {
    DataObjectModelType,
    "A",
    (ModelNode*) &iedModel_MEAS_MMXU1,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA,
    0,
    -1
};

DataObject iedModel_MEAS_MMXU1_A_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU1_A,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA_cVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_MMXU1_A_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA_cVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsA_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsA_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_A_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU1_A,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB_cVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_MMXU1_A_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB_cVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsB_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsB_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsB_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_A_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU1_A,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_neut,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC_cVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_MMXU1_A_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC_cVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsC_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsC_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsC_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_A_neut = {
    DataObjectModelType,
    "neut",
    (ModelNode*) &iedModel_MEAS_MMXU1_A,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_neut_cVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_MMXU1_A_neut_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_neut,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_neut_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_neut_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_neut_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_neut_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_neut_cVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_neut_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_neut_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_neut_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_neut_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_neut_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_neut_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_neut_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_neut_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_neut_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_neut,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_neut_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_neut_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_neut,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_neut_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_neut_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_neut,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_A,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_A,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MMXU1_A,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_MEAS_MSQI1 = {
    LogicalNodeModelType,
    "MSQI1",
    (ModelNode*) &iedModel_MEAS,
    NULL,
    (ModelNode*) &iedModel_MEAS_MSQI1_Mod,
};

DataObject iedModel_MEAS_MSQI1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_MEAS_MSQI1,
    (ModelNode*) &iedModel_MEAS_MSQI1_Beh,
    (ModelNode*) &iedModel_MEAS_MSQI1_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_MSQI1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_MSQI1_Mod,
    (ModelNode*) &iedModel_MEAS_MSQI1_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MSQI1_Mod,
    (ModelNode*) &iedModel_MEAS_MSQI1_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MSQI1_Mod,
    (ModelNode*) &iedModel_MEAS_MSQI1_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_MEAS_MSQI1_Mod,
    (ModelNode*) &iedModel_MEAS_MSQI1_Mod_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MSQI1_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MSQI1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MEAS_MSQI1,
    (ModelNode*) &iedModel_MEAS_MSQI1_Health,
    (ModelNode*) &iedModel_MEAS_MSQI1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_MSQI1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_MSQI1_Beh,
    (ModelNode*) &iedModel_MEAS_MSQI1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MSQI1_Beh,
    (ModelNode*) &iedModel_MEAS_MSQI1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MSQI1_Beh,
    (ModelNode*) &iedModel_MEAS_MSQI1_Beh_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MSQI1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MSQI1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_MEAS_MSQI1,
    (ModelNode*) &iedModel_MEAS_MSQI1_NamPlt,
    (ModelNode*) &iedModel_MEAS_MSQI1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_MSQI1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_MSQI1_Health,
    (ModelNode*) &iedModel_MEAS_MSQI1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MSQI1_Health,
    (ModelNode*) &iedModel_MEAS_MSQI1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MSQI1_Health,
    (ModelNode*) &iedModel_MEAS_MSQI1_Health_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MSQI1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MSQI1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_MEAS_MSQI1,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA,
    (ModelNode*) &iedModel_MEAS_MSQI1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_MEAS_MSQI1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_MEAS_MSQI1_NamPlt,
    (ModelNode*) &iedModel_MEAS_MSQI1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_MEAS_MSQI1_NamPlt,
    (ModelNode*) &iedModel_MEAS_MSQI1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MSQI1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MSQI1_SeqA = {
    DataObjectModelType,
    "SeqA",
    (ModelNode*) &iedModel_MEAS_MSQI1,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c1,
    0,
    -1
};

DataObject iedModel_MEAS_MSQI1_SeqA_c1 = {
    DataObjectModelType,
    "c1",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c2,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c1_cVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c1_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c1,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c1_q,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c1_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c1_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c1_cVal,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c1_cVal_ang,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c1_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c1_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c1_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c1_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c1_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c1_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c1_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c1_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c1,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c1_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c1,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MSQI1_SeqA_c2 = {
    DataObjectModelType,
    "c2",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c0,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c2_cVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c2_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c2,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c2_q,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c2_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c2_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c2_cVal,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c2_cVal_ang,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c2_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c2_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c2_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c2_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c2_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c2_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c2_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c2_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c2,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c2_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c2,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c2_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c2,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MSQI1_SeqA_c0 = {
    DataObjectModelType,
    "c0",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_q,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c0_cVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c0_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c0,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c0_q,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c0_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c0_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c0_cVal,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c0_cVal_ang,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c0_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c0_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c0_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c0_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c0_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c0_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c0_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c0_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c0_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c0,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c0_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c0_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c0,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c0_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_c0_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_c0,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqA,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MSQI1_SeqV = {
    DataObjectModelType,
    "SeqV",
    (ModelNode*) &iedModel_MEAS_MSQI1,
    NULL,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c1,
    0,
    -1
};

DataObject iedModel_MEAS_MSQI1_SeqV_c1 = {
    DataObjectModelType,
    "c1",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c2,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c1_cVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c1_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c1,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c1_q,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c1_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c1_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c1_cVal,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c1_cVal_ang,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c1_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c1_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c1_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c1_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c1_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c1_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c1_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c1_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c1,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c1_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c1,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MSQI1_SeqV_c2 = {
    DataObjectModelType,
    "c2",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c0,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c2_cVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c2_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c2,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c2_q,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c2_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c2_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c2_cVal,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c2_cVal_ang,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c2_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c2_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c2_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c2_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c2_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c2_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c2_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c2_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c2,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c2_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c2,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c2_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c2,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MSQI1_SeqV_c0 = {
    DataObjectModelType,
    "c0",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_q,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c0_cVal,
    0,
    -1
};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c0_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c0,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c0_q,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c0_cVal_mag,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c0_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c0_cVal,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c0_cVal_ang,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c0_cVal_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c0_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c0_cVal_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c0_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c0_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c0_cVal_ang_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c0_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c0_cVal_ang,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c0_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c0,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c0_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c0_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c0,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c0_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_c0_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_c0,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV,
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MSQI1_SeqV_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MSQI1_SeqV,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};


LogicalDevice iedModel_CONTROL = {
    LogicalDeviceModelType,
    "CONTROL",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_CONTROL_LLN0,
    NULL
};

LogicalNode iedModel_CONTROL_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_CONTROL,
    (ModelNode*) &iedModel_CONTROL_LPHD1,
    (ModelNode*) &iedModel_CONTROL_LLN0_Mod,
};

DataObject iedModel_CONTROL_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_CONTROL_LLN0,
    (ModelNode*) &iedModel_CONTROL_LLN0_Beh,
    (ModelNode*) &iedModel_CONTROL_LLN0_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_CONTROL_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CONTROL_LLN0_Mod,
    (ModelNode*) &iedModel_CONTROL_LLN0_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CONTROL_LLN0_Mod,
    (ModelNode*) &iedModel_CONTROL_LLN0_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CONTROL_LLN0_Mod,
    (ModelNode*) &iedModel_CONTROL_LLN0_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CONTROL_LLN0_Mod,
    (ModelNode*) &iedModel_CONTROL_LLN0_Mod_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LLN0_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CONTROL_LLN0_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_CONTROL_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CONTROL_LLN0,
    (ModelNode*) &iedModel_CONTROL_LLN0_Health,
    (ModelNode*) &iedModel_CONTROL_LLN0_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_CONTROL_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CONTROL_LLN0_Beh,
    (ModelNode*) &iedModel_CONTROL_LLN0_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CONTROL_LLN0_Beh,
    (ModelNode*) &iedModel_CONTROL_LLN0_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CONTROL_LLN0_Beh,
    (ModelNode*) &iedModel_CONTROL_LLN0_Beh_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LLN0_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CONTROL_LLN0_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_CONTROL_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_CONTROL_LLN0,
    (ModelNode*) &iedModel_CONTROL_LLN0_NamPlt,
    (ModelNode*) &iedModel_CONTROL_LLN0_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_CONTROL_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CONTROL_LLN0_Health,
    (ModelNode*) &iedModel_CONTROL_LLN0_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CONTROL_LLN0_Health,
    (ModelNode*) &iedModel_CONTROL_LLN0_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CONTROL_LLN0_Health,
    (ModelNode*) &iedModel_CONTROL_LLN0_Health_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LLN0_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CONTROL_LLN0_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_CONTROL_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_CONTROL_LLN0,
    NULL,
    (ModelNode*) &iedModel_CONTROL_LLN0_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_CONTROL_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_CONTROL_LLN0_NamPlt,
    (ModelNode*) &iedModel_CONTROL_LLN0_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_CONTROL_LLN0_NamPlt,
    (ModelNode*) &iedModel_CONTROL_LLN0_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CONTROL_LLN0_NamPlt,
    (ModelNode*) &iedModel_CONTROL_LLN0_NamPlt_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LLN0_NamPlt_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_CONTROL_LLN0_NamPlt,
    (ModelNode*) &iedModel_CONTROL_LLN0_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_CONTROL_LLN0_NamPlt,
    (ModelNode*) &iedModel_CONTROL_LLN0_NamPlt_ldNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LLN0_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_CONTROL_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_CONTROL_LPHD1 = {
    LogicalNodeModelType,
    "LPHD1",
    (ModelNode*) &iedModel_CONTROL,
    (ModelNode*) &iedModel_CONTROL_XCBR1,
    (ModelNode*) &iedModel_CONTROL_LPHD1_PhyNam,
};

DataObject iedModel_CONTROL_LPHD1_PhyNam = {
    DataObjectModelType,
    "PhyNam",
    (ModelNode*) &iedModel_CONTROL_LPHD1,
    (ModelNode*) &iedModel_CONTROL_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_CONTROL_LPHD1_PhyNam_vendor,
    0,
    -1
};

DataAttribute iedModel_CONTROL_LPHD1_PhyNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_CONTROL_LPHD1_PhyNam,
    (ModelNode*) &iedModel_CONTROL_LPHD1_PhyNam_hwRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LPHD1_PhyNam_hwRev = {
    DataAttributeModelType,
    "hwRev",
    (ModelNode*) &iedModel_CONTROL_LPHD1_PhyNam,
    (ModelNode*) &iedModel_CONTROL_LPHD1_PhyNam_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LPHD1_PhyNam_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_CONTROL_LPHD1_PhyNam,
    (ModelNode*) &iedModel_CONTROL_LPHD1_PhyNam_serNum,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LPHD1_PhyNam_serNum = {
    DataAttributeModelType,
    "serNum",
    (ModelNode*) &iedModel_CONTROL_LPHD1_PhyNam,
    (ModelNode*) &iedModel_CONTROL_LPHD1_PhyNam_model,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LPHD1_PhyNam_model = {
    DataAttributeModelType,
    "model",
    (ModelNode*) &iedModel_CONTROL_LPHD1_PhyNam,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_CONTROL_LPHD1_PhyHealth = {
    DataObjectModelType,
    "PhyHealth",
    (ModelNode*) &iedModel_CONTROL_LPHD1,
    (ModelNode*) &iedModel_CONTROL_LPHD1_Proxy,
    (ModelNode*) &iedModel_CONTROL_LPHD1_PhyHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_CONTROL_LPHD1_PhyHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CONTROL_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_CONTROL_LPHD1_PhyHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LPHD1_PhyHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CONTROL_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_CONTROL_LPHD1_PhyHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LPHD1_PhyHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CONTROL_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_CONTROL_LPHD1_PhyHealth_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LPHD1_PhyHealth_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CONTROL_LPHD1_PhyHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_CONTROL_LPHD1_Proxy = {
    DataObjectModelType,
    "Proxy",
    (ModelNode*) &iedModel_CONTROL_LPHD1,
    NULL,
    (ModelNode*) &iedModel_CONTROL_LPHD1_Proxy_stVal,
    0,
    -1
};

DataAttribute iedModel_CONTROL_LPHD1_Proxy_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CONTROL_LPHD1_Proxy,
    (ModelNode*) &iedModel_CONTROL_LPHD1_Proxy_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LPHD1_Proxy_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CONTROL_LPHD1_Proxy,
    (ModelNode*) &iedModel_CONTROL_LPHD1_Proxy_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LPHD1_Proxy_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CONTROL_LPHD1_Proxy,
    (ModelNode*) &iedModel_CONTROL_LPHD1_Proxy_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_LPHD1_Proxy_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CONTROL_LPHD1_Proxy,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_CONTROL_XCBR1 = {
    LogicalNodeModelType,
    "XCBR1",
    (ModelNode*) &iedModel_CONTROL,
    (ModelNode*) &iedModel_CONTROL_CSWI1,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Mod,
};

DataObject iedModel_CONTROL_XCBR1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_CONTROL_XCBR1,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Beh,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_CONTROL_XCBR1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Mod,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Mod,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Mod,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Mod,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Mod_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_CONTROL_XCBR1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CONTROL_XCBR1,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Health,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_CONTROL_XCBR1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Beh,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Beh,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Beh,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Beh_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_CONTROL_XCBR1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_CONTROL_XCBR1,
    (ModelNode*) &iedModel_CONTROL_XCBR1_NamPlt,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_CONTROL_XCBR1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Health,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Health,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Health,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Health_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_CONTROL_XCBR1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_CONTROL_XCBR1,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos,
    (ModelNode*) &iedModel_CONTROL_XCBR1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_CONTROL_XCBR1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_CONTROL_XCBR1_NamPlt,
    (ModelNode*) &iedModel_CONTROL_XCBR1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_CONTROL_XCBR1_NamPlt,
    (ModelNode*) &iedModel_CONTROL_XCBR1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CONTROL_XCBR1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_CONTROL_XCBR1_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_CONTROL_XCBR1,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_stVal,
    0,
    -1
};

DataAttribute iedModel_CONTROL_XCBR1_Pos_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Pos_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Pos_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Pos_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_SBO,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Pos_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_Oper,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Pos_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_Oper,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_Oper_ctlNum,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Pos_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_Oper_origin,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Pos_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Pos_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_Oper,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Pos_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_Oper,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Pos_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_Oper,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Pos_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Pos_SBO = {
    DataAttributeModelType,
    "SBO",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Pos_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_sboTimeout,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Pos_sboTimeout = {
    DataAttributeModelType,
    "sboTimeout",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos,
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_Pos_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CONTROL_XCBR1_Pos,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_CONTROL_XCBR1_BlkOpn = {
    DataObjectModelType,
    "BlkOpn",
    (ModelNode*) &iedModel_CONTROL_XCBR1,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn_stVal,
    0,
    -1
};

DataAttribute iedModel_CONTROL_XCBR1_BlkOpn_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkOpn_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkOpn_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkOpn_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn_ctlModel,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkOpn_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn_Oper,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkOpn_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn_Oper,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn_Oper_ctlNum,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkOpn_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn_Oper_origin,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkOpn_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkOpn_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn_Oper,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkOpn_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn_Oper,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkOpn_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn_Oper,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkOpn_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkOpn_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn_sboTimeout,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkOpn_sboTimeout = {
    DataAttributeModelType,
    "sboTimeout",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkOpn_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkOpn,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_CONTROL_XCBR1_BlkCls = {
    DataObjectModelType,
    "BlkCls",
    (ModelNode*) &iedModel_CONTROL_XCBR1,
    NULL,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls_stVal,
    0,
    -1
};

DataAttribute iedModel_CONTROL_XCBR1_BlkCls_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkCls_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkCls_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkCls_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls_ctlModel,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkCls_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls_Oper,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkCls_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls_Oper,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls_Oper_ctlNum,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkCls_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls_Oper_origin,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkCls_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkCls_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls_Oper,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkCls_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls_Oper,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkCls_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls_Oper,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkCls_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkCls_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls_sboTimeout,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkCls_sboTimeout = {
    DataAttributeModelType,
    "sboTimeout",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls,
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_XCBR1_BlkCls_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CONTROL_XCBR1_BlkCls,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_CONTROL_CSWI1 = {
    LogicalNodeModelType,
    "CSWI1",
    (ModelNode*) &iedModel_CONTROL,
    (ModelNode*) &iedModel_CONTROL_RSYN1,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Mod,
};

DataObject iedModel_CONTROL_CSWI1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_CONTROL_CSWI1,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Beh,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_CONTROL_CSWI1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Mod,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Mod,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Mod,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Mod,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Mod_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_CONTROL_CSWI1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CONTROL_CSWI1,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Health,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_CONTROL_CSWI1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Beh,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Beh,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Beh,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Beh_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_CONTROL_CSWI1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_CONTROL_CSWI1,
    (ModelNode*) &iedModel_CONTROL_CSWI1_NamPlt,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_CONTROL_CSWI1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Health,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Health,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Health,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Health_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_CONTROL_CSWI1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_CONTROL_CSWI1,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos,
    (ModelNode*) &iedModel_CONTROL_CSWI1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_CONTROL_CSWI1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_CONTROL_CSWI1_NamPlt,
    (ModelNode*) &iedModel_CONTROL_CSWI1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_CONTROL_CSWI1_NamPlt,
    (ModelNode*) &iedModel_CONTROL_CSWI1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CONTROL_CSWI1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_CONTROL_CSWI1_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_CONTROL_CSWI1,
    NULL,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_stVal,
    0,
    -1
};

DataAttribute iedModel_CONTROL_CSWI1_Pos_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_SBOw,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Oper,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Oper,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Oper_ctlNum,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Oper_origin,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Oper,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Oper,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Oper,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_SBOw = {
    DataAttributeModelType,
    "SBOw",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Cancel,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_SBOw_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_SBOw_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_SBOw,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_SBOw_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_SBOw_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_SBOw,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_SBOw_ctlNum,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_SBOw_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_SBOw_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_SBOw_origin,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_SBOw_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_SBOw_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_SBOw_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_SBOw_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_SBOw,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_SBOw_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_SBOw_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_SBOw,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_SBOw_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_SBOw_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_SBOw,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_SBOw_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_SBOw_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_SBOw,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_Cancel = {
    DataAttributeModelType,
    "Cancel",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_ctlModel,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Cancel_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_Cancel_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Cancel,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Cancel_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_Cancel_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Cancel,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Cancel_ctlNum,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Cancel_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_Cancel_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Cancel_origin,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Cancel_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_Cancel_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Cancel_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_Cancel_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Cancel,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Cancel_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_Cancel_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Cancel,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Cancel_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_Cancel_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Cancel,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Cancel_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_Cancel_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_Cancel,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_sboTimeout,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_sboTimeout = {
    DataAttributeModelType,
    "sboTimeout",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos,
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_CSWI1_Pos_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CONTROL_CSWI1_Pos,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_CONTROL_RSYN1 = {
    LogicalNodeModelType,
    "RSYN1",
    (ModelNode*) &iedModel_CONTROL,
    NULL,
    (ModelNode*) &iedModel_CONTROL_RSYN1_Mod,
};

DataObject iedModel_CONTROL_RSYN1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_CONTROL_RSYN1,
    (ModelNode*) &iedModel_CONTROL_RSYN1_Beh,
    (ModelNode*) &iedModel_CONTROL_RSYN1_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_CONTROL_RSYN1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CONTROL_RSYN1_Mod,
    (ModelNode*) &iedModel_CONTROL_RSYN1_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_RSYN1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CONTROL_RSYN1_Mod,
    (ModelNode*) &iedModel_CONTROL_RSYN1_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_RSYN1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CONTROL_RSYN1_Mod,
    (ModelNode*) &iedModel_CONTROL_RSYN1_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_RSYN1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CONTROL_RSYN1_Mod,
    (ModelNode*) &iedModel_CONTROL_RSYN1_Mod_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_RSYN1_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CONTROL_RSYN1_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_CONTROL_RSYN1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CONTROL_RSYN1,
    (ModelNode*) &iedModel_CONTROL_RSYN1_Health,
    (ModelNode*) &iedModel_CONTROL_RSYN1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_CONTROL_RSYN1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CONTROL_RSYN1_Beh,
    (ModelNode*) &iedModel_CONTROL_RSYN1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_RSYN1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CONTROL_RSYN1_Beh,
    (ModelNode*) &iedModel_CONTROL_RSYN1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_RSYN1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CONTROL_RSYN1_Beh,
    (ModelNode*) &iedModel_CONTROL_RSYN1_Beh_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_RSYN1_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CONTROL_RSYN1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_CONTROL_RSYN1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_CONTROL_RSYN1,
    (ModelNode*) &iedModel_CONTROL_RSYN1_NamPlt,
    (ModelNode*) &iedModel_CONTROL_RSYN1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_CONTROL_RSYN1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CONTROL_RSYN1_Health,
    (ModelNode*) &iedModel_CONTROL_RSYN1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_RSYN1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CONTROL_RSYN1_Health,
    (ModelNode*) &iedModel_CONTROL_RSYN1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_RSYN1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CONTROL_RSYN1_Health,
    (ModelNode*) &iedModel_CONTROL_RSYN1_Health_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_RSYN1_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CONTROL_RSYN1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_CONTROL_RSYN1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_CONTROL_RSYN1,
    (ModelNode*) &iedModel_CONTROL_RSYN1_RsSyn,
    (ModelNode*) &iedModel_CONTROL_RSYN1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_CONTROL_RSYN1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_CONTROL_RSYN1_NamPlt,
    (ModelNode*) &iedModel_CONTROL_RSYN1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_RSYN1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_CONTROL_RSYN1_NamPlt,
    (ModelNode*) &iedModel_CONTROL_RSYN1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_RSYN1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CONTROL_RSYN1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_CONTROL_RSYN1_RsSyn = {
    DataObjectModelType,
    "RsSyn",
    (ModelNode*) &iedModel_CONTROL_RSYN1,
    NULL,
    (ModelNode*) &iedModel_CONTROL_RSYN1_RsSyn_stVal,
    0,
    -1
};

DataAttribute iedModel_CONTROL_RSYN1_RsSyn_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CONTROL_RSYN1_RsSyn,
    (ModelNode*) &iedModel_CONTROL_RSYN1_RsSyn_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_RSYN1_RsSyn_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CONTROL_RSYN1_RsSyn,
    (ModelNode*) &iedModel_CONTROL_RSYN1_RsSyn_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_CONTROL_RSYN1_RsSyn_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CONTROL_RSYN1_RsSyn,
    (ModelNode*) &iedModel_CONTROL_RSYN1_RsSyn_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CONTROL_RSYN1_RsSyn_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CONTROL_RSYN1_RsSyn,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

extern ReportControlBlock iedModel_GenericIO_LLN0_report0;
extern ReportControlBlock iedModel_GenericIO_LLN0_report1;
extern ReportControlBlock iedModel_GenericIO_LLN0_report2;
extern ReportControlBlock iedModel_GenericIO_LLN0_report3;
extern ReportControlBlock iedModel_GenericIO_LLN0_report4;
extern ReportControlBlock iedModel_GenericIO_LLN0_report5;
extern ReportControlBlock iedModel_GenericIO_LLN0_report6;
extern ReportControlBlock iedModel_GenericIO_LLN0_report7;
extern ReportControlBlock iedModel_GenericIO_LLN0_report8;
extern ReportControlBlock iedModel_PROT_LLN0_report0;
extern ReportControlBlock iedModel_PROT_LLN0_report1;
extern ReportControlBlock iedModel_PROT_LLN0_report2;
extern ReportControlBlock iedModel_PROT_LLN0_report3;
extern ReportControlBlock iedModel_PROT_LLN0_report4;
extern ReportControlBlock iedModel_PROT_LLN0_report5;
extern ReportControlBlock iedModel_PROT_LLN0_report6;
extern ReportControlBlock iedModel_MEAS_LLN0_report0;
extern ReportControlBlock iedModel_MEAS_LLN0_report1;
extern ReportControlBlock iedModel_MEAS_LLN0_report2;
extern ReportControlBlock iedModel_MEAS_LLN0_report3;
extern ReportControlBlock iedModel_MEAS_LLN0_report4;
extern ReportControlBlock iedModel_MEAS_LLN0_report5;
extern ReportControlBlock iedModel_MEAS_LLN0_report6;
extern ReportControlBlock iedModel_MEAS_LLN0_report7;
extern ReportControlBlock iedModel_CONTROL_LLN0_report0;
extern ReportControlBlock iedModel_CONTROL_LLN0_report1;

ReportControlBlock iedModel_GenericIO_LLN0_report0 = {&iedModel_GenericIO_LLN0, "EventsRCB01", "simpleIO/GenericIO/LLN0.EventsRCB", false, "Events", 1, 27, 159, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_GenericIO_LLN0_report1};
ReportControlBlock iedModel_GenericIO_LLN0_report1 = {&iedModel_GenericIO_LLN0, "EventsRCB02", "simpleIO/GenericIO/LLN0.EventsRCB", false, "Events", 1, 27, 159, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_GenericIO_LLN0_report2};
ReportControlBlock iedModel_GenericIO_LLN0_report2 = {&iedModel_GenericIO_LLN0, "EventsRCB03", "simpleIO/GenericIO/LLN0.EventsRCB", false, "Events", 1, 27, 159, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_GenericIO_LLN0_report3};
ReportControlBlock iedModel_GenericIO_LLN0_report3 = {&iedModel_GenericIO_LLN0, "EventsRCB04", "simpleIO/GenericIO/LLN0.EventsRCB", false, "Events", 1, 27, 159, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_GenericIO_LLN0_report4};
ReportControlBlock iedModel_GenericIO_LLN0_report4 = {&iedModel_GenericIO_LLN0, "EventsRCB05", "simpleIO/GenericIO/LLN0.EventsRCB", false, "Events", 1, 27, 159, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_GenericIO_LLN0_report5};
ReportControlBlock iedModel_GenericIO_LLN0_report5 = {&iedModel_GenericIO_LLN0, "AnalogValuesRCB01", "simpleIO/GenericIO/LLN0.AnalogValuesRCB", false, "AnalogValues", 1, 27, 159, 50, 5000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_GenericIO_LLN0_report6};
ReportControlBlock iedModel_GenericIO_LLN0_report6 = {&iedModel_GenericIO_LLN0, "AnalogValuesRCB02", "simpleIO/GenericIO/LLN0.AnalogValuesRCB", false, "AnalogValues", 1, 27, 159, 50, 5000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_GenericIO_LLN0_report7};
ReportControlBlock iedModel_GenericIO_LLN0_report7 = {&iedModel_GenericIO_LLN0, "AnalogValuesRCB03", "simpleIO/GenericIO/LLN0.AnalogValuesRCB", false, "AnalogValues", 1, 27, 159, 50, 5000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_GenericIO_LLN0_report8};
ReportControlBlock iedModel_GenericIO_LLN0_report8 = {&iedModel_GenericIO_LLN0, "EventsBRCB01", "simpleIO/GenericIO/LLN0.EventsBRCB", true, "EventsBuffered", 1, 19, 255, 0, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report0};
ReportControlBlock iedModel_PROT_LLN0_report0 = {&iedModel_PROT_LLN0, "TripBRCB01", "simpleIO/PROT/LLN0.TripBRCB", true, "TripData", 1, 19, 255, 0, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report1};
ReportControlBlock iedModel_PROT_LLN0_report1 = {&iedModel_PROT_LLN0, "TripBRCB02", "simpleIO/PROT/LLN0.TripBRCB", true, "TripData", 1, 19, 255, 0, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report2};
ReportControlBlock iedModel_PROT_LLN0_report2 = {&iedModel_PROT_LLN0, "ProtStatusRCB01", "simpleIO/PROT/LLN0.ProtStatusRCB", false, "ProtStatus", 1, 19, 143, 0, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report3};
ReportControlBlock iedModel_PROT_LLN0_report3 = {&iedModel_PROT_LLN0, "ProtStatusRCB02", "simpleIO/PROT/LLN0.ProtStatusRCB", false, "ProtStatus", 1, 19, 143, 0, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report4};
ReportControlBlock iedModel_PROT_LLN0_report4 = {&iedModel_PROT_LLN0, "ProtStatusRCB03", "simpleIO/PROT/LLN0.ProtStatusRCB", false, "ProtStatus", 1, 19, 143, 0, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report5};
ReportControlBlock iedModel_PROT_LLN0_report5 = {&iedModel_PROT_LLN0, "ProtStatusRCB04", "simpleIO/PROT/LLN0.ProtStatusRCB", false, "ProtStatus", 1, 19, 143, 0, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report6};
ReportControlBlock iedModel_PROT_LLN0_report6 = {&iedModel_PROT_LLN0, "ProtStatusRCB05", "simpleIO/PROT/LLN0.ProtStatusRCB", false, "ProtStatus", 1, 19, 143, 0, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MEAS_LLN0_report0};
ReportControlBlock iedModel_MEAS_LLN0_report0 = {&iedModel_MEAS_LLN0, "MeasRCB01", "simpleIO/MEAS/LLN0.MeasRCB", false, "MeasData", 1, 26, 143, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MEAS_LLN0_report1};
ReportControlBlock iedModel_MEAS_LLN0_report1 = {&iedModel_MEAS_LLN0, "MeasRCB02", "simpleIO/MEAS/LLN0.MeasRCB", false, "MeasData", 1, 26, 143, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MEAS_LLN0_report2};
ReportControlBlock iedModel_MEAS_LLN0_report2 = {&iedModel_MEAS_LLN0, "MeasRCB03", "simpleIO/MEAS/LLN0.MeasRCB", false, "MeasData", 1, 26, 143, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MEAS_LLN0_report3};
ReportControlBlock iedModel_MEAS_LLN0_report3 = {&iedModel_MEAS_LLN0, "MeasRCB04", "simpleIO/MEAS/LLN0.MeasRCB", false, "MeasData", 1, 26, 143, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MEAS_LLN0_report4};
ReportControlBlock iedModel_MEAS_LLN0_report4 = {&iedModel_MEAS_LLN0, "MeasRCB05", "simpleIO/MEAS/LLN0.MeasRCB", false, "MeasData", 1, 26, 143, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MEAS_LLN0_report5};
ReportControlBlock iedModel_MEAS_LLN0_report5 = {&iedModel_MEAS_LLN0, "SeqRCB01", "simpleIO/MEAS/LLN0.SeqRCB", false, "SeqData", 1, 27, 143, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MEAS_LLN0_report6};
ReportControlBlock iedModel_MEAS_LLN0_report6 = {&iedModel_MEAS_LLN0, "SeqRCB02", "simpleIO/MEAS/LLN0.SeqRCB", false, "SeqData", 1, 27, 143, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MEAS_LLN0_report7};
ReportControlBlock iedModel_MEAS_LLN0_report7 = {&iedModel_MEAS_LLN0, "SeqRCB03", "simpleIO/MEAS/LLN0.SeqRCB", false, "SeqData", 1, 27, 143, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_CONTROL_LLN0_report0};
ReportControlBlock iedModel_CONTROL_LLN0_report0 = {&iedModel_CONTROL_LLN0, "SwitchRCB01", "simpleIO/CONTROL/LLN0.SwitchRCB", true, "SwitchStatus", 1, 19, 255, 0, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_CONTROL_LLN0_report1};
ReportControlBlock iedModel_CONTROL_LLN0_report1 = {&iedModel_CONTROL_LLN0, "SwitchRCB02", "simpleIO/CONTROL/LLN0.SwitchRCB", true, "SwitchStatus", 1, 19, 255, 0, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, NULL};

extern SVControlBlock iedModel_MEAS_LLN0_smv0;
SVControlBlock iedModel_MEAS_LLN0_smv0 = {&iedModel_MEAS_LLN0, "msvcbCurrent", "simpleIO/MEAS/LLN0.msvcbCurrent", "MeasData", 14, 0, 80, 1, NULL, false, 1, NULL};

extern GSEControlBlock iedModel_GenericIO_LLN0_gse0;
extern GSEControlBlock iedModel_GenericIO_LLN0_gse1;
extern GSEControlBlock iedModel_PROT_LLN0_gse0;

extern SettingGroupControlBlock iedModel_GenericIO_LLN0_sgcb;
extern SettingGroupControlBlock iedModel_PROT_LLN0_sgcb;

SettingGroupControlBlock iedModel_GenericIO_LLN0_sgcb = {&iedModel_GenericIO_LLN0, 1, 8, 0, false, 0, 0, &iedModel_PROT_LLN0_sgcb};

SettingGroupControlBlock iedModel_PROT_LLN0_sgcb = {&iedModel_PROT_LLN0, 1, 4, 0, false, 0, 0, NULL};

extern LogControlBlock iedModel_GenericIO_LLN0_lcb0;
LogControlBlock iedModel_GenericIO_LLN0_lcb0 = {&iedModel_GenericIO_LLN0, "EventsLog", "EventsBuffered", "GenericIO/LLN0$GenericIOLog", 3, 0, true, true, NULL};



IedModel iedModel = {
    "simpleIO",
    &iedModel_GenericIO,
    &iedModelds_GenericIO_LLN0_Events,
    &iedModel_GenericIO_LLN0_report0,
    &iedModel_GenericIO_LLN0_gse0,
    &iedModel_MEAS_LLN0_smv0,
    &iedModel_GenericIO_LLN0_sgcb,
    &iedModel_GenericIO_LLN0_lcb0,
    NULL,
    initializeValues
};

static void
initializeValues()
{

iedModel_GenericIO_LLN0_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_GenericIO_LLN0_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_GenericIO_LLN0_Health_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_GenericIO_LLN0_NamPlt_vendor.mmsValue = MmsValue_newVisibleString("OpenIEC");

iedModel_GenericIO_LLN0_NamPlt_swRev.mmsValue = MmsValue_newVisibleString("2.0.0");

iedModel_GenericIO_LLN0_NamPlt_d.mmsValue = MmsValue_newVisibleString("Generic IO Logical Node Zero");

iedModel_GenericIO_LLN0_NamPlt_configRev.mmsValue = MmsValue_newVisibleString("2");

iedModel_GenericIO_LLN0_NamPlt_ldNs.mmsValue = MmsValue_newVisibleString("IEC 61850-7-4:2010");

iedModel_GenericIO_LPHD1_PhyNam_vendor.mmsValue = MmsValue_newVisibleString("OpenIEC");

iedModel_GenericIO_LPHD1_PhyHealth_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_GenericIO_GGIO1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_GenericIO_GGIO1_AnIn1_d.mmsValue = MmsValue_newVisibleString("Analog Input 1");

iedModel_GenericIO_GGIO1_AnIn2_d.mmsValue = MmsValue_newVisibleString("Analog Input 2");

iedModel_GenericIO_GGIO1_AnIn3_d.mmsValue = MmsValue_newVisibleString("Analog Input 3");

iedModel_GenericIO_GGIO1_AnIn4_d.mmsValue = MmsValue_newVisibleString("Analog Input 4");

iedModel_GenericIO_GGIO1_SPCSO1_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_GenericIO_GGIO1_SPCSO1_d.mmsValue = MmsValue_newVisibleString("Digital Output 1");

iedModel_GenericIO_GGIO1_SPCSO2_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_GenericIO_GGIO1_SPCSO2_d.mmsValue = MmsValue_newVisibleString("Digital Output 2");

iedModel_GenericIO_GGIO1_SPCSO3_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_GenericIO_GGIO1_SPCSO3_d.mmsValue = MmsValue_newVisibleString("Digital Output 3");

iedModel_GenericIO_GGIO1_SPCSO4_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_GenericIO_GGIO1_SPCSO4_d.mmsValue = MmsValue_newVisibleString("Digital Output 4 (enhanced)");

iedModel_PROT_LLN0_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_PROT_LLN0_NamPlt_vendor.mmsValue = MmsValue_newVisibleString("OpenIEC");

iedModel_PROT_LLN0_NamPlt_swRev.mmsValue = MmsValue_newVisibleString("2.0.0");

iedModel_PROT_LLN0_NamPlt_d.mmsValue = MmsValue_newVisibleString("Protection LDevice LN0");

iedModel_PROT_LLN0_NamPlt_configRev.mmsValue = MmsValue_newVisibleString("2");

iedModel_PROT_LLN0_NamPlt_ldNs.mmsValue = MmsValue_newVisibleString("IEC 61850-7-4:2010");

iedModel_PROT_PDIS1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_PROT_PDIS1_Op_d.mmsValue = MmsValue_newVisibleString("Zone 1 Distance Protection Operate");

iedModel_PROT_PDIS1_Str_d.mmsValue = MmsValue_newVisibleString("Zone 1 Distance Protection Start");

iedModel_PROT_PTRC1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_PROT_PTRC1_Tr_d.mmsValue = MmsValue_newVisibleString("Trip command from PTRC");

iedModel_PROT_RREC1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_PROT_RREC1_Op_d.mmsValue = MmsValue_newVisibleString("Reclosure operate");

iedModel_PROT_RREC1_AutoRecSt_d.mmsValue = MmsValue_newVisibleString("Auto-reclose state");

iedModel_PROT_PSCH1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_PROT_PSCH1_SchNum_d.mmsValue = MmsValue_newVisibleString("Active scheme number");

iedModel_MEAS_LLN0_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_MEAS_LLN0_NamPlt_vendor.mmsValue = MmsValue_newVisibleString("OpenIEC");

iedModel_MEAS_LLN0_NamPlt_swRev.mmsValue = MmsValue_newVisibleString("2.0.0");

iedModel_MEAS_LLN0_NamPlt_d.mmsValue = MmsValue_newVisibleString("Measurement LDevice LN0");

iedModel_MEAS_LLN0_NamPlt_configRev.mmsValue = MmsValue_newVisibleString("2");

iedModel_MEAS_LLN0_NamPlt_ldNs.mmsValue = MmsValue_newVisibleString("IEC 61850-7-4:2010");

iedModel_MEAS_MMXU1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_MEAS_MMXU1_TotW_d.mmsValue = MmsValue_newVisibleString("Total Active Power");

iedModel_MEAS_MMXU1_TotVAr_d.mmsValue = MmsValue_newVisibleString("Total Reactive Power");

iedModel_MEAS_MMXU1_TotVA_d.mmsValue = MmsValue_newVisibleString("Total Apparent Power");

iedModel_MEAS_MMXU1_Hz_d.mmsValue = MmsValue_newVisibleString("Frequency");

iedModel_MEAS_MMXU1_PhV_d.mmsValue = MmsValue_newVisibleString("Phase Voltages");

iedModel_MEAS_MMXU1_A_d.mmsValue = MmsValue_newVisibleString("Phase Currents");

iedModel_MEAS_MSQI1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_MEAS_MSQI1_SeqA_d.mmsValue = MmsValue_newVisibleString("Current sequence components");

iedModel_MEAS_MSQI1_SeqV_d.mmsValue = MmsValue_newVisibleString("Voltage sequence components");

iedModel_CONTROL_LLN0_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_CONTROL_LLN0_NamPlt_vendor.mmsValue = MmsValue_newVisibleString("OpenIEC");

iedModel_CONTROL_LLN0_NamPlt_swRev.mmsValue = MmsValue_newVisibleString("2.0.0");

iedModel_CONTROL_LLN0_NamPlt_d.mmsValue = MmsValue_newVisibleString("Control LDevice LN0");

iedModel_CONTROL_LLN0_NamPlt_configRev.mmsValue = MmsValue_newVisibleString("2");

iedModel_CONTROL_LLN0_NamPlt_ldNs.mmsValue = MmsValue_newVisibleString("IEC 61850-7-4:2010");

iedModel_CONTROL_XCBR1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_CONTROL_XCBR1_Pos_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(2);

iedModel_CONTROL_XCBR1_Pos_d.mmsValue = MmsValue_newVisibleString("Circuit Breaker Position");

iedModel_CONTROL_XCBR1_BlkOpn_d.mmsValue = MmsValue_newVisibleString("Block Opening Command");

iedModel_CONTROL_XCBR1_BlkCls_d.mmsValue = MmsValue_newVisibleString("Block Closing Command");

iedModel_CONTROL_CSWI1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_CONTROL_CSWI1_Pos_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_CONTROL_CSWI1_Pos_d.mmsValue = MmsValue_newVisibleString("Disconnector Position");

iedModel_CONTROL_RSYN1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_CONTROL_RSYN1_RsSyn_d.mmsValue = MmsValue_newVisibleString("Synchronism check result");
}
