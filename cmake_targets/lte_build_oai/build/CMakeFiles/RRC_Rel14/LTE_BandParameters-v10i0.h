/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_BandParameters_v10i0_H_
#define	_LTE_BandParameters_v10i0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_CA_MIMO_ParametersDL_v10i0;

/* LTE_BandParameters-v10i0 */
typedef struct LTE_BandParameters_v10i0 {
	struct LTE_BandParameters_v10i0__bandParametersDL_v10i0 {
		A_SEQUENCE_OF(struct LTE_CA_MIMO_ParametersDL_v10i0) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} bandParametersDL_v10i0;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_BandParameters_v10i0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_BandParameters_v10i0;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_BandParameters_v10i0_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_BandParameters_v10i0_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CA-MIMO-ParametersDL-v10i0.h"

#endif	/* _LTE_BandParameters_v10i0_H_ */
#include <asn_internal.h>
