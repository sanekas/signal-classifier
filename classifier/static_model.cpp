/*
 * static_model.c
 *
 * automatically generated from mhai_array.icd
 */
#include "headers/static_model.h"

static void initializeValues();



LogicalDevice iedModel_ComplexArray = {
    LogicalDeviceModelType,
    "ComplexArray",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_ComplexArray_LLN0
};

LogicalNode iedModel_ComplexArray_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_ComplexArray,
    (ModelNode*) &iedModel_ComplexArray_LPHD1,
    (ModelNode*) &iedModel_ComplexArray_LLN0_Mod,
};

DataObject iedModel_ComplexArray_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_ComplexArray_LLN0,
    (ModelNode*) &iedModel_ComplexArray_LLN0_Beh,
    (ModelNode*) &iedModel_ComplexArray_LLN0_Mod_stVal,
    0
};

DataAttribute iedModel_ComplexArray_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_ComplexArray_LLN0_Mod,
    (ModelNode*) &iedModel_ComplexArray_LLN0_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_ComplexArray_LLN0_Mod,
    (ModelNode*) &iedModel_ComplexArray_LLN0_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_ComplexArray_LLN0_Mod,
    (ModelNode*) &iedModel_ComplexArray_LLN0_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_ComplexArray_LLN0_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_ComplexArray_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_ComplexArray_LLN0,
    (ModelNode*) &iedModel_ComplexArray_LLN0_Health,
    (ModelNode*) &iedModel_ComplexArray_LLN0_Beh_stVal,
    0
};

DataAttribute iedModel_ComplexArray_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_ComplexArray_LLN0_Beh,
    (ModelNode*) &iedModel_ComplexArray_LLN0_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_ComplexArray_LLN0_Beh,
    (ModelNode*) &iedModel_ComplexArray_LLN0_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_ComplexArray_LLN0_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_ComplexArray_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_ComplexArray_LLN0,
    (ModelNode*) &iedModel_ComplexArray_LLN0_NamPlt,
    (ModelNode*) &iedModel_ComplexArray_LLN0_Health_stVal,
    0
};

DataAttribute iedModel_ComplexArray_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_ComplexArray_LLN0_Health,
    (ModelNode*) &iedModel_ComplexArray_LLN0_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_ComplexArray_LLN0_Health,
    (ModelNode*) &iedModel_ComplexArray_LLN0_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_ComplexArray_LLN0_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_ComplexArray_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_ComplexArray_LLN0,
    NULL,
    (ModelNode*) &iedModel_ComplexArray_LLN0_NamPlt_vendor,
    0
};

DataAttribute iedModel_ComplexArray_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_ComplexArray_LLN0_NamPlt,
    (ModelNode*) &iedModel_ComplexArray_LLN0_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_ComplexArray_LLN0_NamPlt,
    (ModelNode*) &iedModel_ComplexArray_LLN0_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_ComplexArray_LLN0_NamPlt,
    (ModelNode*) &iedModel_ComplexArray_LLN0_NamPlt_configRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_ComplexArray_LLN0_NamPlt,
    (ModelNode*) &iedModel_ComplexArray_LLN0_NamPlt_ldNs,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_LLN0_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_ComplexArray_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_ComplexArray_LPHD1 = {
    LogicalNodeModelType,
    "LPHD1",
    (ModelNode*) &iedModel_ComplexArray,
    (ModelNode*) &iedModel_ComplexArray_GGIO1,
    (ModelNode*) &iedModel_ComplexArray_LPHD1_PhyNam,
};

DataObject iedModel_ComplexArray_LPHD1_PhyNam = {
    DataObjectModelType,
    "PhyNam",
    (ModelNode*) &iedModel_ComplexArray_LPHD1,
    (ModelNode*) &iedModel_ComplexArray_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_ComplexArray_LPHD1_PhyNam_vendor,
    0
};

