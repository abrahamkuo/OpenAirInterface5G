/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#include "X2AP_SeNBtoMeNBContainer.h"

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_X2AP_SeNBtoMeNBContainer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_X2AP_SeNBtoMeNBContainer = {
	"SeNBtoMeNBContainer",
	"SeNBtoMeNBContainer",
	&asn_OP_OCTET_STRING,
	asn_DEF_X2AP_SeNBtoMeNBContainer_tags_1,
	sizeof(asn_DEF_X2AP_SeNBtoMeNBContainer_tags_1)
		/sizeof(asn_DEF_X2AP_SeNBtoMeNBContainer_tags_1[0]), /* 1 */
	asn_DEF_X2AP_SeNBtoMeNBContainer_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_SeNBtoMeNBContainer_tags_1)
		/sizeof(asn_DEF_X2AP_SeNBtoMeNBContainer_tags_1[0]), /* 1 */
	{ 0, 0, OCTET_STRING_constraint },
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};

