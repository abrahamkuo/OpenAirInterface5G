/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_DRB_InfoSCG_r12_H_
#define	_LTE_DRB_InfoSCG_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "LTE_DRB-Identity.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_DRB_InfoSCG_r12__drb_Type_r12 {
	LTE_DRB_InfoSCG_r12__drb_Type_r12_split	= 0,
	LTE_DRB_InfoSCG_r12__drb_Type_r12_scg	= 1
} e_LTE_DRB_InfoSCG_r12__drb_Type_r12;

/* LTE_DRB-InfoSCG-r12 */
typedef struct LTE_DRB_InfoSCG_r12 {
	long	*eps_BearerIdentity_r12;	/* OPTIONAL */
	LTE_DRB_Identity_t	 drb_Identity_r12;
	long	*drb_Type_r12;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_DRB_InfoSCG_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_drb_Type_r12_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_DRB_InfoSCG_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_DRB_InfoSCG_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_DRB_InfoSCG_r12_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_DRB_InfoSCG_r12_H_ */
#include <asn_internal.h>
