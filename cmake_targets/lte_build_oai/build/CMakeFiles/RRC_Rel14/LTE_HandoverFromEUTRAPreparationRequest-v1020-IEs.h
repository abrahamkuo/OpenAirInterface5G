/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs_H_
#define	_LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs__dualRxTxRedirectIndicator_r10 {
	LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs__dualRxTxRedirectIndicator_r10_true	= 0
} e_LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs__dualRxTxRedirectIndicator_r10;

/* Forward declarations */
struct LTE_CarrierFreqCDMA2000;

/* LTE_HandoverFromEUTRAPreparationRequest-v1020-IEs */
typedef struct LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs {
	long	*dualRxTxRedirectIndicator_r10;	/* OPTIONAL */
	struct LTE_CarrierFreqCDMA2000	*redirectCarrierCDMA2000_1XRTT_r10;	/* OPTIONAL */
	struct LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_dualRxTxRedirectIndicator_r10_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CarrierFreqCDMA2000.h"

#endif	/* _LTE_HandoverFromEUTRAPreparationRequest_v1020_IEs_H_ */
#include <asn_internal.h>
