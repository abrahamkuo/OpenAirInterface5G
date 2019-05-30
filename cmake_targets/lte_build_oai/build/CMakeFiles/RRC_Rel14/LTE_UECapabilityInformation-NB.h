/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_UECapabilityInformation_NB_H_
#define	_LTE_UECapabilityInformation_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RRC-TransactionIdentifier.h"
#include "LTE_UECapabilityInformation-NB-r13-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_UECapabilityInformation_NB__criticalExtensions_PR {
	LTE_UECapabilityInformation_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	LTE_UECapabilityInformation_NB__criticalExtensions_PR_ueCapabilityInformation_r13,
	LTE_UECapabilityInformation_NB__criticalExtensions_PR_criticalExtensionsFuture
} LTE_UECapabilityInformation_NB__criticalExtensions_PR;

/* LTE_UECapabilityInformation-NB */
typedef struct LTE_UECapabilityInformation_NB {
	LTE_RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct LTE_UECapabilityInformation_NB__criticalExtensions {
		LTE_UECapabilityInformation_NB__criticalExtensions_PR present;
		union LTE_UECapabilityInformation_NB__LTE_criticalExtensions_u {
			LTE_UECapabilityInformation_NB_r13_IEs_t	 ueCapabilityInformation_r13;
			struct LTE_UECapabilityInformation_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UECapabilityInformation_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UECapabilityInformation_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UECapabilityInformation_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UECapabilityInformation_NB_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_UECapabilityInformation_NB_H_ */
#include <asn_internal.h>
