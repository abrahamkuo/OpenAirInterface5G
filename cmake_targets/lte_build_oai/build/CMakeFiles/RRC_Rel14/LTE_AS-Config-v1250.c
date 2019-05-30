/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_AS-Config-v1250.h"

asn_TYPE_member_t asn_MBR_LTE_AS_Config_v1250_1[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_AS_Config_v1250, sourceWlan_OffloadConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_WLAN_OffloadConfig_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceWlan-OffloadConfig-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_AS_Config_v1250, sourceSL_CommConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_CommConfig_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceSL-CommConfig-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_AS_Config_v1250, sourceSL_DiscConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_DiscConfig_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceSL-DiscConfig-r12"
		},
};
static const int asn_MAP_LTE_AS_Config_v1250_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_AS_Config_v1250_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_AS_Config_v1250_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sourceWlan-OffloadConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sourceSL-CommConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sourceSL-DiscConfig-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_AS_Config_v1250_specs_1 = {
	sizeof(struct LTE_AS_Config_v1250),
	offsetof(struct LTE_AS_Config_v1250, _asn_ctx),
	asn_MAP_LTE_AS_Config_v1250_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_AS_Config_v1250_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_AS_Config_v1250 = {
	"AS-Config-v1250",
	"AS-Config-v1250",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_AS_Config_v1250_tags_1,
	sizeof(asn_DEF_LTE_AS_Config_v1250_tags_1)
		/sizeof(asn_DEF_LTE_AS_Config_v1250_tags_1[0]), /* 1 */
	asn_DEF_LTE_AS_Config_v1250_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_AS_Config_v1250_tags_1)
		/sizeof(asn_DEF_LTE_AS_Config_v1250_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_AS_Config_v1250_1,
	3,	/* Elements count */
	&asn_SPC_LTE_AS_Config_v1250_specs_1	/* Additional specs */
};

