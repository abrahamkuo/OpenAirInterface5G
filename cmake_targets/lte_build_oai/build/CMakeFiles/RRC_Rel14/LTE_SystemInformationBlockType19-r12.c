/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SystemInformationBlockType19-r12.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_gapRequestsAllowedCommon_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_discConfig_r12_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType19_r12__discConfig_r12, discRxPool_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_DiscRxPoolList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discRxPool-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SystemInformationBlockType19_r12__discConfig_r12, discTxPoolCommon_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_DiscTxPoolList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTxPoolCommon-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType19_r12__discConfig_r12, discTxPowerInfo_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_DiscTxPowerInfoList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTxPowerInfo-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType19_r12__discConfig_r12, discSyncConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_SyncConfigList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discSyncConfig-r12"
		},
};
static const int asn_MAP_LTE_discConfig_r12_oms_2[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_discConfig_r12_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_discConfig_r12_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* discRxPool-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* discTxPoolCommon-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* discTxPowerInfo-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* discSyncConfig-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_discConfig_r12_specs_2 = {
	sizeof(struct LTE_SystemInformationBlockType19_r12__discConfig_r12),
	offsetof(struct LTE_SystemInformationBlockType19_r12__discConfig_r12, _asn_ctx),
	asn_MAP_LTE_discConfig_r12_tag2el_2,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_discConfig_r12_oms_2,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_discConfig_r12_2 = {
	"discConfig-r12",
	"discConfig-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_discConfig_r12_tags_2,
	sizeof(asn_DEF_LTE_discConfig_r12_tags_2)
		/sizeof(asn_DEF_LTE_discConfig_r12_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_discConfig_r12_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_discConfig_r12_tags_2)
		/sizeof(asn_DEF_LTE_discConfig_r12_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_discConfig_r12_2,
	4,	/* Elements count */
	&asn_SPC_LTE_discConfig_r12_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_gapRequestsAllowedCommon_value2enum_13[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_gapRequestsAllowedCommon_enum2value_13[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_gapRequestsAllowedCommon_specs_13 = {
	asn_MAP_LTE_gapRequestsAllowedCommon_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_gapRequestsAllowedCommon_enum2value_13,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_gapRequestsAllowedCommon_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_gapRequestsAllowedCommon_13 = {
	"gapRequestsAllowedCommon",
	"gapRequestsAllowedCommon",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_gapRequestsAllowedCommon_tags_13,
	sizeof(asn_DEF_LTE_gapRequestsAllowedCommon_tags_13)
		/sizeof(asn_DEF_LTE_gapRequestsAllowedCommon_tags_13[0]) - 1, /* 1 */
	asn_DEF_LTE_gapRequestsAllowedCommon_tags_13,	/* Same as above */
	sizeof(asn_DEF_LTE_gapRequestsAllowedCommon_tags_13)
		/sizeof(asn_DEF_LTE_gapRequestsAllowedCommon_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_gapRequestsAllowedCommon_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_gapRequestsAllowedCommon_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_discConfig_v1310_11[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType19_r12__ext1__discConfig_v1310, discInterFreqList_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_CarrierFreqInfoList_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discInterFreqList-v1310"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType19_r12__ext1__discConfig_v1310, gapRequestsAllowedCommon),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_gapRequestsAllowedCommon_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gapRequestsAllowedCommon"
		},
};
static const int asn_MAP_LTE_discConfig_v1310_oms_11[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_discConfig_v1310_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_discConfig_v1310_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* discInterFreqList-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* gapRequestsAllowedCommon */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_discConfig_v1310_specs_11 = {
	sizeof(struct LTE_SystemInformationBlockType19_r12__ext1__discConfig_v1310),
	offsetof(struct LTE_SystemInformationBlockType19_r12__ext1__discConfig_v1310, _asn_ctx),
	asn_MAP_LTE_discConfig_v1310_tag2el_11,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_discConfig_v1310_oms_11,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_discConfig_v1310_11 = {
	"discConfig-v1310",
	"discConfig-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_discConfig_v1310_tags_11,
	sizeof(asn_DEF_LTE_discConfig_v1310_tags_11)
		/sizeof(asn_DEF_LTE_discConfig_v1310_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_discConfig_v1310_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_discConfig_v1310_tags_11)
		/sizeof(asn_DEF_LTE_discConfig_v1310_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_discConfig_v1310_11,
	2,	/* Elements count */
	&asn_SPC_LTE_discConfig_v1310_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_discConfigRelay_r13_15[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType19_r12__ext1__discConfigRelay_r13, relayUE_Config_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_DiscConfigRelayUE_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"relayUE-Config-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType19_r12__ext1__discConfigRelay_r13, remoteUE_Config_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_DiscConfigRemoteUE_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"remoteUE-Config-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_discConfigRelay_r13_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_discConfigRelay_r13_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* relayUE-Config-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* remoteUE-Config-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_discConfigRelay_r13_specs_15 = {
	sizeof(struct LTE_SystemInformationBlockType19_r12__ext1__discConfigRelay_r13),
	offsetof(struct LTE_SystemInformationBlockType19_r12__ext1__discConfigRelay_r13, _asn_ctx),
	asn_MAP_LTE_discConfigRelay_r13_tag2el_15,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_discConfigRelay_r13_15 = {
	"discConfigRelay-r13",
	"discConfigRelay-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_discConfigRelay_r13_tags_15,
	sizeof(asn_DEF_LTE_discConfigRelay_r13_tags_15)
		/sizeof(asn_DEF_LTE_discConfigRelay_r13_tags_15[0]) - 1, /* 1 */
	asn_DEF_LTE_discConfigRelay_r13_tags_15,	/* Same as above */
	sizeof(asn_DEF_LTE_discConfigRelay_r13_tags_15)
		/sizeof(asn_DEF_LTE_discConfigRelay_r13_tags_15[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_discConfigRelay_r13_15,
	2,	/* Elements count */
	&asn_SPC_LTE_discConfigRelay_r13_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_discConfigPS_13_18[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType19_r12__ext1__discConfigPS_13, discRxPoolPS_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_DiscRxPoolList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discRxPoolPS-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType19_r12__ext1__discConfigPS_13, discTxPoolPS_Common_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_DiscTxPoolList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTxPoolPS-Common-r13"
		},
};
static const int asn_MAP_LTE_discConfigPS_13_oms_18[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LTE_discConfigPS_13_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_discConfigPS_13_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* discRxPoolPS-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* discTxPoolPS-Common-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_discConfigPS_13_specs_18 = {
	sizeof(struct LTE_SystemInformationBlockType19_r12__ext1__discConfigPS_13),
	offsetof(struct LTE_SystemInformationBlockType19_r12__ext1__discConfigPS_13, _asn_ctx),
	asn_MAP_LTE_discConfigPS_13_tag2el_18,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_discConfigPS_13_oms_18,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_discConfigPS_13_18 = {
	"discConfigPS-13",
	"discConfigPS-13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_discConfigPS_13_tags_18,
	sizeof(asn_DEF_LTE_discConfigPS_13_tags_18)
		/sizeof(asn_DEF_LTE_discConfigPS_13_tags_18[0]) - 1, /* 1 */
	asn_DEF_LTE_discConfigPS_13_tags_18,	/* Same as above */
	sizeof(asn_DEF_LTE_discConfigPS_13_tags_18)
		/sizeof(asn_DEF_LTE_discConfigPS_13_tags_18[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_discConfigPS_13_18,
	2,	/* Elements count */
	&asn_SPC_LTE_discConfigPS_13_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_10[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_SystemInformationBlockType19_r12__ext1, discConfig_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_discConfig_v1310_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discConfig-v1310"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType19_r12__ext1, discConfigRelay_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_discConfigRelay_r13_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discConfigRelay-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType19_r12__ext1, discConfigPS_13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_discConfigPS_13_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discConfigPS-13"
		},
};
static const int asn_MAP_LTE_ext1_oms_10[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* discConfig-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* discConfigRelay-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* discConfigPS-13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_10 = {
	sizeof(struct LTE_SystemInformationBlockType19_r12__ext1),
	offsetof(struct LTE_SystemInformationBlockType19_r12__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_10,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_10,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_10 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_10,
	sizeof(asn_DEF_LTE_ext1_tags_10)
		/sizeof(asn_DEF_LTE_ext1_tags_10[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_10,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_10)
		/sizeof(asn_DEF_LTE_ext1_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_10,
	3,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType19_r12_1[] = {
	{ ATF_POINTER, 4, offsetof(struct LTE_SystemInformationBlockType19_r12, discConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_discConfig_r12_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discConfig-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SystemInformationBlockType19_r12, discInterFreqList_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_CarrierFreqInfoList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discInterFreqList-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType19_r12, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType19_r12, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_LTE_ext1_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_LTE_SystemInformationBlockType19_r12_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_SystemInformationBlockType19_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SystemInformationBlockType19_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* discConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* discInterFreqList-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType19_r12_specs_1 = {
	sizeof(struct LTE_SystemInformationBlockType19_r12),
	offsetof(struct LTE_SystemInformationBlockType19_r12, _asn_ctx),
	asn_MAP_LTE_SystemInformationBlockType19_r12_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_SystemInformationBlockType19_r12_oms_1,	/* Optional members */
	3, 1,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType19_r12 = {
	"SystemInformationBlockType19-r12",
	"SystemInformationBlockType19-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SystemInformationBlockType19_r12_tags_1,
	sizeof(asn_DEF_LTE_SystemInformationBlockType19_r12_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType19_r12_tags_1[0]), /* 1 */
	asn_DEF_LTE_SystemInformationBlockType19_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SystemInformationBlockType19_r12_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType19_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SystemInformationBlockType19_r12_1,
	4,	/* Elements count */
	&asn_SPC_LTE_SystemInformationBlockType19_r12_specs_1	/* Additional specs */
};

