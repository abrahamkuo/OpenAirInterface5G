/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_UE-RadioPagingInfo-r12.h"

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
static int
memb_LTE_ue_Category_v1250_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value == 0)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_ue_CategoryDL_v1310_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_ce_ModeA_r13_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_ce_ModeB_r13_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_ue_Category_v1250_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_ue_CategoryDL_v1310_value2enum_5[] = {
	{ 0,	2,	"m1" }
};
static const unsigned int asn_MAP_LTE_ue_CategoryDL_v1310_enum2value_5[] = {
	0	/* m1(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_ue_CategoryDL_v1310_specs_5 = {
	asn_MAP_LTE_ue_CategoryDL_v1310_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_ue_CategoryDL_v1310_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_ue_CategoryDL_v1310_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ue_CategoryDL_v1310_5 = {
	"ue-CategoryDL-v1310",
	"ue-CategoryDL-v1310",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_ue_CategoryDL_v1310_tags_5,
	sizeof(asn_DEF_LTE_ue_CategoryDL_v1310_tags_5)
		/sizeof(asn_DEF_LTE_ue_CategoryDL_v1310_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_ue_CategoryDL_v1310_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_ue_CategoryDL_v1310_tags_5)
		/sizeof(asn_DEF_LTE_ue_CategoryDL_v1310_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_ue_CategoryDL_v1310_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_ue_CategoryDL_v1310_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_ce_ModeA_r13_value2enum_7[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_ce_ModeA_r13_enum2value_7[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_ce_ModeA_r13_specs_7 = {
	asn_MAP_LTE_ce_ModeA_r13_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_ce_ModeA_r13_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_ce_ModeA_r13_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ce_ModeA_r13_7 = {
	"ce-ModeA-r13",
	"ce-ModeA-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_ce_ModeA_r13_tags_7,
	sizeof(asn_DEF_LTE_ce_ModeA_r13_tags_7)
		/sizeof(asn_DEF_LTE_ce_ModeA_r13_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_ce_ModeA_r13_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_ce_ModeA_r13_tags_7)
		/sizeof(asn_DEF_LTE_ce_ModeA_r13_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_ce_ModeA_r13_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_ce_ModeA_r13_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_ce_ModeB_r13_value2enum_9[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_ce_ModeB_r13_enum2value_9[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_ce_ModeB_r13_specs_9 = {
	asn_MAP_LTE_ce_ModeB_r13_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_ce_ModeB_r13_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_ce_ModeB_r13_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ce_ModeB_r13_9 = {
	"ce-ModeB-r13",
	"ce-ModeB-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_ce_ModeB_r13_tags_9,
	sizeof(asn_DEF_LTE_ce_ModeB_r13_tags_9)
		/sizeof(asn_DEF_LTE_ce_ModeB_r13_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_ce_ModeB_r13_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_ce_ModeB_r13_tags_9)
		/sizeof(asn_DEF_LTE_ce_ModeB_r13_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_ce_ModeB_r13_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_ce_ModeB_r13_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_4[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_UE_RadioPagingInfo_r12__ext1, ue_CategoryDL_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ue_CategoryDL_v1310_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-CategoryDL-v1310"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_UE_RadioPagingInfo_r12__ext1, ce_ModeA_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ce_ModeA_r13_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ce-ModeA-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_UE_RadioPagingInfo_r12__ext1, ce_ModeB_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ce_ModeB_r13_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ce-ModeB-r13"
		},
};
static const int asn_MAP_LTE_ext1_oms_4[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-CategoryDL-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ce-ModeA-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ce-ModeB-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_4 = {
	sizeof(struct LTE_UE_RadioPagingInfo_r12__ext1),
	offsetof(struct LTE_UE_RadioPagingInfo_r12__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_4,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_4,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_4 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_4,
	sizeof(asn_DEF_LTE_ext1_tags_4)
		/sizeof(asn_DEF_LTE_ext1_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_4)
		/sizeof(asn_DEF_LTE_ext1_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_4,
	3,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_UE_RadioPagingInfo_r12_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_UE_RadioPagingInfo_r12, ue_Category_v1250),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_ue_Category_v1250_constr_2,  memb_LTE_ue_Category_v1250_constraint_1 },
		0, 0, /* No default value */
		"ue-Category-v1250"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_UE_RadioPagingInfo_r12, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_ext1_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_LTE_UE_RadioPagingInfo_r12_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_UE_RadioPagingInfo_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_UE_RadioPagingInfo_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-Category-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_RadioPagingInfo_r12_specs_1 = {
	sizeof(struct LTE_UE_RadioPagingInfo_r12),
	offsetof(struct LTE_UE_RadioPagingInfo_r12, _asn_ctx),
	asn_MAP_LTE_UE_RadioPagingInfo_r12_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_UE_RadioPagingInfo_r12_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_UE_RadioPagingInfo_r12 = {
	"UE-RadioPagingInfo-r12",
	"UE-RadioPagingInfo-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_UE_RadioPagingInfo_r12_tags_1,
	sizeof(asn_DEF_LTE_UE_RadioPagingInfo_r12_tags_1)
		/sizeof(asn_DEF_LTE_UE_RadioPagingInfo_r12_tags_1[0]), /* 1 */
	asn_DEF_LTE_UE_RadioPagingInfo_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_UE_RadioPagingInfo_r12_tags_1)
		/sizeof(asn_DEF_LTE_UE_RadioPagingInfo_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_UE_RadioPagingInfo_r12_1,
	2,	/* Elements count */
	&asn_SPC_LTE_UE_RadioPagingInfo_r12_specs_1	/* Additional specs */
};

