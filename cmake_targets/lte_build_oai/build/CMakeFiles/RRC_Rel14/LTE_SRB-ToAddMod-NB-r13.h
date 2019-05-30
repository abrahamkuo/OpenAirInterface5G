/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SRB_ToAddMod_NB_r13_H_
#define	_LTE_SRB_ToAddMod_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RLC-Config-NB-r13.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include "LTE_LogicalChannelConfig-NB-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SRB_ToAddMod_NB_r13__rlc_Config_r13_PR {
	LTE_SRB_ToAddMod_NB_r13__rlc_Config_r13_PR_NOTHING,	/* No components present */
	LTE_SRB_ToAddMod_NB_r13__rlc_Config_r13_PR_explicitValue,
	LTE_SRB_ToAddMod_NB_r13__rlc_Config_r13_PR_defaultValue
} LTE_SRB_ToAddMod_NB_r13__rlc_Config_r13_PR;
typedef enum LTE_SRB_ToAddMod_NB_r13__logicalChannelConfig_r13_PR {
	LTE_SRB_ToAddMod_NB_r13__logicalChannelConfig_r13_PR_NOTHING,	/* No components present */
	LTE_SRB_ToAddMod_NB_r13__logicalChannelConfig_r13_PR_explicitValue,
	LTE_SRB_ToAddMod_NB_r13__logicalChannelConfig_r13_PR_defaultValue
} LTE_SRB_ToAddMod_NB_r13__logicalChannelConfig_r13_PR;

/* Forward declarations */
struct LTE_RLC_Config_NB_v1430;

/* LTE_SRB-ToAddMod-NB-r13 */
typedef struct LTE_SRB_ToAddMod_NB_r13 {
	struct LTE_SRB_ToAddMod_NB_r13__rlc_Config_r13 {
		LTE_SRB_ToAddMod_NB_r13__rlc_Config_r13_PR present;
		union LTE_SRB_ToAddMod_NB_r13__LTE_rlc_Config_r13_u {
			LTE_RLC_Config_NB_r13_t	 explicitValue;
			NULL_t	 defaultValue;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rlc_Config_r13;
	struct LTE_SRB_ToAddMod_NB_r13__logicalChannelConfig_r13 {
		LTE_SRB_ToAddMod_NB_r13__logicalChannelConfig_r13_PR present;
		union LTE_SRB_ToAddMod_NB_r13__LTE_logicalChannelConfig_r13_u {
			LTE_LogicalChannelConfig_NB_r13_t	 explicitValue;
			NULL_t	 defaultValue;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *logicalChannelConfig_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_SRB_ToAddMod_NB_r13__ext1 {
		struct LTE_RLC_Config_NB_v1430	*rlc_Config_v1430;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SRB_ToAddMod_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SRB_ToAddMod_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SRB_ToAddMod_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SRB_ToAddMod_NB_r13_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_RLC-Config-NB-v1430.h"

#endif	/* _LTE_SRB_ToAddMod_NB_r13_H_ */
#include <asn_internal.h>
