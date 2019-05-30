/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_BandParameters-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_supportedCSI_Proc_r13_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_supportedCSI_Proc_r13_value2enum_5[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n3" },
	{ 2,	2,	"n4" }
};
static const unsigned int asn_MAP_LTE_supportedCSI_Proc_r13_enum2value_5[] = {
	0,	/* n1(0) */
	1,	/* n3(1) */
	2	/* n4(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_supportedCSI_Proc_r13_specs_5 = {
	asn_MAP_LTE_supportedCSI_Proc_r13_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_supportedCSI_Proc_r13_enum2value_5,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_supportedCSI_Proc_r13_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_supportedCSI_Proc_r13_5 = {
	"supportedCSI-Proc-r13",
	"supportedCSI-Proc-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_supportedCSI_Proc_r13_tags_5,
	sizeof(asn_DEF_LTE_supportedCSI_Proc_r13_tags_5)
		/sizeof(asn_DEF_LTE_supportedCSI_Proc_r13_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_supportedCSI_Proc_r13_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_supportedCSI_Proc_r13_tags_5)
		/sizeof(asn_DEF_LTE_supportedCSI_Proc_r13_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_supportedCSI_Proc_r13_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_supportedCSI_Proc_r13_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_BandParameters_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_BandParameters_r13, bandEUTRA_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_FreqBandIndicator_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bandEUTRA-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_BandParameters_r13, bandParametersUL_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_BandParametersUL_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bandParametersUL-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_BandParameters_r13, bandParametersDL_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_BandParametersDL_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bandParametersDL-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_BandParameters_r13, supportedCSI_Proc_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_supportedCSI_Proc_r13_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedCSI-Proc-r13"
		},
};
static const int asn_MAP_LTE_BandParameters_r13_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_BandParameters_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_BandParameters_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandEUTRA-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bandParametersUL-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* bandParametersDL-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* supportedCSI-Proc-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_BandParameters_r13_specs_1 = {
	sizeof(struct LTE_BandParameters_r13),
	offsetof(struct LTE_BandParameters_r13, _asn_ctx),
	asn_MAP_LTE_BandParameters_r13_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_BandParameters_r13_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_BandParameters_r13 = {
	"BandParameters-r13",
	"BandParameters-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_BandParameters_r13_tags_1,
	sizeof(asn_DEF_LTE_BandParameters_r13_tags_1)
		/sizeof(asn_DEF_LTE_BandParameters_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_BandParameters_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_BandParameters_r13_tags_1)
		/sizeof(asn_DEF_LTE_BandParameters_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_BandParameters_r13_1,
	4,	/* Elements count */
	&asn_SPC_LTE_BandParameters_r13_specs_1	/* Additional specs */
};

