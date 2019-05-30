/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_BarringPerACDC-Category-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_acdc_Category_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_ac_BarringFactor_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_ac_BarringTime_r13_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_acdc_Category_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (1..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_ac_BarringFactor_r13_value2enum_4[] = {
	{ 0,	3,	"p00" },
	{ 1,	3,	"p05" },
	{ 2,	3,	"p10" },
	{ 3,	3,	"p15" },
	{ 4,	3,	"p20" },
	{ 5,	3,	"p25" },
	{ 6,	3,	"p30" },
	{ 7,	3,	"p40" },
	{ 8,	3,	"p50" },
	{ 9,	3,	"p60" },
	{ 10,	3,	"p70" },
	{ 11,	3,	"p75" },
	{ 12,	3,	"p80" },
	{ 13,	3,	"p85" },
	{ 14,	3,	"p90" },
	{ 15,	3,	"p95" }
};
static const unsigned int asn_MAP_LTE_ac_BarringFactor_r13_enum2value_4[] = {
	0,	/* p00(0) */
	1,	/* p05(1) */
	2,	/* p10(2) */
	3,	/* p15(3) */
	4,	/* p20(4) */
	5,	/* p25(5) */
	6,	/* p30(6) */
	7,	/* p40(7) */
	8,	/* p50(8) */
	9,	/* p60(9) */
	10,	/* p70(10) */
	11,	/* p75(11) */
	12,	/* p80(12) */
	13,	/* p85(13) */
	14,	/* p90(14) */
	15	/* p95(15) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_ac_BarringFactor_r13_specs_4 = {
	asn_MAP_LTE_ac_BarringFactor_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_ac_BarringFactor_r13_enum2value_4,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_ac_BarringFactor_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ac_BarringFactor_r13_4 = {
	"ac-BarringFactor-r13",
	"ac-BarringFactor-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_ac_BarringFactor_r13_tags_4,
	sizeof(asn_DEF_LTE_ac_BarringFactor_r13_tags_4)
		/sizeof(asn_DEF_LTE_ac_BarringFactor_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_ac_BarringFactor_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_ac_BarringFactor_r13_tags_4)
		/sizeof(asn_DEF_LTE_ac_BarringFactor_r13_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_ac_BarringFactor_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_ac_BarringFactor_r13_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_ac_BarringTime_r13_value2enum_21[] = {
	{ 0,	2,	"s4" },
	{ 1,	2,	"s8" },
	{ 2,	3,	"s16" },
	{ 3,	3,	"s32" },
	{ 4,	3,	"s64" },
	{ 5,	4,	"s128" },
	{ 6,	4,	"s256" },
	{ 7,	4,	"s512" }
};
static const unsigned int asn_MAP_LTE_ac_BarringTime_r13_enum2value_21[] = {
	5,	/* s128(5) */
	2,	/* s16(2) */
	6,	/* s256(6) */
	3,	/* s32(3) */
	0,	/* s4(0) */
	7,	/* s512(7) */
	4,	/* s64(4) */
	1	/* s8(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_ac_BarringTime_r13_specs_21 = {
	asn_MAP_LTE_ac_BarringTime_r13_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_ac_BarringTime_r13_enum2value_21,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_ac_BarringTime_r13_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ac_BarringTime_r13_21 = {
	"ac-BarringTime-r13",
	"ac-BarringTime-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_ac_BarringTime_r13_tags_21,
	sizeof(asn_DEF_LTE_ac_BarringTime_r13_tags_21)
		/sizeof(asn_DEF_LTE_ac_BarringTime_r13_tags_21[0]) - 1, /* 1 */
	asn_DEF_LTE_ac_BarringTime_r13_tags_21,	/* Same as above */
	sizeof(asn_DEF_LTE_ac_BarringTime_r13_tags_21)
		/sizeof(asn_DEF_LTE_ac_BarringTime_r13_tags_21[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_ac_BarringTime_r13_constr_21, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_ac_BarringTime_r13_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_acdc_BarringConfig_r13_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_BarringPerACDC_Category_r13__acdc_BarringConfig_r13, ac_BarringFactor_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ac_BarringFactor_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ac-BarringFactor-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_BarringPerACDC_Category_r13__acdc_BarringConfig_r13, ac_BarringTime_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ac_BarringTime_r13_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ac-BarringTime-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_acdc_BarringConfig_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_acdc_BarringConfig_r13_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ac-BarringFactor-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ac-BarringTime-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_acdc_BarringConfig_r13_specs_3 = {
	sizeof(struct LTE_BarringPerACDC_Category_r13__acdc_BarringConfig_r13),
	offsetof(struct LTE_BarringPerACDC_Category_r13__acdc_BarringConfig_r13, _asn_ctx),
	asn_MAP_LTE_acdc_BarringConfig_r13_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_acdc_BarringConfig_r13_3 = {
	"acdc-BarringConfig-r13",
	"acdc-BarringConfig-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_acdc_BarringConfig_r13_tags_3,
	sizeof(asn_DEF_LTE_acdc_BarringConfig_r13_tags_3)
		/sizeof(asn_DEF_LTE_acdc_BarringConfig_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_acdc_BarringConfig_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_acdc_BarringConfig_r13_tags_3)
		/sizeof(asn_DEF_LTE_acdc_BarringConfig_r13_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_acdc_BarringConfig_r13_3,
	2,	/* Elements count */
	&asn_SPC_LTE_acdc_BarringConfig_r13_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_BarringPerACDC_Category_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_BarringPerACDC_Category_r13, acdc_Category_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_acdc_Category_r13_constr_2,  memb_LTE_acdc_Category_r13_constraint_1 },
		0, 0, /* No default value */
		"acdc-Category-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_BarringPerACDC_Category_r13, acdc_BarringConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_acdc_BarringConfig_r13_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"acdc-BarringConfig-r13"
		},
};
static const int asn_MAP_LTE_BarringPerACDC_Category_r13_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LTE_BarringPerACDC_Category_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_BarringPerACDC_Category_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* acdc-Category-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* acdc-BarringConfig-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_BarringPerACDC_Category_r13_specs_1 = {
	sizeof(struct LTE_BarringPerACDC_Category_r13),
	offsetof(struct LTE_BarringPerACDC_Category_r13, _asn_ctx),
	asn_MAP_LTE_BarringPerACDC_Category_r13_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_BarringPerACDC_Category_r13_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_BarringPerACDC_Category_r13 = {
	"BarringPerACDC-Category-r13",
	"BarringPerACDC-Category-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_BarringPerACDC_Category_r13_tags_1,
	sizeof(asn_DEF_LTE_BarringPerACDC_Category_r13_tags_1)
		/sizeof(asn_DEF_LTE_BarringPerACDC_Category_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_BarringPerACDC_Category_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_BarringPerACDC_Category_r13_tags_1)
		/sizeof(asn_DEF_LTE_BarringPerACDC_Category_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_BarringPerACDC_Category_r13_1,
	2,	/* Elements count */
	&asn_SPC_LTE_BarringPerACDC_Category_r13_specs_1	/* Additional specs */
};