DataAttribute iedModel_ComplexArray_LPHD1_PhyNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_ComplexArray_LPHD1_PhyNam,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_ComplexArray_LPHD1_PhyHealth = {
    DataObjectModelType,
    "PhyHealth",
    (ModelNode*) &iedModel_ComplexArray_LPHD1,
    (ModelNode*) &iedModel_ComplexArray_LPHD1_Proxy,
    (ModelNode*) &iedModel_ComplexArray_LPHD1_PhyHealth_stVal,
    0
};

DataAttribute iedModel_ComplexArray_LPHD1_PhyHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_ComplexArray_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_ComplexArray_LPHD1_PhyHealth_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_LPHD1_PhyHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_ComplexArray_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_ComplexArray_LPHD1_PhyHealth_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_LPHD1_PhyHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_ComplexArray_LPHD1_PhyHealth,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_ComplexArray_LPHD1_Proxy = {
    DataObjectModelType,
    "Proxy",
    (ModelNode*) &iedModel_ComplexArray_LPHD1,
    NULL,
    (ModelNode*) &iedModel_ComplexArray_LPHD1_Proxy_stVal,
    0
};

DataAttribute iedModel_ComplexArray_LPHD1_Proxy_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_ComplexArray_LPHD1_Proxy,
    (ModelNode*) &iedModel_ComplexArray_LPHD1_Proxy_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_LPHD1_Proxy_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_ComplexArray_LPHD1_Proxy,
    (ModelNode*) &iedModel_ComplexArray_LPHD1_Proxy_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_LPHD1_Proxy_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_ComplexArray_LPHD1_Proxy,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_ComplexArray_GGIO1 = {
    LogicalNodeModelType,
    "GGIO1",
    (ModelNode*) &iedModel_ComplexArray,
    (ModelNode*) &iedModel_ComplexArray_MHAI1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Mod,
};

DataObject iedModel_ComplexArray_GGIO1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_ComplexArray_GGIO1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Beh,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Mod_stVal,
    0
};

DataAttribute iedModel_ComplexArray_GGIO1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Mod,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Mod,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Mod,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_ComplexArray_GGIO1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_ComplexArray_GGIO1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Health,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Beh_stVal,
    0
};

DataAttribute iedModel_ComplexArray_GGIO1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Beh,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Beh,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_ComplexArray_GGIO1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_ComplexArray_GGIO1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_NamPlt,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Health_stVal,
    0
};

DataAttribute iedModel_ComplexArray_GGIO1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Health,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Health,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_ComplexArray_GGIO1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_ComplexArray_GGIO1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_NamPlt_vendor,
    0
};

DataAttribute iedModel_ComplexArray_GGIO1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_NamPlt,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_NamPlt,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_NamPlt,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_NamPlt_dU,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_NamPlt_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_ComplexArray_GGIO1_AnIn1 = {
    DataObjectModelType,
    "AnIn1",
    (ModelNode*) &iedModel_ComplexArray_GGIO1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn2,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn1_mag,
    0
};

DataAttribute iedModel_ComplexArray_GGIO1_AnIn1_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn1_q,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn1_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_AnIn1_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn1_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_AnIn1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn1_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_AnIn1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn1,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_ComplexArray_GGIO1_AnIn2 = {
    DataObjectModelType,
    "AnIn2",
    (ModelNode*) &iedModel_ComplexArray_GGIO1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn3,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn2_mag,
    0
};

DataAttribute iedModel_ComplexArray_GGIO1_AnIn2_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn2,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn2_q,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn2_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_AnIn2_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn2_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_AnIn2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn2,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn2_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_AnIn2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn2,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_ComplexArray_GGIO1_AnIn3 = {
    DataObjectModelType,
    "AnIn3",
    (ModelNode*) &iedModel_ComplexArray_GGIO1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn4,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn3_mag,
    0
};

DataAttribute iedModel_ComplexArray_GGIO1_AnIn3_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn3,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn3_q,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn3_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_AnIn3_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn3_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_AnIn3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn3,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn3_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_AnIn3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn3,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_ComplexArray_GGIO1_AnIn4 = {
    DataObjectModelType,
    "AnIn4",
    (ModelNode*) &iedModel_ComplexArray_GGIO1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn4_mag,
    0
};

