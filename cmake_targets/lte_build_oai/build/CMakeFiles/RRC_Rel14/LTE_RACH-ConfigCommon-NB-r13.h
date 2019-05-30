/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RACH_ConfigCommon_NB_r13_H_
#define	_LTE_RACH_ConfigCommon_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PreambleTransMax.h"
#include "LTE_PowerRampingParameters.h"
#include "LTE_RACH-InfoList-NB-r13.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_PowerRampingParameters_NB_v1450;

/* LTE_RACH-ConfigCommon-NB-r13 */
typedef struct LTE_RACH_ConfigCommon_NB_r13 {
	LTE_PreambleTransMax_t	 preambleTransMax_CE_r13;
	LTE_PowerRampingParameters_t	 powerRampingParameters_r13;
	LTE_RACH_InfoList_NB_r13_t	 rach_InfoList_r13;
	long	*connEstFailOffset_r13;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_RACH_ConfigCommon_NB_r13__ext1 {
		struct LTE_PowerRampingParameters_NB_v1450	*powerRampingParameters_v1450;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RACH_ConfigCommon_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RACH_ConfigCommon_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RACH_ConfigCommon_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RACH_ConfigCommon_NB_r13_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PowerRampingParameters-NB-v1450.h"

#endif	/* _LTE_RACH_ConfigCommon_NB_r13_H_ */
#include <asn_internal.h>
