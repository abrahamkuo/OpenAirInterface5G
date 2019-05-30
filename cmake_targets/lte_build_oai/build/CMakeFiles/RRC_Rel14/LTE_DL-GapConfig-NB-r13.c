/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_DL-GapConfig-NB-r13.h"

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
static asn_per_constraints_t asn_PER_type_LTE_dl_GapThreshold_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_dl_GapPeriodicity_r13_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_dl_GapDurationCoeff_r13_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_dl_GapThreshold_r13_value2enum_2[] = {
	{ 0,	3,	"n32" },
	{ 1,	3,	"n64" },
	{ 2,	4,	"n128" },
	{ 3,	4,	"n256" }
};
static const unsigned int asn_MAP_LTE_dl_GapThreshold_r13_enum2value_2[] = {
	2,	/* n128(2) */
	3,	/* n256(3) */
	0,	/* n32(0) */
	1	/* n64(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_dl_GapThreshold_r13_specs_2 = {
	asn_MAP_LTE_dl_GapThreshold_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_dl_GapThreshold_r13_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_dl_GapThreshold_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_dl_GapThreshold_r13_2 = {
	"dl-GapThreshold-r13",
	"dl-GapThreshold-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_dl_GapThreshold_r13_tags_2,
	sizeof(asn_DEF_LTE_dl_GapThreshold_r13_tags_2)
		/sizeof(asn_DEF_LTE_dl_GapThreshold_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_dl_GapThreshold_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_dl_GapThreshold_r13_tags_2)
		/sizeof(asn_DEF_LTE_dl_GapThreshold_r13_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_dl_GapThreshold_r13_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_dl_GapThreshold_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_dl_GapPeriodicity_r13_value2enum_7[] = {
	{ 0,	4,	"sf64" },
	{ 1,	5,	"sf128" },
	{ 2,	5,	"sf256" },
	{ 3,	5,	"sf512" }
};
static const unsigned int asn_MAP_LTE_dl_GapPeriodicity_r13_enum2value_7[] = {
	1,	/* sf128(1) */
	2,	/* sf256(2) */
	3,	/* sf512(3) */
	0	/* sf64(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_dl_GapPeriodicity_r13_specs_7 = {
	asn_MAP_LTE_dl_GapPeriodicity_r13_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_dl_GapPeriodicity_r13_enum2value_7,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_dl_GapPeriodicity_r13_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_dl_GapPeriodicity_r13_7 = {
	"dl-GapPeriodicity-r13",
	"dl-GapPeriodicity-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_dl_GapPeriodicity_r13_tags_7,
	sizeof(asn_DEF_LTE_dl_GapPeriodicity_r13_tags_7)
		/sizeof(asn_DEF_LTE_dl_GapPeriodicity_r13_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_dl_GapPeriodicity_r13_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_dl_GapPeriodicity_r13_tags_7)
		/sizeof(asn_DEF_LTE_dl_GapPeriodicity_r13_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_dl_GapPeriodicity_r13_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_dl_GapPeriodicity_r13_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_dl_GapDurationCoeff_r13_value2enum_12[] = {
	{ 0,	9,	"oneEighth" },
	{ 1,	9,	"oneFourth" },
	{ 2,	11,	"threeEighth" },
	{ 3,	7,	"oneHalf" }
};
static const unsigned int asn_MAP_LTE_dl_GapDurationCoeff_r13_enum2value_12[] = {
	0,	/* oneEighth(0) */
	1,	/* oneFourth(1) */
	3,	/* oneHalf(3) */
	2	/* threeEighth(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_dl_GapDurationCoeff_r13_specs_12 = {
	asn_MAP_LTE_dl_GapDurationCoeff_r13_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_dl_GapDurationCoeff_r13_enum2value_12,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_dl_GapDurationCoeff_r13_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_dl_GapDurationCoeff_r13_12 = {
	"dl-GapDurationCoeff-r13",
	"dl-GapDurationCoeff-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_dl_GapDurationCoeff_r13_tags_12,
	sizeof(asn_DEF_LTE_dl_GapDurationCoeff_r13_tags_12)
		/sizeof(asn_DEF_LTE_dl_GapDurationCoeff_r13_tags_12[0]) - 1, /* 1 */
	asn_DEF_LTE_dl_GapDurationCoeff_r13_tags_12,	/* Same as above */
	sizeof(asn_DEF_LTE_dl_GapDurationCoeff_r13_tags_12)
		/sizeof(asn_DEF_LTE_dl_GapDurationCoeff_r13_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_dl_GapDurationCoeff_r13_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_dl_GapDurationCoeff_r13_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_DL_GapConfig_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_DL_GapConfig_NB_r13, dl_GapThreshold_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_dl_GapThreshold_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-GapThreshold-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_DL_GapConfig_NB_r13, dl_GapPeriodicity_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_dl_GapPeriodicity_r13_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-GapPeriodicity-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_DL_GapConfig_NB_r13, dl_GapDurationCoeff_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_dl_GapDurationCoeff_r13_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-GapDurationCoeff-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_DL_GapConfig_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_DL_GapConfig_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-GapThreshold-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-GapPeriodicity-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* dl-GapDurationCoeff-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_DL_GapConfig_NB_r13_specs_1 = {
	sizeof(struct LTE_DL_GapConfig_NB_r13),
	offsetof(struct LTE_DL_GapConfig_NB_r13, _asn_ctx),
	asn_MAP_LTE_DL_GapConfig_NB_r13_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_DL_GapConfig_NB_r13 = {
	"DL-GapConfig-NB-r13",
	"DL-GapConfig-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_DL_GapConfig_NB_r13_tags_1,
	sizeof(asn_DEF_LTE_DL_GapConfig_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_DL_GapConfig_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_DL_GapConfig_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_DL_GapConfig_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_DL_GapConfig_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_DL_GapConfig_NB_r13_1,
	3,	/* Elements count */
	&asn_SPC_LTE_DL_GapConfig_NB_r13_specs_1	/* Additional specs */
};

