/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_PagingWeight-NB-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_LTE_PagingWeight_NB_r14_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_PagingWeight_NB_r14_value2enum_1[] = {
	{ 0,	2,	"w1" },
	{ 1,	2,	"w2" },
	{ 2,	2,	"w3" },
	{ 3,	2,	"w4" },
	{ 4,	2,	"w5" },
	{ 5,	2,	"w6" },
	{ 6,	2,	"w7" },
	{ 7,	2,	"w8" },
	{ 8,	2,	"w9" },
	{ 9,	3,	"w10" },
	{ 10,	3,	"w11" },
	{ 11,	3,	"w12" },
	{ 12,	3,	"w13" },
	{ 13,	3,	"w14" },
	{ 14,	3,	"w15" },
	{ 15,	3,	"w16" }
};
static const unsigned int asn_MAP_LTE_PagingWeight_NB_r14_enum2value_1[] = {
	0,	/* w1(0) */
	9,	/* w10(9) */
	10,	/* w11(10) */
	11,	/* w12(11) */
	12,	/* w13(12) */
	13,	/* w14(13) */
	14,	/* w15(14) */
	15,	/* w16(15) */
	1,	/* w2(1) */
	2,	/* w3(2) */
	3,	/* w4(3) */
	4,	/* w5(4) */
	5,	/* w6(5) */
	6,	/* w7(6) */
	7,	/* w8(7) */
	8	/* w9(8) */
};
const asn_INTEGER_specifics_t asn_SPC_LTE_PagingWeight_NB_r14_specs_1 = {
	asn_MAP_LTE_PagingWeight_NB_r14_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_PagingWeight_NB_r14_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_PagingWeight_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_PagingWeight_NB_r14 = {
	"PagingWeight-NB-r14",
	"PagingWeight-NB-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_PagingWeight_NB_r14_tags_1,
	sizeof(asn_DEF_LTE_PagingWeight_NB_r14_tags_1)
		/sizeof(asn_DEF_LTE_PagingWeight_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_PagingWeight_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PagingWeight_NB_r14_tags_1)
		/sizeof(asn_DEF_LTE_PagingWeight_NB_r14_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_LTE_PagingWeight_NB_r14_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_PagingWeight_NB_r14_specs_1	/* Additional specs */
};

