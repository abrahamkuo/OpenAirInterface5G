/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SL-TxPower-r14.h"

static int
memb_LTE_txPower_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -41 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_txPower_r14_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -41,  31 }	/* (-41..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_LTE_SL_TxPower_r14_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LTE_SL_TxPower_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_TxPower_r14, choice.minusinfinity_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"minusinfinity-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_TxPower_r14, choice.txPower_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_txPower_r14_constr_3,  memb_LTE_txPower_r14_constraint_1 },
		0, 0, /* No default value */
		"txPower-r14"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SL_TxPower_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* minusinfinity-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* txPower-r14 */
};
asn_CHOICE_specifics_t asn_SPC_LTE_SL_TxPower_r14_specs_1 = {
	sizeof(struct LTE_SL_TxPower_r14),
	offsetof(struct LTE_SL_TxPower_r14, _asn_ctx),
	offsetof(struct LTE_SL_TxPower_r14, present),
	sizeof(((struct LTE_SL_TxPower_r14 *)0)->present),
	asn_MAP_LTE_SL_TxPower_r14_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SL_TxPower_r14 = {
	"SL-TxPower-r14",
	"SL-TxPower-r14",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_SL_TxPower_r14_constr_1, CHOICE_constraint },
	asn_MBR_LTE_SL_TxPower_r14_1,
	2,	/* Elements count */
	&asn_SPC_LTE_SL_TxPower_r14_specs_1	/* Additional specs */
};

