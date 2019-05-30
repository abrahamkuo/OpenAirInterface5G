/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_PollByte-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_LTE_PollByte_r14_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_PollByte_r14_value2enum_1[] = {
	{ 0,	3,	"kB1" },
	{ 1,	3,	"kB2" },
	{ 2,	3,	"kB5" },
	{ 3,	3,	"kB8" },
	{ 4,	4,	"kB10" },
	{ 5,	4,	"kB15" },
	{ 6,	6,	"kB3500" },
	{ 7,	6,	"kB4000" },
	{ 8,	6,	"kB4500" },
	{ 9,	6,	"kB5000" },
	{ 10,	6,	"kB5500" },
	{ 11,	6,	"kB6000" },
	{ 12,	6,	"kB6500" },
	{ 13,	6,	"kB7000" },
	{ 14,	6,	"kB7500" },
	{ 15,	6,	"kB8000" },
	{ 16,	6,	"kB9000" },
	{ 17,	7,	"kB10000" },
	{ 18,	7,	"kB11000" },
	{ 19,	7,	"kB12000" },
	{ 20,	7,	"kB13000" },
	{ 21,	7,	"kB14000" },
	{ 22,	7,	"kB15000" },
	{ 23,	7,	"kB16000" },
	{ 24,	7,	"kB17000" },
	{ 25,	7,	"kB18000" },
	{ 26,	7,	"kB19000" },
	{ 27,	7,	"kB20000" },
	{ 28,	7,	"kB25000" },
	{ 29,	7,	"kB30000" },
	{ 30,	7,	"kB35000" },
	{ 31,	7,	"kB40000" }
};
static const unsigned int asn_MAP_LTE_PollByte_r14_enum2value_1[] = {
	0,	/* kB1(0) */
	4,	/* kB10(4) */
	17,	/* kB10000(17) */
	18,	/* kB11000(18) */
	19,	/* kB12000(19) */
	20,	/* kB13000(20) */
	21,	/* kB14000(21) */
	5,	/* kB15(5) */
	22,	/* kB15000(22) */
	23,	/* kB16000(23) */
	24,	/* kB17000(24) */
	25,	/* kB18000(25) */
	26,	/* kB19000(26) */
	1,	/* kB2(1) */
	27,	/* kB20000(27) */
	28,	/* kB25000(28) */
	29,	/* kB30000(29) */
	6,	/* kB3500(6) */
	30,	/* kB35000(30) */
	7,	/* kB4000(7) */
	31,	/* kB40000(31) */
	8,	/* kB4500(8) */
	2,	/* kB5(2) */
	9,	/* kB5000(9) */
	10,	/* kB5500(10) */
	11,	/* kB6000(11) */
	12,	/* kB6500(12) */
	13,	/* kB7000(13) */
	14,	/* kB7500(14) */
	3,	/* kB8(3) */
	15,	/* kB8000(15) */
	16	/* kB9000(16) */
};
const asn_INTEGER_specifics_t asn_SPC_LTE_PollByte_r14_specs_1 = {
	asn_MAP_LTE_PollByte_r14_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_PollByte_r14_enum2value_1,	/* N => "tag"; sorted by N */
	32,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_PollByte_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_PollByte_r14 = {
	"PollByte-r14",
	"PollByte-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_PollByte_r14_tags_1,
	sizeof(asn_DEF_LTE_PollByte_r14_tags_1)
		/sizeof(asn_DEF_LTE_PollByte_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_PollByte_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PollByte_r14_tags_1)
		/sizeof(asn_DEF_LTE_PollByte_r14_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_LTE_PollByte_r14_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_PollByte_r14_specs_1	/* Additional specs */
};

