/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SystemInformationBlockType1_v1450_IEs_H_
#define	_LTE_SystemInformationBlockType1_v1450_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_TDD_Config_v1450;

/* LTE_SystemInformationBlockType1-v1450-IEs */
typedef struct LTE_SystemInformationBlockType1_v1450_IEs {
	struct LTE_TDD_Config_v1450	*tdd_Config_v1450;	/* OPTIONAL */
	struct LTE_SystemInformationBlockType1_v1450_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType1_v1450_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType1_v1450_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType1_v1450_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType1_v1450_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_TDD-Config-v1450.h"

#endif	/* _LTE_SystemInformationBlockType1_v1450_IEs_H_ */
#include <asn_internal.h>
