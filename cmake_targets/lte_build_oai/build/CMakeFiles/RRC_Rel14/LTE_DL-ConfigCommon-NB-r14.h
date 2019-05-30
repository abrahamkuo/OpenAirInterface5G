/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_DL_ConfigCommon_NB_r14_H_
#define	_LTE_DL_ConfigCommon_NB_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_DL-CarrierConfigCommon-NB-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_PCCH_Config_NB_r14;

/* LTE_DL-ConfigCommon-NB-r14 */
typedef struct LTE_DL_ConfigCommon_NB_r14 {
	LTE_DL_CarrierConfigCommon_NB_r14_t	 dl_CarrierConfig_r14;
	struct LTE_PCCH_Config_NB_r14	*pcch_Config_r14;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_DL_ConfigCommon_NB_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_DL_ConfigCommon_NB_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_DL_ConfigCommon_NB_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_DL_ConfigCommon_NB_r14_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PCCH-Config-NB-r14.h"

#endif	/* _LTE_DL_ConfigCommon_NB_r14_H_ */
#include <asn_internal.h>
