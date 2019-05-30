/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_MeasResultForECID-r9.h"

static int
memb_LTE_ue_RxTxTimeDiffResult_r9_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 4095)) {
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
memb_LTE_currentSFN_r9_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_ue_RxTxTimeDiffResult_r9_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 12,  12,  0,  4095 }	/* (0..4095) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_currentSFN_r9_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LTE_MeasResultForECID_r9_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasResultForECID_r9, ue_RxTxTimeDiffResult_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_ue_RxTxTimeDiffResult_r9_constr_2,  memb_LTE_ue_RxTxTimeDiffResult_r9_constraint_1 },
		0, 0, /* No default value */
		"ue-RxTxTimeDiffResult-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasResultForECID_r9, currentSFN_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_currentSFN_r9_constr_3,  memb_LTE_currentSFN_r9_constraint_1 },
		0, 0, /* No default value */
		"currentSFN-r9"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_MeasResultForECID_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_MeasResultForECID_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-RxTxTimeDiffResult-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* currentSFN-r9 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasResultForECID_r9_specs_1 = {
	sizeof(struct LTE_MeasResultForECID_r9),
	offsetof(struct LTE_MeasResultForECID_r9, _asn_ctx),
	asn_MAP_LTE_MeasResultForECID_r9_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_MeasResultForECID_r9 = {
	"MeasResultForECID-r9",
	"MeasResultForECID-r9",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_MeasResultForECID_r9_tags_1,
	sizeof(asn_DEF_LTE_MeasResultForECID_r9_tags_1)
		/sizeof(asn_DEF_LTE_MeasResultForECID_r9_tags_1[0]), /* 1 */
	asn_DEF_LTE_MeasResultForECID_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_MeasResultForECID_r9_tags_1)
		/sizeof(asn_DEF_LTE_MeasResultForECID_r9_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_MeasResultForECID_r9_1,
	2,	/* Elements count */
	&asn_SPC_LTE_MeasResultForECID_r9_specs_1	/* Additional specs */
};

