/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-PDU-Contents"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-PDU-Contents.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/F1AP_R15.2.1`
 */

#include "F1AP_F1SetupResponse.h"

asn_TYPE_member_t asn_MBR_F1AP_F1SetupResponse_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_F1SetupResponse, protocolIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_ProtocolIE_Container_123P4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"protocolIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_F1AP_F1SetupResponse_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_F1AP_F1SetupResponse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* protocolIEs */
};
asn_SEQUENCE_specifics_t asn_SPC_F1AP_F1SetupResponse_specs_1 = {
	sizeof(struct F1AP_F1SetupResponse),
	offsetof(struct F1AP_F1SetupResponse, _asn_ctx),
	asn_MAP_F1AP_F1SetupResponse_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_F1AP_F1SetupResponse = {
	"F1SetupResponse",
	"F1SetupResponse",
	&asn_OP_SEQUENCE,
	asn_DEF_F1AP_F1SetupResponse_tags_1,
	sizeof(asn_DEF_F1AP_F1SetupResponse_tags_1)
		/sizeof(asn_DEF_F1AP_F1SetupResponse_tags_1[0]), /* 1 */
	asn_DEF_F1AP_F1SetupResponse_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_F1SetupResponse_tags_1)
		/sizeof(asn_DEF_F1AP_F1SetupResponse_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_F1AP_F1SetupResponse_1,
	1,	/* Elements count */
	&asn_SPC_F1AP_F1SetupResponse_specs_1	/* Additional specs */
};

