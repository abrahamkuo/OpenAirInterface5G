/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SL-Parameters-r12.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_commSimultaneousTx_r12_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_discScheduledResourceAlloc_r12_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_disc_UE_SelectedResourceAlloc_r12_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_disc_SLSS_r12_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_discSupportedProc_r12_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_commSimultaneousTx_r12_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_commSimultaneousTx_r12_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_commSimultaneousTx_r12_specs_2 = {
	asn_MAP_LTE_commSimultaneousTx_r12_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_commSimultaneousTx_r12_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_commSimultaneousTx_r12_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_commSimultaneousTx_r12_2 = {
	"commSimultaneousTx-r12",
	"commSimultaneousTx-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_commSimultaneousTx_r12_tags_2,
	sizeof(asn_DEF_LTE_commSimultaneousTx_r12_tags_2)
		/sizeof(asn_DEF_LTE_commSimultaneousTx_r12_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_commSimultaneousTx_r12_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_commSimultaneousTx_r12_tags_2)
		/sizeof(asn_DEF_LTE_commSimultaneousTx_r12_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_commSimultaneousTx_r12_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_commSimultaneousTx_r12_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_discScheduledResourceAlloc_r12_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_discScheduledResourceAlloc_r12_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_discScheduledResourceAlloc_r12_specs_6 = {
	asn_MAP_LTE_discScheduledResourceAlloc_r12_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_discScheduledResourceAlloc_r12_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_discScheduledResourceAlloc_r12_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_discScheduledResourceAlloc_r12_6 = {
	"discScheduledResourceAlloc-r12",
	"discScheduledResourceAlloc-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_discScheduledResourceAlloc_r12_tags_6,
	sizeof(asn_DEF_LTE_discScheduledResourceAlloc_r12_tags_6)
		/sizeof(asn_DEF_LTE_discScheduledResourceAlloc_r12_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_discScheduledResourceAlloc_r12_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_discScheduledResourceAlloc_r12_tags_6)
		/sizeof(asn_DEF_LTE_discScheduledResourceAlloc_r12_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_discScheduledResourceAlloc_r12_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_discScheduledResourceAlloc_r12_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_disc_UE_SelectedResourceAlloc_r12_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_disc_UE_SelectedResourceAlloc_r12_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_disc_UE_SelectedResourceAlloc_r12_specs_8 = {
	asn_MAP_LTE_disc_UE_SelectedResourceAlloc_r12_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_disc_UE_SelectedResourceAlloc_r12_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_disc_UE_SelectedResourceAlloc_r12_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_disc_UE_SelectedResourceAlloc_r12_8 = {
	"disc-UE-SelectedResourceAlloc-r12",
	"disc-UE-SelectedResourceAlloc-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_disc_UE_SelectedResourceAlloc_r12_tags_8,
	sizeof(asn_DEF_LTE_disc_UE_SelectedResourceAlloc_r12_tags_8)
		/sizeof(asn_DEF_LTE_disc_UE_SelectedResourceAlloc_r12_tags_8[0]) - 1, /* 1 */
	asn_DEF_LTE_disc_UE_SelectedResourceAlloc_r12_tags_8,	/* Same as above */
	sizeof(asn_DEF_LTE_disc_UE_SelectedResourceAlloc_r12_tags_8)
		/sizeof(asn_DEF_LTE_disc_UE_SelectedResourceAlloc_r12_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_disc_UE_SelectedResourceAlloc_r12_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_disc_UE_SelectedResourceAlloc_r12_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_disc_SLSS_r12_value2enum_10[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_disc_SLSS_r12_enum2value_10[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_disc_SLSS_r12_specs_10 = {
	asn_MAP_LTE_disc_SLSS_r12_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_disc_SLSS_r12_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_disc_SLSS_r12_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_disc_SLSS_r12_10 = {
	"disc-SLSS-r12",
	"disc-SLSS-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_disc_SLSS_r12_tags_10,
	sizeof(asn_DEF_LTE_disc_SLSS_r12_tags_10)
		/sizeof(asn_DEF_LTE_disc_SLSS_r12_tags_10[0]) - 1, /* 1 */
	asn_DEF_LTE_disc_SLSS_r12_tags_10,	/* Same as above */
	sizeof(asn_DEF_LTE_disc_SLSS_r12_tags_10)
		/sizeof(asn_DEF_LTE_disc_SLSS_r12_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_disc_SLSS_r12_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_disc_SLSS_r12_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_discSupportedProc_r12_value2enum_12[] = {
	{ 0,	3,	"n50" },
	{ 1,	4,	"n400" }
};
static const unsigned int asn_MAP_LTE_discSupportedProc_r12_enum2value_12[] = {
	1,	/* n400(1) */
	0	/* n50(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_discSupportedProc_r12_specs_12 = {
	asn_MAP_LTE_discSupportedProc_r12_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_discSupportedProc_r12_enum2value_12,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_discSupportedProc_r12_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_discSupportedProc_r12_12 = {
	"discSupportedProc-r12",
	"discSupportedProc-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_discSupportedProc_r12_tags_12,
	sizeof(asn_DEF_LTE_discSupportedProc_r12_tags_12)
		/sizeof(asn_DEF_LTE_discSupportedProc_r12_tags_12[0]) - 1, /* 1 */
	asn_DEF_LTE_discSupportedProc_r12_tags_12,	/* Same as above */
	sizeof(asn_DEF_LTE_discSupportedProc_r12_tags_12)
		/sizeof(asn_DEF_LTE_discSupportedProc_r12_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_discSupportedProc_r12_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_discSupportedProc_r12_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SL_Parameters_r12_1[] = {
	{ ATF_POINTER, 7, offsetof(struct LTE_SL_Parameters_r12, commSimultaneousTx_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_commSimultaneousTx_r12_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"commSimultaneousTx-r12"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_SL_Parameters_r12, commSupportedBands_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_FreqBandIndicatorListEUTRA_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"commSupportedBands-r12"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_SL_Parameters_r12, discSupportedBands_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SupportedBandInfoList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discSupportedBands-r12"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_SL_Parameters_r12, discScheduledResourceAlloc_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_discScheduledResourceAlloc_r12_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discScheduledResourceAlloc-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SL_Parameters_r12, disc_UE_SelectedResourceAlloc_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_disc_UE_SelectedResourceAlloc_r12_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"disc-UE-SelectedResourceAlloc-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SL_Parameters_r12, disc_SLSS_r12),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_disc_SLSS_r12_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"disc-SLSS-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_Parameters_r12, discSupportedProc_r12),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_discSupportedProc_r12_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discSupportedProc-r12"
		},
};
static const int asn_MAP_LTE_SL_Parameters_r12_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_LTE_SL_Parameters_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SL_Parameters_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* commSimultaneousTx-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* commSupportedBands-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* discSupportedBands-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* discScheduledResourceAlloc-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* disc-UE-SelectedResourceAlloc-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* disc-SLSS-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* discSupportedProc-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_Parameters_r12_specs_1 = {
	sizeof(struct LTE_SL_Parameters_r12),
	offsetof(struct LTE_SL_Parameters_r12, _asn_ctx),
	asn_MAP_LTE_SL_Parameters_r12_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_LTE_SL_Parameters_r12_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SL_Parameters_r12 = {
	"SL-Parameters-r12",
	"SL-Parameters-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SL_Parameters_r12_tags_1,
	sizeof(asn_DEF_LTE_SL_Parameters_r12_tags_1)
		/sizeof(asn_DEF_LTE_SL_Parameters_r12_tags_1[0]), /* 1 */
	asn_DEF_LTE_SL_Parameters_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SL_Parameters_r12_tags_1)
		/sizeof(asn_DEF_LTE_SL_Parameters_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SL_Parameters_r12_1,
	7,	/* Elements count */
	&asn_SPC_LTE_SL_Parameters_r12_specs_1	/* Additional specs */
};

