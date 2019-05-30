/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PLMN_IdentityInfo_H_
#define	_LTE_PLMN_IdentityInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PLMN-Identity.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PLMN_IdentityInfo__cellReservedForOperatorUse {
	LTE_PLMN_IdentityInfo__cellReservedForOperatorUse_reserved	= 0,
	LTE_PLMN_IdentityInfo__cellReservedForOperatorUse_notReserved	= 1
} e_LTE_PLMN_IdentityInfo__cellReservedForOperatorUse;

/* LTE_PLMN-IdentityInfo */
typedef struct LTE_PLMN_IdentityInfo {
	LTE_PLMN_Identity_t	 plmn_Identity;
	long	 cellReservedForOperatorUse;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PLMN_IdentityInfo_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_cellReservedForOperatorUse_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PLMN_IdentityInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PLMN_IdentityInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PLMN_IdentityInfo_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PLMN_IdentityInfo_H_ */
#include <asn_internal.h>
