/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-CommonDataTypes"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-CommonDataTypes.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/F1AP_R15.2.1`
 */

#include "F1AP_Criticality.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_F1AP_Criticality_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_F1AP_Criticality_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_F1AP_Criticality_value2enum_1[] = {
	{ 0,	6,	"reject" },
	{ 1,	6,	"ignore" },
	{ 2,	6,	"notify" }
};
static const unsigned int asn_MAP_F1AP_Criticality_enum2value_1[] = {
	1,	/* ignore(1) */
	2,	/* notify(2) */
	0	/* reject(0) */
};
const asn_INTEGER_specifics_t asn_SPC_F1AP_Criticality_specs_1 = {
	asn_MAP_F1AP_Criticality_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_F1AP_Criticality_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_F1AP_Criticality_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_F1AP_Criticality = {
	"Criticality",
	"Criticality",
	&asn_OP_NativeEnumerated,
	asn_DEF_F1AP_Criticality_tags_1,
	sizeof(asn_DEF_F1AP_Criticality_tags_1)
		/sizeof(asn_DEF_F1AP_Criticality_tags_1[0]), /* 1 */
	asn_DEF_F1AP_Criticality_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_Criticality_tags_1)
		/sizeof(asn_DEF_F1AP_Criticality_tags_1[0]), /* 1 */
	{ &asn_OER_type_F1AP_Criticality_constr_1, &asn_PER_type_F1AP_Criticality_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_F1AP_Criticality_specs_1	/* Additional specs */
};

