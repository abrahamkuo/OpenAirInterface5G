/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/F1AP_R15.2.1`
 */

#include "F1AP_CellGroupConfig.h"

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_F1AP_CellGroupConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_F1AP_CellGroupConfig = {
	"CellGroupConfig",
	"CellGroupConfig",
	&asn_OP_OCTET_STRING,
	asn_DEF_F1AP_CellGroupConfig_tags_1,
	sizeof(asn_DEF_F1AP_CellGroupConfig_tags_1)
		/sizeof(asn_DEF_F1AP_CellGroupConfig_tags_1[0]), /* 1 */
	asn_DEF_F1AP_CellGroupConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_CellGroupConfig_tags_1)
		/sizeof(asn_DEF_F1AP_CellGroupConfig_tags_1[0]), /* 1 */
	{ 0, 0, OCTET_STRING_constraint },
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};

