/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_PDSCH-RE-MappingQCL-Config-r11.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_crs_FreqShift_r11_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 5)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_crs_PortsCount_r11_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_mbsfn_SubframeConfigList_r11_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_pdsch_Start_r11_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_crs_FreqShift_r11_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_mbsfn_SubframeConfigList_v1430_constr_25 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_crs_PortsCount_r11_value2enum_4[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_crs_PortsCount_r11_enum2value_4[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2,	/* n4(2) */
	3	/* spare1(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_crs_PortsCount_r11_specs_4 = {
	asn_MAP_LTE_crs_PortsCount_r11_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_crs_PortsCount_r11_enum2value_4,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_crs_PortsCount_r11_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_crs_PortsCount_r11_4 = {
	"crs-PortsCount-r11",
	"crs-PortsCount-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_crs_PortsCount_r11_tags_4,
	sizeof(asn_DEF_LTE_crs_PortsCount_r11_tags_4)
		/sizeof(asn_DEF_LTE_crs_PortsCount_r11_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_crs_PortsCount_r11_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_crs_PortsCount_r11_tags_4)
		/sizeof(asn_DEF_LTE_crs_PortsCount_r11_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_crs_PortsCount_r11_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_crs_PortsCount_r11_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_setup_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11__setup, subframeConfigList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MBSFN_SubframeConfigList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subframeConfigList"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* subframeConfigList */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_12 = {
	sizeof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11__setup),
	offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_12,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_setup_12 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_setup_tags_12,
	sizeof(asn_DEF_LTE_setup_tags_12)
		/sizeof(asn_DEF_LTE_setup_tags_12[0]) - 1, /* 1 */
	asn_DEF_LTE_setup_tags_12,	/* Same as above */
	sizeof(asn_DEF_LTE_setup_tags_12)
		/sizeof(asn_DEF_LTE_setup_tags_12[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_setup_12,
	1,	/* Elements count */
	&asn_SPC_LTE_setup_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_mbsfn_SubframeConfigList_r11_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_mbsfn_SubframeConfigList_r11_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_mbsfn_SubframeConfigList_r11_specs_10 = {
	sizeof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11),
	offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11, _asn_ctx),
	offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11, present),
	sizeof(((struct LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11 *)0)->present),
	asn_MAP_LTE_mbsfn_SubframeConfigList_r11_tag2el_10,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_mbsfn_SubframeConfigList_r11_10 = {
	"mbsfn-SubframeConfigList-r11",
	"mbsfn-SubframeConfigList-r11",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_mbsfn_SubframeConfigList_r11_constr_10, CHOICE_constraint },
	asn_MBR_LTE_mbsfn_SubframeConfigList_r11_10,
	2,	/* Elements count */
	&asn_SPC_LTE_mbsfn_SubframeConfigList_r11_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_pdsch_Start_r11_value2enum_14[] = {
	{ 0,	8,	"reserved" },
	{ 1,	2,	"n1" },
	{ 2,	2,	"n2" },
	{ 3,	2,	"n3" },
	{ 4,	2,	"n4" },
	{ 5,	8,	"assigned" }
};
static const unsigned int asn_MAP_LTE_pdsch_Start_r11_enum2value_14[] = {
	5,	/* assigned(5) */
	1,	/* n1(1) */
	2,	/* n2(2) */
	3,	/* n3(3) */
	4,	/* n4(4) */
	0	/* reserved(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_pdsch_Start_r11_specs_14 = {
	asn_MAP_LTE_pdsch_Start_r11_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_pdsch_Start_r11_enum2value_14,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_pdsch_Start_r11_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pdsch_Start_r11_14 = {
	"pdsch-Start-r11",
	"pdsch-Start-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_pdsch_Start_r11_tags_14,
	sizeof(asn_DEF_LTE_pdsch_Start_r11_tags_14)
		/sizeof(asn_DEF_LTE_pdsch_Start_r11_tags_14[0]) - 1, /* 1 */
	asn_DEF_LTE_pdsch_Start_r11_tags_14,	/* Same as above */
	sizeof(asn_DEF_LTE_pdsch_Start_r11_tags_14)
		/sizeof(asn_DEF_LTE_pdsch_Start_r11_tags_14[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_pdsch_Start_r11_constr_14, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_pdsch_Start_r11_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_optionalSetOfFields_r11_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11, crs_PortsCount_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_crs_PortsCount_r11_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crs-PortsCount-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11, crs_FreqShift_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_crs_FreqShift_r11_constr_9,  memb_LTE_crs_FreqShift_r11_constraint_3 },
		0, 0, /* No default value */
		"crs-FreqShift-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11, mbsfn_SubframeConfigList_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_mbsfn_SubframeConfigList_r11_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbsfn-SubframeConfigList-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11, pdsch_Start_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_pdsch_Start_r11_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-Start-r11"
		},
};
static const int asn_MAP_LTE_optionalSetOfFields_r11_oms_3[] = { 2 };
static const ber_tlv_tag_t asn_DEF_LTE_optionalSetOfFields_r11_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_optionalSetOfFields_r11_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* crs-PortsCount-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* crs-FreqShift-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mbsfn-SubframeConfigList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* pdsch-Start-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_optionalSetOfFields_r11_specs_3 = {
	sizeof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11),
	offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11, _asn_ctx),
	asn_MAP_LTE_optionalSetOfFields_r11_tag2el_3,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_optionalSetOfFields_r11_oms_3,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_optionalSetOfFields_r11_3 = {
	"optionalSetOfFields-r11",
	"optionalSetOfFields-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_optionalSetOfFields_r11_tags_3,
	sizeof(asn_DEF_LTE_optionalSetOfFields_r11_tags_3)
		/sizeof(asn_DEF_LTE_optionalSetOfFields_r11_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_optionalSetOfFields_r11_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_optionalSetOfFields_r11_tags_3)
		/sizeof(asn_DEF_LTE_optionalSetOfFields_r11_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_optionalSetOfFields_r11_3,
	4,	/* Elements count */
	&asn_SPC_LTE_optionalSetOfFields_r11_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_setup_27[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__ext1__mbsfn_SubframeConfigList_v1430__setup, subframeConfigList_v1430),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MBSFN_SubframeConfigList_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subframeConfigList-v1430"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_27[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_27[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* subframeConfigList-v1430 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_27 = {
	sizeof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__ext1__mbsfn_SubframeConfigList_v1430__setup),
	offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__ext1__mbsfn_SubframeConfigList_v1430__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_27,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_setup_27 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_setup_tags_27,
	sizeof(asn_DEF_LTE_setup_tags_27)
		/sizeof(asn_DEF_LTE_setup_tags_27[0]) - 1, /* 1 */
	asn_DEF_LTE_setup_tags_27,	/* Same as above */
	sizeof(asn_DEF_LTE_setup_tags_27)
		/sizeof(asn_DEF_LTE_setup_tags_27[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_setup_27,
	1,	/* Elements count */
	&asn_SPC_LTE_setup_specs_27	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_mbsfn_SubframeConfigList_v1430_25[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__ext1__mbsfn_SubframeConfigList_v1430, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__ext1__mbsfn_SubframeConfigList_v1430, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_27,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_mbsfn_SubframeConfigList_v1430_tag2el_25[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_mbsfn_SubframeConfigList_v1430_specs_25 = {
	sizeof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__ext1__mbsfn_SubframeConfigList_v1430),
	offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__ext1__mbsfn_SubframeConfigList_v1430, _asn_ctx),
	offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__ext1__mbsfn_SubframeConfigList_v1430, present),
	sizeof(((struct LTE_PDSCH_RE_MappingQCL_Config_r11__ext1__mbsfn_SubframeConfigList_v1430 *)0)->present),
	asn_MAP_LTE_mbsfn_SubframeConfigList_v1430_tag2el_25,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_mbsfn_SubframeConfigList_v1430_25 = {
	"mbsfn-SubframeConfigList-v1430",
	"mbsfn-SubframeConfigList-v1430",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_mbsfn_SubframeConfigList_v1430_constr_25, CHOICE_constraint },
	asn_MBR_LTE_mbsfn_SubframeConfigList_v1430_25,
	2,	/* Elements count */
	&asn_SPC_LTE_mbsfn_SubframeConfigList_v1430_specs_25	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_24[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__ext1, mbsfn_SubframeConfigList_v1430),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_mbsfn_SubframeConfigList_v1430_25,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbsfn-SubframeConfigList-v1430"
		},
};
static const int asn_MAP_LTE_ext1_oms_24[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_24[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* mbsfn-SubframeConfigList-v1430 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_24 = {
	sizeof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__ext1),
	offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_24,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_24,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_24 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_24,
	sizeof(asn_DEF_LTE_ext1_tags_24)
		/sizeof(asn_DEF_LTE_ext1_tags_24[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_24,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_24)
		/sizeof(asn_DEF_LTE_ext1_tags_24[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_24,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_24	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PDSCH_RE_MappingQCL_Config_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11, pdsch_RE_MappingQCL_ConfigId_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PDSCH_RE_MappingQCL_ConfigId_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-RE-MappingQCL-ConfigId-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11, optionalSetOfFields_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_optionalSetOfFields_r11_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"optionalSetOfFields-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11, csi_RS_ConfigZPId_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CSI_RS_ConfigZPId_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RS-ConfigZPId-r11"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11, qcl_CSI_RS_ConfigNZPId_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CSI_RS_ConfigNZPId_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qcl-CSI-RS-ConfigNZPId-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11, ext1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_LTE_ext1_24,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_LTE_PDSCH_RE_MappingQCL_Config_r11_oms_1[] = { 1, 3, 4 };
static const ber_tlv_tag_t asn_DEF_LTE_PDSCH_RE_MappingQCL_Config_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PDSCH_RE_MappingQCL_Config_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pdsch-RE-MappingQCL-ConfigId-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* optionalSetOfFields-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* csi-RS-ConfigZPId-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* qcl-CSI-RS-ConfigNZPId-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PDSCH_RE_MappingQCL_Config_r11_specs_1 = {
	sizeof(struct LTE_PDSCH_RE_MappingQCL_Config_r11),
	offsetof(struct LTE_PDSCH_RE_MappingQCL_Config_r11, _asn_ctx),
	asn_MAP_LTE_PDSCH_RE_MappingQCL_Config_r11_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_LTE_PDSCH_RE_MappingQCL_Config_r11_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PDSCH_RE_MappingQCL_Config_r11 = {
	"PDSCH-RE-MappingQCL-Config-r11",
	"PDSCH-RE-MappingQCL-Config-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PDSCH_RE_MappingQCL_Config_r11_tags_1,
	sizeof(asn_DEF_LTE_PDSCH_RE_MappingQCL_Config_r11_tags_1)
		/sizeof(asn_DEF_LTE_PDSCH_RE_MappingQCL_Config_r11_tags_1[0]), /* 1 */
	asn_DEF_LTE_PDSCH_RE_MappingQCL_Config_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PDSCH_RE_MappingQCL_Config_r11_tags_1)
		/sizeof(asn_DEF_LTE_PDSCH_RE_MappingQCL_Config_r11_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_PDSCH_RE_MappingQCL_Config_r11_1,
	5,	/* Elements count */
	&asn_SPC_LTE_PDSCH_RE_MappingQCL_Config_r11_specs_1	/* Additional specs */
};

