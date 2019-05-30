/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#include "X2AP_DynamicDLTransmissionInformation.h"

static asn_per_constraints_t asn_PER_type_X2AP_DynamicDLTransmissionInformation_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_X2AP_DynamicDLTransmissionInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_DynamicDLTransmissionInformation, choice.naics_active),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_DynamicNAICSInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"naics-active"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_DynamicDLTransmissionInformation, choice.naics_inactive),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"naics-inactive"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_DynamicDLTransmissionInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* naics-active */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* naics-inactive */
};
static asn_CHOICE_specifics_t asn_SPC_X2AP_DynamicDLTransmissionInformation_specs_1 = {
	sizeof(struct X2AP_DynamicDLTransmissionInformation),
	offsetof(struct X2AP_DynamicDLTransmissionInformation, _asn_ctx),
	offsetof(struct X2AP_DynamicDLTransmissionInformation, present),
	sizeof(((struct X2AP_DynamicDLTransmissionInformation *)0)->present),
	asn_MAP_X2AP_DynamicDLTransmissionInformation_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_DynamicDLTransmissionInformation = {
	"DynamicDLTransmissionInformation",
	"DynamicDLTransmissionInformation",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_X2AP_DynamicDLTransmissionInformation_constr_1, CHOICE_constraint },
	asn_MBR_X2AP_DynamicDLTransmissionInformation_1,
	2,	/* Elements count */
	&asn_SPC_X2AP_DynamicDLTransmissionInformation_specs_1	/* Additional specs */
};

