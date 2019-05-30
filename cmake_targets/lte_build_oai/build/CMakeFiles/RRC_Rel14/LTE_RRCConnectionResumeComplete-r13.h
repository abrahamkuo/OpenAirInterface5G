/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RRCConnectionResumeComplete_r13_H_
#define	_LTE_RRCConnectionResumeComplete_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RRC-TransactionIdentifier.h"
#include "LTE_RRCConnectionResumeComplete-r13-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RRCConnectionResumeComplete_r13__criticalExtensions_PR {
	LTE_RRCConnectionResumeComplete_r13__criticalExtensions_PR_NOTHING,	/* No components present */
	LTE_RRCConnectionResumeComplete_r13__criticalExtensions_PR_rrcConnectionResumeComplete_r13,
	LTE_RRCConnectionResumeComplete_r13__criticalExtensions_PR_criticalExtensionsFuture
} LTE_RRCConnectionResumeComplete_r13__criticalExtensions_PR;

/* LTE_RRCConnectionResumeComplete-r13 */
typedef struct LTE_RRCConnectionResumeComplete_r13 {
	LTE_RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct LTE_RRCConnectionResumeComplete_r13__criticalExtensions {
		LTE_RRCConnectionResumeComplete_r13__criticalExtensions_PR present;
		union LTE_RRCConnectionResumeComplete_r13__LTE_criticalExtensions_u {
			LTE_RRCConnectionResumeComplete_r13_IEs_t	 rrcConnectionResumeComplete_r13;
			struct LTE_RRCConnectionResumeComplete_r13__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCConnectionResumeComplete_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionResumeComplete_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionResumeComplete_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCConnectionResumeComplete_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RRCConnectionResumeComplete_r13_H_ */
#include <asn_internal.h>
