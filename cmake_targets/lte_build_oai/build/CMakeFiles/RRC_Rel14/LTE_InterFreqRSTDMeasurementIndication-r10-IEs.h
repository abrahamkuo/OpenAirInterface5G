/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_InterFreqRSTDMeasurementIndication_r10_IEs_H_
#define	_LTE_InterFreqRSTDMeasurementIndication_r10_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <NULL.h>
#include "LTE_RSTD-InterFreqInfoList-r10.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10_PR {
	LTE_InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10_PR_NOTHING,	/* No components present */
	LTE_InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10_PR_start,
	LTE_InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10_PR_stop
} LTE_InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10_PR;

/* LTE_InterFreqRSTDMeasurementIndication-r10-IEs */
typedef struct LTE_InterFreqRSTDMeasurementIndication_r10_IEs {
	struct LTE_InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10 {
		LTE_InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10_PR present;
		union LTE_InterFreqRSTDMeasurementIndication_r10_IEs__LTE_rstd_InterFreqIndication_r10_u {
			struct LTE_InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10__start {
				LTE_RSTD_InterFreqInfoList_r10_t	 rstd_InterFreqInfoList_r10;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} start;
			NULL_t	 stop;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} rstd_InterFreqIndication_r10;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct LTE_InterFreqRSTDMeasurementIndication_r10_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_InterFreqRSTDMeasurementIndication_r10_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_InterFreqRSTDMeasurementIndication_r10_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_InterFreqRSTDMeasurementIndication_r10_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_InterFreqRSTDMeasurementIndication_r10_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_InterFreqRSTDMeasurementIndication_r10_IEs_H_ */
#include <asn_internal.h>
