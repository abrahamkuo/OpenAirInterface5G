/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/F1AP_R15.2.1`
 */

#include "F1AP_GNB-DU-System-Information.h"

#include "F1AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_F1AP_GNB_DU_System_Information_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_GNB_DU_System_Information, mIB_message),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_MIB_message,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mIB-message"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_GNB_DU_System_Information, sIB1_message),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_SIB1_message,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sIB1-message"
		},
	{ ATF_POINTER, 1, offsetof(struct F1AP_GNB_DU_System_Information, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_ProtocolExtensionContainer_160P53,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_F1AP_GNB_DU_System_Information_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_F1AP_GNB_DU_System_Information_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_F1AP_GNB_DU_System_Information_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mIB-message */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sIB1-message */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_F1AP_GNB_DU_System_Information_specs_1 = {
	sizeof(struct F1AP_GNB_DU_System_Information),
	offsetof(struct F1AP_GNB_DU_System_Information, _asn_ctx),
	asn_MAP_F1AP_GNB_DU_System_Information_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_F1AP_GNB_DU_System_Information_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_F1AP_GNB_DU_System_Information = {
	"GNB-DU-System-Information",
	"GNB-DU-System-Information",
	&asn_OP_SEQUENCE,
	asn_DEF_F1AP_GNB_DU_System_Information_tags_1,
	sizeof(asn_DEF_F1AP_GNB_DU_System_Information_tags_1)
		/sizeof(asn_DEF_F1AP_GNB_DU_System_Information_tags_1[0]), /* 1 */
	asn_DEF_F1AP_GNB_DU_System_Information_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_GNB_DU_System_Information_tags_1)
		/sizeof(asn_DEF_F1AP_GNB_DU_System_Information_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_F1AP_GNB_DU_System_Information_1,
	3,	/* Elements count */
	&asn_SPC_F1AP_GNB_DU_System_Information_specs_1	/* Additional specs */
};

