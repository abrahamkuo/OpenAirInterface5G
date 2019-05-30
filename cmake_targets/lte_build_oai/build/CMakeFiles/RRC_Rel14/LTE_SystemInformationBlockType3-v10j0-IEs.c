/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SystemInformationBlockType3-v10j0-IEs.h"

static asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType3_v10j0_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_SystemInformationBlockType3_v10j0_IEs, freqBandInfo_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_NS_PmaxList_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqBandInfo-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType3_v10j0_IEs, multiBandInfoList_v10j0),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MultiBandInfoList_v10j0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multiBandInfoList-v10j0"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType3_v10j0_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SystemInformationBlockType3_v10l0_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_SystemInformationBlockType3_v10j0_IEs_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_SystemInformationBlockType3_v10j0_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SystemInformationBlockType3_v10j0_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* freqBandInfo-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* multiBandInfoList-v10j0 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType3_v10j0_IEs_specs_1 = {
	sizeof(struct LTE_SystemInformationBlockType3_v10j0_IEs),
	offsetof(struct LTE_SystemInformationBlockType3_v10j0_IEs, _asn_ctx),
	asn_MAP_LTE_SystemInformationBlockType3_v10j0_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_SystemInformationBlockType3_v10j0_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType3_v10j0_IEs = {
	"SystemInformationBlockType3-v10j0-IEs",
	"SystemInformationBlockType3-v10j0-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SystemInformationBlockType3_v10j0_IEs_tags_1,
	sizeof(asn_DEF_LTE_SystemInformationBlockType3_v10j0_IEs_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType3_v10j0_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_SystemInformationBlockType3_v10j0_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SystemInformationBlockType3_v10j0_IEs_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType3_v10j0_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SystemInformationBlockType3_v10j0_IEs_1,
	3,	/* Elements count */
	&asn_SPC_LTE_SystemInformationBlockType3_v10j0_IEs_specs_1	/* Additional specs */
};

