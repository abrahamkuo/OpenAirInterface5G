/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_MBMS-NotificationConfig-r9.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_notificationOffset_r9_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_notificationSF_Index_r9_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 6)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_notificationRepetitionCoeff_r9_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_notificationOffset_r9_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  10 }	/* (0..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_notificationSF_Index_r9_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (1..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_notificationRepetitionCoeff_r9_value2enum_2[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" }
};
static const unsigned int asn_MAP_LTE_notificationRepetitionCoeff_r9_enum2value_2[] = {
	0,	/* n2(0) */
	1	/* n4(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_notificationRepetitionCoeff_r9_specs_2 = {
	asn_MAP_LTE_notificationRepetitionCoeff_r9_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_notificationRepetitionCoeff_r9_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_notificationRepetitionCoeff_r9_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_notificationRepetitionCoeff_r9_2 = {
	"notificationRepetitionCoeff-r9",
	"notificationRepetitionCoeff-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_notificationRepetitionCoeff_r9_tags_2,
	sizeof(asn_DEF_LTE_notificationRepetitionCoeff_r9_tags_2)
		/sizeof(asn_DEF_LTE_notificationRepetitionCoeff_r9_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_notificationRepetitionCoeff_r9_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_notificationRepetitionCoeff_r9_tags_2)
		/sizeof(asn_DEF_LTE_notificationRepetitionCoeff_r9_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_notificationRepetitionCoeff_r9_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_notificationRepetitionCoeff_r9_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_MBMS_NotificationConfig_r9_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MBMS_NotificationConfig_r9, notificationRepetitionCoeff_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_notificationRepetitionCoeff_r9_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"notificationRepetitionCoeff-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MBMS_NotificationConfig_r9, notificationOffset_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_notificationOffset_r9_constr_5,  memb_LTE_notificationOffset_r9_constraint_1 },
		0, 0, /* No default value */
		"notificationOffset-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MBMS_NotificationConfig_r9, notificationSF_Index_r9),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_notificationSF_Index_r9_constr_6,  memb_LTE_notificationSF_Index_r9_constraint_1 },
		0, 0, /* No default value */
		"notificationSF-Index-r9"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_MBMS_NotificationConfig_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_MBMS_NotificationConfig_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* notificationRepetitionCoeff-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* notificationOffset-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* notificationSF-Index-r9 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_MBMS_NotificationConfig_r9_specs_1 = {
	sizeof(struct LTE_MBMS_NotificationConfig_r9),
	offsetof(struct LTE_MBMS_NotificationConfig_r9, _asn_ctx),
	asn_MAP_LTE_MBMS_NotificationConfig_r9_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_MBMS_NotificationConfig_r9 = {
	"MBMS-NotificationConfig-r9",
	"MBMS-NotificationConfig-r9",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_MBMS_NotificationConfig_r9_tags_1,
	sizeof(asn_DEF_LTE_MBMS_NotificationConfig_r9_tags_1)
		/sizeof(asn_DEF_LTE_MBMS_NotificationConfig_r9_tags_1[0]), /* 1 */
	asn_DEF_LTE_MBMS_NotificationConfig_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_MBMS_NotificationConfig_r9_tags_1)
		/sizeof(asn_DEF_LTE_MBMS_NotificationConfig_r9_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_MBMS_NotificationConfig_r9_1,
	3,	/* Elements count */
	&asn_SPC_LTE_MBMS_NotificationConfig_r9_specs_1	/* Additional specs */
};

