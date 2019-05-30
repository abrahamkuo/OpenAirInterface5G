/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_HandoverPreparationInformation_v920_IEs_H_
#define	_LTE_HandoverPreparationInformation_v920_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9 {
	LTE_HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_rel9	= 0,
	LTE_HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_rel10	= 1,
	LTE_HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_rel11	= 2,
	LTE_HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_rel12	= 3,
	LTE_HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_v10j0	= 4,
	LTE_HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_v11e0	= 5,
	LTE_HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_v1280	= 6,
	LTE_HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_rel13	= 7,
	/*
	 * Enumeration is extensible
	 */
	LTE_HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_rel14	= 8
} e_LTE_HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9;

/* Forward declarations */
struct LTE_HandoverPreparationInformation_v9d0_IEs;

/* LTE_HandoverPreparationInformation-v920-IEs */
typedef struct LTE_HandoverPreparationInformation_v920_IEs {
	long	*ue_ConfigRelease_r9;	/* OPTIONAL */
	struct LTE_HandoverPreparationInformation_v9d0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_HandoverPreparationInformation_v920_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ue_ConfigRelease_r9_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_HandoverPreparationInformation_v920_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_HandoverPreparationInformation_v920_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_HandoverPreparationInformation_v920_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_HandoverPreparationInformation-v9d0-IEs.h"

#endif	/* _LTE_HandoverPreparationInformation_v920_IEs_H_ */
#include <asn_internal.h>
