/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SupportedBandUTRA-FDD.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_LTE_SupportedBandUTRA_FDD_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  15 }	/* (0..15,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_SupportedBandUTRA_FDD_value2enum_1[] = {
	{ 0,	5,	"bandI" },
	{ 1,	6,	"bandII" },
	{ 2,	7,	"bandIII" },
	{ 3,	6,	"bandIV" },
	{ 4,	5,	"bandV" },
	{ 5,	6,	"bandVI" },
	{ 6,	7,	"bandVII" },
	{ 7,	8,	"bandVIII" },
	{ 8,	6,	"bandIX" },
	{ 9,	5,	"bandX" },
	{ 10,	6,	"bandXI" },
	{ 11,	7,	"bandXII" },
	{ 12,	8,	"bandXIII" },
	{ 13,	7,	"bandXIV" },
	{ 14,	6,	"bandXV" },
	{ 15,	7,	"bandXVI" },
	{ 16,	12,	"bandXVII-8a0" },
	{ 17,	13,	"bandXVIII-8a0" },
	{ 18,	11,	"bandXIX-8a0" },
	{ 19,	10,	"bandXX-8a0" },
	{ 20,	11,	"bandXXI-8a0" },
	{ 21,	12,	"bandXXII-8a0" },
	{ 22,	13,	"bandXXIII-8a0" },
	{ 23,	12,	"bandXXIV-8a0" },
	{ 24,	11,	"bandXXV-8a0" },
	{ 25,	12,	"bandXXVI-8a0" },
	{ 26,	13,	"bandXXVII-8a0" },
	{ 27,	14,	"bandXXVIII-8a0" },
	{ 28,	12,	"bandXXIX-8a0" },
	{ 29,	11,	"bandXXX-8a0" },
	{ 30,	12,	"bandXXXI-8a0" },
	{ 31,	13,	"bandXXXII-8a0" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_LTE_SupportedBandUTRA_FDD_enum2value_1[] = {
	0,	/* bandI(0) */
	1,	/* bandII(1) */
	2,	/* bandIII(2) */
	3,	/* bandIV(3) */
	8,	/* bandIX(8) */
	4,	/* bandV(4) */
	5,	/* bandVI(5) */
	6,	/* bandVII(6) */
	7,	/* bandVIII(7) */
	9,	/* bandX(9) */
	10,	/* bandXI(10) */
	11,	/* bandXII(11) */
	12,	/* bandXIII(12) */
	13,	/* bandXIV(13) */
	18,	/* bandXIX-8a0(18) */
	14,	/* bandXV(14) */
	15,	/* bandXVI(15) */
	16,	/* bandXVII-8a0(16) */
	17,	/* bandXVIII-8a0(17) */
	19,	/* bandXX-8a0(19) */
	20,	/* bandXXI-8a0(20) */
	21,	/* bandXXII-8a0(21) */
	22,	/* bandXXIII-8a0(22) */
	23,	/* bandXXIV-8a0(23) */
	28,	/* bandXXIX-8a0(28) */
	24,	/* bandXXV-8a0(24) */
	25,	/* bandXXVI-8a0(25) */
	26,	/* bandXXVII-8a0(26) */
	27,	/* bandXXVIII-8a0(27) */
	29,	/* bandXXX-8a0(29) */
	30,	/* bandXXXI-8a0(30) */
	31	/* bandXXXII-8a0(31) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_LTE_SupportedBandUTRA_FDD_specs_1 = {
	asn_MAP_LTE_SupportedBandUTRA_FDD_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_SupportedBandUTRA_FDD_enum2value_1,	/* N => "tag"; sorted by N */
	32,	/* Number of elements in the maps */
	17,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_SupportedBandUTRA_FDD_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_SupportedBandUTRA_FDD = {
	"SupportedBandUTRA-FDD",
	"SupportedBandUTRA-FDD",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_SupportedBandUTRA_FDD_tags_1,
	sizeof(asn_DEF_LTE_SupportedBandUTRA_FDD_tags_1)
		/sizeof(asn_DEF_LTE_SupportedBandUTRA_FDD_tags_1[0]), /* 1 */
	asn_DEF_LTE_SupportedBandUTRA_FDD_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SupportedBandUTRA_FDD_tags_1)
		/sizeof(asn_DEF_LTE_SupportedBandUTRA_FDD_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_LTE_SupportedBandUTRA_FDD_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_SupportedBandUTRA_FDD_specs_1	/* Additional specs */
};

