/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#include "X2AP_WidebandCQICodeword1.h"

static int
memb_X2AP_four_bitCQI_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
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
memb_X2AP_three_bitSpatialDifferentialCQI_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_X2AP_four_bitCQI_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  15 }	/* (0..15,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_X2AP_three_bitSpatialDifferentialCQI_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }	/* (0..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_X2AP_WidebandCQICodeword1_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_X2AP_WidebandCQICodeword1_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_WidebandCQICodeword1, choice.four_bitCQI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_X2AP_four_bitCQI_constr_2,  memb_X2AP_four_bitCQI_constraint_1 },
		0, 0, /* No default value */
		"four-bitCQI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_WidebandCQICodeword1, choice.three_bitSpatialDifferentialCQI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_X2AP_three_bitSpatialDifferentialCQI_constr_3,  memb_X2AP_three_bitSpatialDifferentialCQI_constraint_1 },
		0, 0, /* No default value */
		"three-bitSpatialDifferentialCQI"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_WidebandCQICodeword1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* four-bitCQI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* three-bitSpatialDifferentialCQI */
};
asn_CHOICE_specifics_t asn_SPC_X2AP_WidebandCQICodeword1_specs_1 = {
	sizeof(struct X2AP_WidebandCQICodeword1),
	offsetof(struct X2AP_WidebandCQICodeword1, _asn_ctx),
	offsetof(struct X2AP_WidebandCQICodeword1, present),
	sizeof(((struct X2AP_WidebandCQICodeword1 *)0)->present),
	asn_MAP_X2AP_WidebandCQICodeword1_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_WidebandCQICodeword1 = {
	"WidebandCQICodeword1",
	"WidebandCQICodeword1",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_X2AP_WidebandCQICodeword1_constr_1, CHOICE_constraint },
	asn_MBR_X2AP_WidebandCQICodeword1_1,
	2,	/* Elements count */
	&asn_SPC_X2AP_WidebandCQICodeword1_specs_1	/* Additional specs */
};

