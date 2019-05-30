/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_UDT_RestrictingPerPLMN_r13_H_
#define	_LTE_UDT_RestrictingPerPLMN_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_UDT_Restricting_r13;

/* LTE_UDT-RestrictingPerPLMN-r13 */
typedef struct LTE_UDT_RestrictingPerPLMN_r13 {
	long	 plmn_IdentityIndex_r13;
	struct LTE_UDT_Restricting_r13	*udt_Restricting_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UDT_RestrictingPerPLMN_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UDT_RestrictingPerPLMN_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UDT_RestrictingPerPLMN_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UDT_RestrictingPerPLMN_r13_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_UDT-Restricting-r13.h"

#endif	/* _LTE_UDT_RestrictingPerPLMN_r13_H_ */
#include <asn_internal.h>
