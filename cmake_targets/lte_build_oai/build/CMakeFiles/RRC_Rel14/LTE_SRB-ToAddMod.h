/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SRB_ToAddMod_H_
#define	_LTE_SRB_ToAddMod_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "LTE_RLC-Config.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include "LTE_LogicalChannelConfig.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SRB_ToAddMod__rlc_Config_PR {
	LTE_SRB_ToAddMod__rlc_Config_PR_NOTHING,	/* No components present */
	LTE_SRB_ToAddMod__rlc_Config_PR_explicitValue,
	LTE_SRB_ToAddMod__rlc_Config_PR_defaultValue
} LTE_SRB_ToAddMod__rlc_Config_PR;
typedef enum LTE_SRB_ToAddMod__logicalChannelConfig_PR {
	LTE_SRB_ToAddMod__logicalChannelConfig_PR_NOTHING,	/* No components present */
	LTE_SRB_ToAddMod__logicalChannelConfig_PR_explicitValue,
	LTE_SRB_ToAddMod__logicalChannelConfig_PR_defaultValue
} LTE_SRB_ToAddMod__logicalChannelConfig_PR;

/* LTE_SRB-ToAddMod */
typedef struct LTE_SRB_ToAddMod {
	long	 srb_Identity;
	struct LTE_SRB_ToAddMod__rlc_Config {
		LTE_SRB_ToAddMod__rlc_Config_PR present;
		union LTE_SRB_ToAddMod__LTE_rlc_Config_u {
			LTE_RLC_Config_t	 explicitValue;
			NULL_t	 defaultValue;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rlc_Config;
	struct LTE_SRB_ToAddMod__logicalChannelConfig {
		LTE_SRB_ToAddMod__logicalChannelConfig_PR present;
		union LTE_SRB_ToAddMod__LTE_logicalChannelConfig_u {
			LTE_LogicalChannelConfig_t	 explicitValue;
			NULL_t	 defaultValue;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *logicalChannelConfig;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SRB_ToAddMod_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SRB_ToAddMod;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SRB_ToAddMod_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SRB_ToAddMod_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SRB_ToAddMod_H_ */
#include <asn_internal.h>
