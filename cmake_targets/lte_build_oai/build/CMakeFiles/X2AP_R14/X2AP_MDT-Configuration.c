/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#include "X2AP_MDT-Configuration.h"

#include "X2AP_M1ThresholdEventA2.h"
#include "X2AP_M1PeriodicReporting.h"
#include "X2AP_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_X2AP_MDT_Configuration_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_MDT_Configuration, mdt_Activation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_MDT_Activation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mdt-Activation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_MDT_Configuration, areaScopeOfMDT),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_X2AP_AreaScopeOfMDT,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"areaScopeOfMDT"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_MDT_Configuration, measurementsToActivate),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_MeasurementsToActivate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measurementsToActivate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_MDT_Configuration, m1reportingTrigger),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_M1ReportingTrigger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"m1reportingTrigger"
		},
	{ ATF_POINTER, 3, offsetof(struct X2AP_MDT_Configuration, m1thresholdeventA2),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_M1ThresholdEventA2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"m1thresholdeventA2"
		},
	{ ATF_POINTER, 2, offsetof(struct X2AP_MDT_Configuration, m1periodicReporting),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_M1PeriodicReporting,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"m1periodicReporting"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_MDT_Configuration, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_5040P95,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2AP_MDT_Configuration_oms_1[] = { 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_X2AP_MDT_Configuration_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_MDT_Configuration_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mdt-Activation */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* areaScopeOfMDT */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measurementsToActivate */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* m1reportingTrigger */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* m1thresholdeventA2 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* m1periodicReporting */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_X2AP_MDT_Configuration_specs_1 = {
	sizeof(struct X2AP_MDT_Configuration),
	offsetof(struct X2AP_MDT_Configuration, _asn_ctx),
	asn_MAP_X2AP_MDT_Configuration_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_X2AP_MDT_Configuration_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_MDT_Configuration = {
	"MDT-Configuration",
	"MDT-Configuration",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_MDT_Configuration_tags_1,
	sizeof(asn_DEF_X2AP_MDT_Configuration_tags_1)
		/sizeof(asn_DEF_X2AP_MDT_Configuration_tags_1[0]), /* 1 */
	asn_DEF_X2AP_MDT_Configuration_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_MDT_Configuration_tags_1)
		/sizeof(asn_DEF_X2AP_MDT_Configuration_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_MDT_Configuration_1,
	7,	/* Elements count */
	&asn_SPC_X2AP_MDT_Configuration_specs_1	/* Additional specs */
};

