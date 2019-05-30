/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_ReselectionInfoRelay-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_minHyst_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_minHyst_r13_value2enum_4[] = {
	{ 0,	3,	"dB0" },
	{ 1,	3,	"dB3" },
	{ 2,	3,	"dB6" },
	{ 3,	3,	"dB9" },
	{ 4,	4,	"dB12" },
	{ 5,	5,	"dBinf" }
};
static const unsigned int asn_MAP_LTE_minHyst_r13_enum2value_4[] = {
	0,	/* dB0(0) */
	4,	/* dB12(4) */
	1,	/* dB3(1) */
	2,	/* dB6(2) */
	3,	/* dB9(3) */
	5	/* dBinf(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_minHyst_r13_specs_4 = {
	asn_MAP_LTE_minHyst_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_minHyst_r13_enum2value_4,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_minHyst_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_minHyst_r13_4 = {
	"minHyst-r13",
	"minHyst-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_minHyst_r13_tags_4,
	sizeof(asn_DEF_LTE_minHyst_r13_tags_4)
		/sizeof(asn_DEF_LTE_minHyst_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_minHyst_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_minHyst_r13_tags_4)
		/sizeof(asn_DEF_LTE_minHyst_r13_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_minHyst_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_minHyst_r13_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_ReselectionInfoRelay_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_ReselectionInfoRelay_r13, q_RxLevMin_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_Q_RxLevMin,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-RxLevMin-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_ReselectionInfoRelay_r13, filterCoefficient_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_FilterCoefficient,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"filterCoefficient-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_ReselectionInfoRelay_r13, minHyst_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_minHyst_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"minHyst-r13"
		},
};
static const int asn_MAP_LTE_ReselectionInfoRelay_r13_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_LTE_ReselectionInfoRelay_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ReselectionInfoRelay_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* q-RxLevMin-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* filterCoefficient-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* minHyst-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_ReselectionInfoRelay_r13_specs_1 = {
	sizeof(struct LTE_ReselectionInfoRelay_r13),
	offsetof(struct LTE_ReselectionInfoRelay_r13, _asn_ctx),
	asn_MAP_LTE_ReselectionInfoRelay_r13_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_ReselectionInfoRelay_r13_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_ReselectionInfoRelay_r13 = {
	"ReselectionInfoRelay-r13",
	"ReselectionInfoRelay-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ReselectionInfoRelay_r13_tags_1,
	sizeof(asn_DEF_LTE_ReselectionInfoRelay_r13_tags_1)
		/sizeof(asn_DEF_LTE_ReselectionInfoRelay_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_ReselectionInfoRelay_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_ReselectionInfoRelay_r13_tags_1)
		/sizeof(asn_DEF_LTE_ReselectionInfoRelay_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ReselectionInfoRelay_r13_1,
	3,	/* Elements count */
	&asn_SPC_LTE_ReselectionInfoRelay_r13_specs_1	/* Additional specs */
};