DataAttribute iedModel_ComplexArray_GGIO1_AnIn4_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn4,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn4_q,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn4_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_AnIn4_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn4_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_AnIn4_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn4,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn4_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_AnIn4_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_AnIn4,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_ComplexArray_GGIO1_SPCSO1 = {
    DataObjectModelType,
    "SPCSO1",
    (ModelNode*) &iedModel_ComplexArray_GGIO1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_origin,
    0
};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO1_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_ctlNum,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_origin_orCat,
    0,
    IEC61850_FC_ST,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO1_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_origin,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_origin_orIdent,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO1_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_origin,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO1_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_stVal,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO1_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO1_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_Oper,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO1_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1,
    NULL,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_Oper_ctlVal,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO1_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_Oper,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_Oper_origin,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO1_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_Oper,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_Oper_ctlNum,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_Oper_origin_orCat,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO1_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_Oper_origin,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_Oper_origin_orIdent,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO1_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_Oper_origin,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO1_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_Oper,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_Oper_T,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO1_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_Oper,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_Oper_Test,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO1_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_Oper,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_Oper_Check,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO1_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO1_Oper,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataObject iedModel_ComplexArray_GGIO1_SPCSO2 = {
    DataObjectModelType,
    "SPCSO2",
    (ModelNode*) &iedModel_ComplexArray_GGIO1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2_stVal,
    0
};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO2_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2_Oper,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO2_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2_ctlModel,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2_Oper_ctlVal,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO2_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2_Oper,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2_Oper_origin,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO2_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2_Oper,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2_Oper_ctlNum,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2_Oper_origin_orCat,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO2_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2_Oper_origin,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2_Oper_origin_orIdent,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO2_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2_Oper_origin,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO2_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2_Oper,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2_Oper_T,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO2_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2_Oper,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2_Oper_Test,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO2_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2_Oper,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2_Oper_Check,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO2_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2_Oper,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO2_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2_t,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO2,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_ComplexArray_GGIO1_SPCSO3 = {
    DataObjectModelType,
    "SPCSO3",
    (ModelNode*) &iedModel_ComplexArray_GGIO1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3_stVal,
    0
};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO3_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3_Oper,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO3_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3_ctlModel,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3_Oper_ctlVal,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO3_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3_Oper,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3_Oper_origin,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO3_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3_Oper,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3_Oper_ctlNum,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3_Oper_origin_orCat,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO3_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3_Oper_origin,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3_Oper_origin_orIdent,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO3_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3_Oper_origin,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO3_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3_Oper,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3_Oper_T,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO3_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3_Oper,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3_Oper_Test,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO3_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3_Oper,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3_Oper_Check,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO3_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3_Oper,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO3_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3_t,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO3,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_ComplexArray_GGIO1_SPCSO4 = {
    DataObjectModelType,
    "SPCSO4",
    (ModelNode*) &iedModel_ComplexArray_GGIO1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4_stVal,
    0
};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO4_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO4_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4_Oper,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO4_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4_ctlModel,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4_Oper_ctlVal,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO4_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4_Oper,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4_Oper_origin,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO4_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4_Oper,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4_Oper_ctlNum,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4_Oper_origin_orCat,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO4_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4_Oper_origin,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4_Oper_origin_orIdent,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO4_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4_Oper_origin,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO4_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4_Oper,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4_Oper_T,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO4_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4_Oper,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4_Oper_Test,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO4_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4_Oper,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4_Oper_Check,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO4_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4_Oper,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO4_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4_t,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_SPCSO4_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_SPCSO4,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_ComplexArray_GGIO1_Ind1 = {
    DataObjectModelType,
    "Ind1",
    (ModelNode*) &iedModel_ComplexArray_GGIO1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind2,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind1_stVal,
    0
};

