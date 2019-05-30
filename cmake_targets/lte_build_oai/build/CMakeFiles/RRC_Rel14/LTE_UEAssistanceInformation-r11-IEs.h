/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_UEAssistanceInformation_r11_IEs_H_
#define	_LTE_UEAssistanceInformation_r11_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_UEAssistanceInformation_r11_IEs__powerPrefIndication_r11 {
	LTE_UEAssistanceInformation_r11_IEs__powerPrefIndication_r11_normal	= 0,
	LTE_UEAssistanceInformation_r11_IEs__powerPrefIndication_r11_lowPowerConsumption	= 1
} e_LTE_UEAssistanceInformation_r11_IEs__powerPrefIndication_r11;

/* Forward declarations */
struct LTE_UEAssistanceInformation_v1430_IEs;

/* LTE_UEAssistanceInformation-r11-IEs */
typedef struct LTE_UEAssistanceInformation_r11_IEs {
	long	*powerPrefIndication_r11;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct LTE_UEAssistanceInformation_v1430_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UEAssistanceInformation_r11_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_powerPrefIndication_r11_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UEAssistanceInformation_r11_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UEAssistanceInformation_r11_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UEAssistanceInformation_r11_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_UEAssistanceInformation-v1430-IEs.h"

#endif	/* _LTE_UEAssistanceInformation_r11_IEs_H_ */
#include <asn_internal.h>
