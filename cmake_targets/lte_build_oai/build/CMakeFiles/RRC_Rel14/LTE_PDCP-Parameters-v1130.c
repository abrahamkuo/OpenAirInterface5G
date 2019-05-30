/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_PDCP-Parameters-v1130.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_pdcp_SN_Extension_r11_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_supportRohcContextContinue_r11_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_pdcp_SN_Extension_r11_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_pdcp_SN_Extension_r11_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_pdcp_SN_Extension_r11_specs_2 = {
	asn_MAP_LTE_pdcp_SN_Extension_r11_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_pdcp_SN_Extension_r11_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_pdcp_SN_Extension_r11_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pdcp_SN_Extension_r11_2 = {
	"pdcp-SN-Extension-r11",
	"pdcp-SN-Extension-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_pdcp_SN_Extension_r11_tags_2,
	sizeof(asn_DEF_LTE_pdcp_SN_Extension_r11_tags_2)
		/sizeof(asn_DEF_LTE_pdcp_SN_Extension_r11_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_pdcp_SN_Extension_r11_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_pdcp_SN_Extension_r11_tags_2)
		/sizeof(asn_DEF_LTE_pdcp_SN_Extension_r11_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_pdcp_SN_Extension_r11_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_pdcp_SN_Extension_r11_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_supportRohcContextContinue_r11_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_supportRohcContextContinue_r11_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_supportRohcContextContinue_r11_specs_4 = {
	asn_MAP_LTE_supportRohcContextContinue_r11_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_supportRohcContextContinue_r11_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_supportRohcContextContinue_r11_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_supportRohcContextContinue_r11_4 = {
	"supportRohcContextContinue-r11",
	"supportRohcContextContinue-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_supportRohcContextContinue_r11_tags_4,
	sizeof(asn_DEF_LTE_supportRohcContextContinue_r11_tags_4)
		/sizeof(asn_DEF_LTE_supportRohcContextContinue_r11_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_supportRohcContextContinue_r11_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_supportRohcContextContinue_r11_tags_4)
		/sizeof(asn_DEF_LTE_supportRohcContextContinue_r11_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_supportRohcContextContinue_r11_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_supportRohcContextContinue_r11_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PDCP_Parameters_v1130_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_PDCP_Parameters_v1130, pdcp_SN_Extension_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_pdcp_SN_Extension_r11_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcp-SN-Extension-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_PDCP_Parameters_v1130, supportRohcContextContinue_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_supportRohcContextContinue_r11_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportRohcContextContinue-r11"
		},
};
static const int asn_MAP_LTE_PDCP_Parameters_v1130_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_PDCP_Parameters_v1130_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PDCP_Parameters_v1130_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pdcp-SN-Extension-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* supportRohcContextContinue-r11 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PDCP_Parameters_v1130_specs_1 = {
	sizeof(struct LTE_PDCP_Parameters_v1130),
	offsetof(struct LTE_PDCP_Parameters_v1130, _asn_ctx),
	asn_MAP_LTE_PDCP_Parameters_v1130_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_PDCP_Parameters_v1130_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PDCP_Parameters_v1130 = {
	"PDCP-Parameters-v1130",
	"PDCP-Parameters-v1130",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PDCP_Parameters_v1130_tags_1,
	sizeof(asn_DEF_LTE_PDCP_Parameters_v1130_tags_1)
		/sizeof(asn_DEF_LTE_PDCP_Parameters_v1130_tags_1[0]), /* 1 */
	asn_DEF_LTE_PDCP_Parameters_v1130_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PDCP_Parameters_v1130_tags_1)
		/sizeof(asn_DEF_LTE_PDCP_Parameters_v1130_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_PDCP_Parameters_v1130_1,
	2,	/* Elements count */
	&asn_SPC_LTE_PDCP_Parameters_v1130_specs_1	/* Additional specs */
};

