/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#include "X2AP_LastVisitedCell-Item.h"

asn_per_constraints_t asn_PER_type_X2AP_LastVisitedCell_Item_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_X2AP_LastVisitedCell_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_LastVisitedCell_Item, choice.e_UTRAN_Cell),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_LastVisitedEUTRANCellInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-UTRAN-Cell"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_LastVisitedCell_Item, choice.uTRAN_Cell),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_LastVisitedUTRANCellInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uTRAN-Cell"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_LastVisitedCell_Item, choice.gERAN_Cell),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_X2AP_LastVisitedGERANCellInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gERAN-Cell"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_LastVisitedCell_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-UTRAN-Cell */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uTRAN-Cell */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* gERAN-Cell */
};
asn_CHOICE_specifics_t asn_SPC_X2AP_LastVisitedCell_Item_specs_1 = {
	sizeof(struct X2AP_LastVisitedCell_Item),
	offsetof(struct X2AP_LastVisitedCell_Item, _asn_ctx),
	offsetof(struct X2AP_LastVisitedCell_Item, present),
	sizeof(((struct X2AP_LastVisitedCell_Item *)0)->present),
	asn_MAP_X2AP_LastVisitedCell_Item_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_LastVisitedCell_Item = {
	"LastVisitedCell-Item",
	"LastVisitedCell-Item",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_X2AP_LastVisitedCell_Item_constr_1, CHOICE_constraint },
	asn_MBR_X2AP_LastVisitedCell_Item_1,
	3,	/* Elements count */
	&asn_SPC_X2AP_LastVisitedCell_Item_specs_1	/* Additional specs */
};

