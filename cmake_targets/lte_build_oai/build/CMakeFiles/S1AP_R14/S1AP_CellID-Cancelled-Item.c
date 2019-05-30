/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#include "S1AP_CellID-Cancelled-Item.h"

#include "S1AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_S1AP_CellID_Cancelled_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_CellID_Cancelled_Item, eCGI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_EUTRAN_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eCGI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_CellID_Cancelled_Item, numberOfBroadcasts),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_NumberOfBroadcasts,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"numberOfBroadcasts"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_CellID_Cancelled_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_6628P30,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_CellID_Cancelled_Item_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_S1AP_CellID_Cancelled_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_CellID_Cancelled_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eCGI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* numberOfBroadcasts */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_S1AP_CellID_Cancelled_Item_specs_1 = {
	sizeof(struct S1AP_CellID_Cancelled_Item),
	offsetof(struct S1AP_CellID_Cancelled_Item, _asn_ctx),
	asn_MAP_S1AP_CellID_Cancelled_Item_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_S1AP_CellID_Cancelled_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_CellID_Cancelled_Item = {
	"CellID-Cancelled-Item",
	"CellID-Cancelled-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_CellID_Cancelled_Item_tags_1,
	sizeof(asn_DEF_S1AP_CellID_Cancelled_Item_tags_1)
		/sizeof(asn_DEF_S1AP_CellID_Cancelled_Item_tags_1[0]), /* 1 */
	asn_DEF_S1AP_CellID_Cancelled_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_CellID_Cancelled_Item_tags_1)
		/sizeof(asn_DEF_S1AP_CellID_Cancelled_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_CellID_Cancelled_Item_1,
	3,	/* Elements count */
	&asn_SPC_S1AP_CellID_Cancelled_Item_specs_1	/* Additional specs */
};