DataAttribute iedModel_ComplexArray_GGIO1_Ind1_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind1_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_Ind1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind1_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_Ind1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind1,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_ComplexArray_GGIO1_Ind2 = {
    DataObjectModelType,
    "Ind2",
    (ModelNode*) &iedModel_ComplexArray_GGIO1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind3,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind2_stVal,
    0
};

DataAttribute iedModel_ComplexArray_GGIO1_Ind2_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind2,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind2_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_Ind2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind2,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind2_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_Ind2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind2,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_ComplexArray_GGIO1_Ind3 = {
    DataObjectModelType,
    "Ind3",
    (ModelNode*) &iedModel_ComplexArray_GGIO1,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind4,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind3_stVal,
    0
};

DataAttribute iedModel_ComplexArray_GGIO1_Ind3_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind3,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind3_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_Ind3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind3,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind3_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_Ind3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind3,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_ComplexArray_GGIO1_Ind4 = {
    DataObjectModelType,
    "Ind4",
    (ModelNode*) &iedModel_ComplexArray_GGIO1,
    NULL,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind4_stVal,
    0
};

DataAttribute iedModel_ComplexArray_GGIO1_Ind4_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind4,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind4_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_Ind4_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind4,
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind4_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_GGIO1_Ind4_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_ComplexArray_GGIO1_Ind4,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_ComplexArray_MHAI1 = {
    LogicalNodeModelType,
    "MHAI1",
    (ModelNode*) &iedModel_ComplexArray,
    NULL,
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA,
};

DataObject iedModel_ComplexArray_MHAI1_HA = {
    DataObjectModelType,
    "HA",
    (ModelNode*) &iedModel_ComplexArray_MHAI1,
    NULL,
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA_phsAHar,
    0
};

DataObject iedModel_ComplexArray_MHAI1_HA_phsAHar = {
    DataObjectModelType,
    "phsAHar",
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA,
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA_numHar,
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA_phsAHar_cVal,
    16
};

DataAttribute iedModel_ComplexArray_MHAI1_HA_phsAHar_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA_phsAHar,
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA_phsAHar_q,
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA_phsAHar_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_MHAI1_HA_phsAHar_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA_phsAHar_cVal,
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA_phsAHar_cVal_ang,
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA_phsAHar_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_MHAI1_HA_phsAHar_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA_phsAHar_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_MHAI1_HA_phsAHar_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA_phsAHar_cVal,
    NULL,
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA_phsAHar_cVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_MHAI1_HA_phsAHar_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA_phsAHar_cVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_MHAI1_HA_phsAHar_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA_phsAHar,
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA_phsAHar_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_MHAI1_HA_phsAHar_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA_phsAHar,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_MHAI1_HA_numHar = {
    DataAttributeModelType,
    "numHar",
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA,
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA_numCyc,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT16U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_MHAI1_HA_numCyc = {
    DataAttributeModelType,
    "numCyc",
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA,
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA_evalTm,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT16U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_MHAI1_HA_evalTm = {
    DataAttributeModelType,
    "evalTm",
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA,
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA_frequency,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT16U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_ComplexArray_MHAI1_HA_frequency = {
    DataAttributeModelType,
    "frequency",
    (ModelNode*) &iedModel_ComplexArray_MHAI1_HA,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};









IedModel iedModel = {
    "test",
    &iedModel_ComplexArray,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    initializeValues
};

static void
initializeValues()
{

iedModel_ComplexArray_LLN0_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_ComplexArray_LPHD1_PhyHealth_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_ComplexArray_GGIO1_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_ComplexArray_GGIO1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_ComplexArray_GGIO1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_ComplexArray_GGIO1_Health_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_ComplexArray_GGIO1_SPCSO1_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_ComplexArray_GGIO1_SPCSO2_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_ComplexArray_GGIO1_SPCSO3_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_ComplexArray_GGIO1_SPCSO4_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_ComplexArray_MHAI1_HA_numHar.mmsValue = MmsValue_newUnsignedFromUint32(16);
}
