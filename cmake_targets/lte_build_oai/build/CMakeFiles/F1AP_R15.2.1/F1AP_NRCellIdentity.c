/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/F1AP_R15.2.1`
 */

#include "F1AP_NRCellIdentity.h"

int
F1AP_NRCellIdentity_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 36)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using BIT_STRING,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_F1AP_NRCellIdentity_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	36	/* (SIZE(36..36)) */};
asn_per_constraints_t asn_PER_type_F1AP_NRCellIdentity_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  36,  36 }	/* (SIZE(36..36)) */,
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_F1AP_NRCellIdentity_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (3 << 2))
};
asn_TYPE_descriptor_t asn_DEF_F1AP_NRCellIdentity = {
	"NRCellIdentity",
	"NRCellIdentity",
	&asn_OP_BIT_STRING,
	asn_DEF_F1AP_NRCellIdentity_tags_1,
	sizeof(asn_DEF_F1AP_NRCellIdentity_tags_1)
		/sizeof(asn_DEF_F1AP_NRCellIdentity_tags_1[0]), /* 1 */
	asn_DEF_F1AP_NRCellIdentity_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_NRCellIdentity_tags_1)
		/sizeof(asn_DEF_F1AP_NRCellIdentity_tags_1[0]), /* 1 */
	{ &asn_OER_type_F1AP_NRCellIdentity_constr_1, &asn_PER_type_F1AP_NRCellIdentity_constr_1, F1AP_NRCellIdentity_constraint },
	0, 0,	/* No members */
	&asn_SPC_BIT_STRING_specs	/* Additional specs */
};

