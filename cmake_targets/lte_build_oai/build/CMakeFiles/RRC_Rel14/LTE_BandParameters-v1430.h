/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_BandParameters_v1430_H_
#define	_LTE_BandParameters_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_BandParameters_v1430__ul_256QAM_r14 {
	LTE_BandParameters_v1430__ul_256QAM_r14_supported	= 0
} e_LTE_BandParameters_v1430__ul_256QAM_r14;

/* Forward declarations */
struct LTE_MIMO_CA_ParametersPerBoBC_v1430;
struct LTE_UL_256QAM_perCC_Info_r14;
struct LTE_RetuningTimeInfo_r14;

/* LTE_BandParameters-v1430 */
typedef struct LTE_BandParameters_v1430 {
	struct LTE_MIMO_CA_ParametersPerBoBC_v1430	*bandParametersDL_v1430;	/* OPTIONAL */
	long	*ul_256QAM_r14;	/* OPTIONAL */
	struct LTE_BandParameters_v1430__ul_256QAM_perCC_InfoList_r14 {
		A_SEQUENCE_OF(struct LTE_UL_256QAM_perCC_Info_r14) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ul_256QAM_perCC_InfoList_r14;
	struct LTE_BandParameters_v1430__retuningTimeInfoBandList_r14 {
		A_SEQUENCE_OF(struct LTE_RetuningTimeInfo_r14) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *retuningTimeInfoBandList_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_BandParameters_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ul_256QAM_r14_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_BandParameters_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_BandParameters_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_BandParameters_v1430_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MIMO-CA-ParametersPerBoBC-v1430.h"
#include "LTE_UL-256QAM-perCC-Info-r14.h"
#include "LTE_RetuningTimeInfo-r14.h"

#endif	/* _LTE_BandParameters_v1430_H_ */
#include <asn_internal.h>
