/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_DRB_ToAddMod_H_
#define	_LTE_DRB_ToAddMod_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "LTE_DRB-Identity.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <BOOLEAN.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_DRB_ToAddMod__ext1__drb_TypeChange_r12 {
	LTE_DRB_ToAddMod__ext1__drb_TypeChange_r12_toMCG	= 0
} e_LTE_DRB_ToAddMod__ext1__drb_TypeChange_r12;
typedef enum LTE_DRB_ToAddMod__ext2__drb_TypeLWIP_r13 {
	LTE_DRB_ToAddMod__ext2__drb_TypeLWIP_r13_lwip	= 0,
	LTE_DRB_ToAddMod__ext2__drb_TypeLWIP_r13_lwip_DL_only	= 1,
	LTE_DRB_ToAddMod__ext2__drb_TypeLWIP_r13_lwip_UL_only	= 2,
	LTE_DRB_ToAddMod__ext2__drb_TypeLWIP_r13_eutran	= 3
} e_LTE_DRB_ToAddMod__ext2__drb_TypeLWIP_r13;
typedef enum LTE_DRB_ToAddMod__ext3__lwa_WLAN_AC_r14 {
	LTE_DRB_ToAddMod__ext3__lwa_WLAN_AC_r14_ac_bk	= 0,
	LTE_DRB_ToAddMod__ext3__lwa_WLAN_AC_r14_ac_be	= 1,
	LTE_DRB_ToAddMod__ext3__lwa_WLAN_AC_r14_ac_vi	= 2,
	LTE_DRB_ToAddMod__ext3__lwa_WLAN_AC_r14_ac_vo	= 3
} e_LTE_DRB_ToAddMod__ext3__lwa_WLAN_AC_r14;

/* Forward declarations */
struct LTE_PDCP_Config;
struct LTE_RLC_Config;
struct LTE_LogicalChannelConfig;
struct LTE_RLC_Config_v1250;
struct LTE_RLC_Config_v1310;
struct LTE_RLC_Config_v1430;

/* LTE_DRB-ToAddMod */
typedef struct LTE_DRB_ToAddMod {
	long	*eps_BearerIdentity;	/* OPTIONAL */
	LTE_DRB_Identity_t	 drb_Identity;
	struct LTE_PDCP_Config	*pdcp_Config;	/* OPTIONAL */
	struct LTE_RLC_Config	*rlc_Config;	/* OPTIONAL */
	long	*logicalChannelIdentity;	/* OPTIONAL */
	struct LTE_LogicalChannelConfig	*logicalChannelConfig;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_DRB_ToAddMod__ext1 {
		long	*drb_TypeChange_r12;	/* OPTIONAL */
		struct LTE_RLC_Config_v1250	*rlc_Config_v1250;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_DRB_ToAddMod__ext2 {
		struct LTE_RLC_Config_v1310	*rlc_Config_v1310;	/* OPTIONAL */
		BOOLEAN_t	*drb_TypeLWA_r13;	/* OPTIONAL */
		long	*drb_TypeLWIP_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_DRB_ToAddMod__ext3 {
		struct LTE_RLC_Config_v1430	*rlc_Config_v1430;	/* OPTIONAL */
		BOOLEAN_t	*lwip_UL_Aggregation_r14;	/* OPTIONAL */
		BOOLEAN_t	*lwip_DL_Aggregation_r14;	/* OPTIONAL */
		long	*lwa_WLAN_AC_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_DRB_ToAddMod_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_drb_TypeChange_r12_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_drb_TypeLWIP_r13_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_lwa_WLAN_AC_r14_25;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_DRB_ToAddMod;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_DRB_ToAddMod_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_DRB_ToAddMod_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PDCP-Config.h"
#include "LTE_RLC-Config.h"
#include "LTE_LogicalChannelConfig.h"
#include "LTE_RLC-Config-v1250.h"
#include "LTE_RLC-Config-v1310.h"
#include "LTE_RLC-Config-v1430.h"

#endif	/* _LTE_DRB_ToAddMod_H_ */
#include <asn_internal.h>
