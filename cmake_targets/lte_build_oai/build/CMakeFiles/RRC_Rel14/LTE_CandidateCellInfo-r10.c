/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_CandidateCellInfo-r10.h"

static asn_TYPE_member_t asn_MBR_LTE_ext1_7[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_CandidateCellInfo_r10__ext1, dl_CarrierFreq_v1090),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ARFCN_ValueEUTRA_v9e0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-CarrierFreq-v1090"
		},
};
static const int asn_MAP_LTE_ext1_oms_7[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* dl-CarrierFreq-v1090 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_7 = {
	sizeof(struct LTE_CandidateCellInfo_r10__ext1),
	offsetof(struct LTE_CandidateCellInfo_r10__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_7,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_7,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_7 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_7,
	sizeof(asn_DEF_LTE_ext1_tags_7)
		/sizeof(asn_DEF_LTE_ext1_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_7)
		/sizeof(asn_DEF_LTE_ext1_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_7,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext2_9[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_CandidateCellInfo_r10__ext2, rsrqResult_v1250),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RSRQ_Range_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrqResult-v1250"
		},
};
static const int asn_MAP_LTE_ext2_oms_9[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext2_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext2_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* rsrqResult-v1250 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext2_specs_9 = {
	sizeof(struct LTE_CandidateCellInfo_r10__ext2),
	offsetof(struct LTE_CandidateCellInfo_r10__ext2, _asn_ctx),
	asn_MAP_LTE_ext2_tag2el_9,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext2_oms_9,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext2_9 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext2_tags_9,
	sizeof(asn_DEF_LTE_ext2_tags_9)
		/sizeof(asn_DEF_LTE_ext2_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_ext2_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_ext2_tags_9)
		/sizeof(asn_DEF_LTE_ext2_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext2_9,
	1,	/* Elements count */
	&asn_SPC_LTE_ext2_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext3_11[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_CandidateCellInfo_r10__ext3, rs_sinr_Result_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RS_SINR_Range_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rs-sinr-Result-r13"
		},
};
static const int asn_MAP_LTE_ext3_oms_11[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext3_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext3_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* rs-sinr-Result-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext3_specs_11 = {
	sizeof(struct LTE_CandidateCellInfo_r10__ext3),
	offsetof(struct LTE_CandidateCellInfo_r10__ext3, _asn_ctx),
	asn_MAP_LTE_ext3_tag2el_11,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext3_oms_11,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext3_11 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext3_tags_11,
	sizeof(asn_DEF_LTE_ext3_tags_11)
		/sizeof(asn_DEF_LTE_ext3_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_ext3_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_ext3_tags_11)
		/sizeof(asn_DEF_LTE_ext3_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext3_11,
	1,	/* Elements count */
	&asn_SPC_LTE_ext3_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_CandidateCellInfo_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CandidateCellInfo_r10, physCellId_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CandidateCellInfo_r10, dl_CarrierFreq_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ARFCN_ValueEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-CarrierFreq-r10"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_CandidateCellInfo_r10, rsrpResult_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RSRP_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrpResult-r10"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_CandidateCellInfo_r10, rsrqResult_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RSRQ_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrqResult-r10"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_CandidateCellInfo_r10, ext1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_LTE_ext1_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_CandidateCellInfo_r10, ext2),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_LTE_ext2_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_CandidateCellInfo_r10, ext3),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_LTE_ext3_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext3"
		},
};
static const int asn_MAP_LTE_CandidateCellInfo_r10_oms_1[] = { 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_LTE_CandidateCellInfo_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_CandidateCellInfo_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-CarrierFreq-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rsrpResult-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rsrqResult-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ext3 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_CandidateCellInfo_r10_specs_1 = {
	sizeof(struct LTE_CandidateCellInfo_r10),
	offsetof(struct LTE_CandidateCellInfo_r10, _asn_ctx),
	asn_MAP_LTE_CandidateCellInfo_r10_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_LTE_CandidateCellInfo_r10_oms_1,	/* Optional members */
	2, 3,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_CandidateCellInfo_r10 = {
	"CandidateCellInfo-r10",
	"CandidateCellInfo-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_CandidateCellInfo_r10_tags_1,
	sizeof(asn_DEF_LTE_CandidateCellInfo_r10_tags_1)
		/sizeof(asn_DEF_LTE_CandidateCellInfo_r10_tags_1[0]), /* 1 */
	asn_DEF_LTE_CandidateCellInfo_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_CandidateCellInfo_r10_tags_1)
		/sizeof(asn_DEF_LTE_CandidateCellInfo_r10_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_CandidateCellInfo_r10_1,
	7,	/* Elements count */
	&asn_SPC_LTE_CandidateCellInfo_r10_specs_1	/* Additional specs */
};

