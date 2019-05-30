/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-Containers"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#include "S1AP_ProtocolIE-ContainerList.h"

#include "S1AP_ProtocolIE-SingleContainer.h"
asn_per_constraints_t asn_PER_type_S1AP_ProtocolIE_ContainerList_6614P0_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_S1AP_ProtocolIE_ContainerList_6614P1_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_S1AP_ProtocolIE_ContainerList_6614P2_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_S1AP_ProtocolIE_ContainerList_6614P3_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_S1AP_ProtocolIE_ContainerList_6614P4_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_S1AP_ProtocolIE_ContainerList_6614P5_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_S1AP_ProtocolIE_ContainerList_6614P6_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_S1AP_ProtocolIE_ContainerList_6614P7_constr_15 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_S1AP_ProtocolIE_ContainerList_6614P8_constr_17 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_S1AP_ProtocolIE_ContainerList_6614P9_constr_19 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_S1AP_ProtocolIE_ContainerList_6614P0_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_S1AP_ProtocolIE_SingleContainer_6580P18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_S1AP_ProtocolIE_ContainerList_6614P0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_S1AP_ProtocolIE_ContainerList_6614P0_specs_1 = {
	sizeof(struct S1AP_ProtocolIE_ContainerList_6614P0),
	offsetof(struct S1AP_ProtocolIE_ContainerList_6614P0, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_ContainerList_6614P0 = {
	"ProtocolIE-ContainerList",
	"ProtocolIE-ContainerList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_S1AP_ProtocolIE_ContainerList_6614P0_tags_1,
	sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P0_tags_1)
		/sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P0_tags_1[0]), /* 1 */
	asn_DEF_S1AP_ProtocolIE_ContainerList_6614P0_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P0_tags_1)
		/sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P0_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_S1AP_ProtocolIE_ContainerList_6614P0_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_S1AP_ProtocolIE_ContainerList_6614P0_1,
	1,	/* Single element */
	&asn_SPC_S1AP_ProtocolIE_ContainerList_6614P0_specs_1	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_S1AP_ProtocolIE_ContainerList_6614P1_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_S1AP_ProtocolIE_SingleContainer_6580P19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_S1AP_ProtocolIE_ContainerList_6614P1_tags_3[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_S1AP_ProtocolIE_ContainerList_6614P1_specs_3 = {
	sizeof(struct S1AP_ProtocolIE_ContainerList_6614P1),
	offsetof(struct S1AP_ProtocolIE_ContainerList_6614P1, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_ContainerList_6614P1 = {
	"ProtocolIE-ContainerList",
	"ProtocolIE-ContainerList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_S1AP_ProtocolIE_ContainerList_6614P1_tags_3,
	sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P1_tags_3)
		/sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P1_tags_3[0]), /* 1 */
	asn_DEF_S1AP_ProtocolIE_ContainerList_6614P1_tags_3,	/* Same as above */
	sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P1_tags_3)
		/sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P1_tags_3[0]), /* 1 */
	{ 0, &asn_PER_type_S1AP_ProtocolIE_ContainerList_6614P1_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_S1AP_ProtocolIE_ContainerList_6614P1_3,
	1,	/* Single element */
	&asn_SPC_S1AP_ProtocolIE_ContainerList_6614P1_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_S1AP_ProtocolIE_ContainerList_6614P2_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_S1AP_ProtocolIE_SingleContainer_6580P20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_S1AP_ProtocolIE_ContainerList_6614P2_tags_5[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_S1AP_ProtocolIE_ContainerList_6614P2_specs_5 = {
	sizeof(struct S1AP_ProtocolIE_ContainerList_6614P2),
	offsetof(struct S1AP_ProtocolIE_ContainerList_6614P2, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_ContainerList_6614P2 = {
	"ProtocolIE-ContainerList",
	"ProtocolIE-ContainerList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_S1AP_ProtocolIE_ContainerList_6614P2_tags_5,
	sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P2_tags_5)
		/sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P2_tags_5[0]), /* 1 */
	asn_DEF_S1AP_ProtocolIE_ContainerList_6614P2_tags_5,	/* Same as above */
	sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P2_tags_5)
		/sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P2_tags_5[0]), /* 1 */
	{ 0, &asn_PER_type_S1AP_ProtocolIE_ContainerList_6614P2_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_S1AP_ProtocolIE_ContainerList_6614P2_5,
	1,	/* Single element */
	&asn_SPC_S1AP_ProtocolIE_ContainerList_6614P2_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_S1AP_ProtocolIE_ContainerList_6614P3_7[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_S1AP_ProtocolIE_SingleContainer_6580P21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_S1AP_ProtocolIE_ContainerList_6614P3_tags_7[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_S1AP_ProtocolIE_ContainerList_6614P3_specs_7 = {
	sizeof(struct S1AP_ProtocolIE_ContainerList_6614P3),
	offsetof(struct S1AP_ProtocolIE_ContainerList_6614P3, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_ContainerList_6614P3 = {
	"ProtocolIE-ContainerList",
	"ProtocolIE-ContainerList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_S1AP_ProtocolIE_ContainerList_6614P3_tags_7,
	sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P3_tags_7)
		/sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P3_tags_7[0]), /* 1 */
	asn_DEF_S1AP_ProtocolIE_ContainerList_6614P3_tags_7,	/* Same as above */
	sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P3_tags_7)
		/sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P3_tags_7[0]), /* 1 */
	{ 0, &asn_PER_type_S1AP_ProtocolIE_ContainerList_6614P3_constr_7, SEQUENCE_OF_constraint },
	asn_MBR_S1AP_ProtocolIE_ContainerList_6614P3_7,
	1,	/* Single element */
	&asn_SPC_S1AP_ProtocolIE_ContainerList_6614P3_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_S1AP_ProtocolIE_ContainerList_6614P4_9[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_S1AP_ProtocolIE_SingleContainer_6580P22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_S1AP_ProtocolIE_ContainerList_6614P4_tags_9[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_S1AP_ProtocolIE_ContainerList_6614P4_specs_9 = {
	sizeof(struct S1AP_ProtocolIE_ContainerList_6614P4),
	offsetof(struct S1AP_ProtocolIE_ContainerList_6614P4, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_ContainerList_6614P4 = {
	"ProtocolIE-ContainerList",
	"ProtocolIE-ContainerList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_S1AP_ProtocolIE_ContainerList_6614P4_tags_9,
	sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P4_tags_9)
		/sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P4_tags_9[0]), /* 1 */
	asn_DEF_S1AP_ProtocolIE_ContainerList_6614P4_tags_9,	/* Same as above */
	sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P4_tags_9)
		/sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P4_tags_9[0]), /* 1 */
	{ 0, &asn_PER_type_S1AP_ProtocolIE_ContainerList_6614P4_constr_9, SEQUENCE_OF_constraint },
	asn_MBR_S1AP_ProtocolIE_ContainerList_6614P4_9,
	1,	/* Single element */
	&asn_SPC_S1AP_ProtocolIE_ContainerList_6614P4_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_S1AP_ProtocolIE_ContainerList_6614P5_11[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_S1AP_ProtocolIE_SingleContainer_6580P23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_S1AP_ProtocolIE_ContainerList_6614P5_tags_11[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_S1AP_ProtocolIE_ContainerList_6614P5_specs_11 = {
	sizeof(struct S1AP_ProtocolIE_ContainerList_6614P5),
	offsetof(struct S1AP_ProtocolIE_ContainerList_6614P5, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_ContainerList_6614P5 = {
	"ProtocolIE-ContainerList",
	"ProtocolIE-ContainerList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_S1AP_ProtocolIE_ContainerList_6614P5_tags_11,
	sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P5_tags_11)
		/sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P5_tags_11[0]), /* 1 */
	asn_DEF_S1AP_ProtocolIE_ContainerList_6614P5_tags_11,	/* Same as above */
	sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P5_tags_11)
		/sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P5_tags_11[0]), /* 1 */
	{ 0, &asn_PER_type_S1AP_ProtocolIE_ContainerList_6614P5_constr_11, SEQUENCE_OF_constraint },
	asn_MBR_S1AP_ProtocolIE_ContainerList_6614P5_11,
	1,	/* Single element */
	&asn_SPC_S1AP_ProtocolIE_ContainerList_6614P5_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_S1AP_ProtocolIE_ContainerList_6614P6_13[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_S1AP_ProtocolIE_SingleContainer_6580P24,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_S1AP_ProtocolIE_ContainerList_6614P6_tags_13[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_S1AP_ProtocolIE_ContainerList_6614P6_specs_13 = {
	sizeof(struct S1AP_ProtocolIE_ContainerList_6614P6),
	offsetof(struct S1AP_ProtocolIE_ContainerList_6614P6, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_ContainerList_6614P6 = {
	"ProtocolIE-ContainerList",
	"ProtocolIE-ContainerList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_S1AP_ProtocolIE_ContainerList_6614P6_tags_13,
	sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P6_tags_13)
		/sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P6_tags_13[0]), /* 1 */
	asn_DEF_S1AP_ProtocolIE_ContainerList_6614P6_tags_13,	/* Same as above */
	sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P6_tags_13)
		/sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P6_tags_13[0]), /* 1 */
	{ 0, &asn_PER_type_S1AP_ProtocolIE_ContainerList_6614P6_constr_13, SEQUENCE_OF_constraint },
	asn_MBR_S1AP_ProtocolIE_ContainerList_6614P6_13,
	1,	/* Single element */
	&asn_SPC_S1AP_ProtocolIE_ContainerList_6614P6_specs_13	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_S1AP_ProtocolIE_ContainerList_6614P7_15[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_S1AP_ProtocolIE_SingleContainer_6580P25,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_S1AP_ProtocolIE_ContainerList_6614P7_tags_15[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_S1AP_ProtocolIE_ContainerList_6614P7_specs_15 = {
	sizeof(struct S1AP_ProtocolIE_ContainerList_6614P7),
	offsetof(struct S1AP_ProtocolIE_ContainerList_6614P7, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_ContainerList_6614P7 = {
	"ProtocolIE-ContainerList",
	"ProtocolIE-ContainerList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_S1AP_ProtocolIE_ContainerList_6614P7_tags_15,
	sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P7_tags_15)
		/sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P7_tags_15[0]), /* 1 */
	asn_DEF_S1AP_ProtocolIE_ContainerList_6614P7_tags_15,	/* Same as above */
	sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P7_tags_15)
		/sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P7_tags_15[0]), /* 1 */
	{ 0, &asn_PER_type_S1AP_ProtocolIE_ContainerList_6614P7_constr_15, SEQUENCE_OF_constraint },
	asn_MBR_S1AP_ProtocolIE_ContainerList_6614P7_15,
	1,	/* Single element */
	&asn_SPC_S1AP_ProtocolIE_ContainerList_6614P7_specs_15	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_S1AP_ProtocolIE_ContainerList_6614P8_17[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_S1AP_ProtocolIE_SingleContainer_6580P26,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_S1AP_ProtocolIE_ContainerList_6614P8_tags_17[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_S1AP_ProtocolIE_ContainerList_6614P8_specs_17 = {
	sizeof(struct S1AP_ProtocolIE_ContainerList_6614P8),
	offsetof(struct S1AP_ProtocolIE_ContainerList_6614P8, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_ContainerList_6614P8 = {
	"ProtocolIE-ContainerList",
	"ProtocolIE-ContainerList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_S1AP_ProtocolIE_ContainerList_6614P8_tags_17,
	sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P8_tags_17)
		/sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P8_tags_17[0]), /* 1 */
	asn_DEF_S1AP_ProtocolIE_ContainerList_6614P8_tags_17,	/* Same as above */
	sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P8_tags_17)
		/sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P8_tags_17[0]), /* 1 */
	{ 0, &asn_PER_type_S1AP_ProtocolIE_ContainerList_6614P8_constr_17, SEQUENCE_OF_constraint },
	asn_MBR_S1AP_ProtocolIE_ContainerList_6614P8_17,
	1,	/* Single element */
	&asn_SPC_S1AP_ProtocolIE_ContainerList_6614P8_specs_17	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_S1AP_ProtocolIE_ContainerList_6614P9_19[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_S1AP_ProtocolIE_SingleContainer_6580P27,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_S1AP_ProtocolIE_ContainerList_6614P9_tags_19[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_S1AP_ProtocolIE_ContainerList_6614P9_specs_19 = {
	sizeof(struct S1AP_ProtocolIE_ContainerList_6614P9),
	offsetof(struct S1AP_ProtocolIE_ContainerList_6614P9, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolIE_ContainerList_6614P9 = {
	"ProtocolIE-ContainerList",
	"ProtocolIE-ContainerList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_S1AP_ProtocolIE_ContainerList_6614P9_tags_19,
	sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P9_tags_19)
		/sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P9_tags_19[0]), /* 1 */
	asn_DEF_S1AP_ProtocolIE_ContainerList_6614P9_tags_19,	/* Same as above */
	sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P9_tags_19)
		/sizeof(asn_DEF_S1AP_ProtocolIE_ContainerList_6614P9_tags_19[0]), /* 1 */
	{ 0, &asn_PER_type_S1AP_ProtocolIE_ContainerList_6614P9_constr_19, SEQUENCE_OF_constraint },
	asn_MBR_S1AP_ProtocolIE_ContainerList_6614P9_19,
	1,	/* Single element */
	&asn_SPC_S1AP_ProtocolIE_ContainerList_6614P9_specs_19	/* Additional specs */
};

