/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_UE_Capability_NB_Ext_r14_IEs_H_
#define	_LTE_UE_Capability_NB_Ext_r14_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "LTE_RF-Parameters-NB-v1430.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_UE_Capability_NB_Ext_r14_IEs__ue_Category_NB_r14 {
	LTE_UE_Capability_NB_Ext_r14_IEs__ue_Category_NB_r14_nb2	= 0
} e_LTE_UE_Capability_NB_Ext_r14_IEs__ue_Category_NB_r14;

/* Forward declarations */
struct LTE_MAC_Parameters_NB_r14;
struct LTE_PhyLayerParameters_NB_v1430;
struct LTE_UE_Capability_NB_v1440_IEs;

/* LTE_UE-Capability-NB-Ext-r14-IEs */
typedef struct LTE_UE_Capability_NB_Ext_r14_IEs {
	long	*ue_Category_NB_r14;	/* OPTIONAL */
	struct LTE_MAC_Parameters_NB_r14	*mac_Parameters_r14;	/* OPTIONAL */
	struct LTE_PhyLayerParameters_NB_v1430	*phyLayerParameters_v1430;	/* OPTIONAL */
	LTE_RF_Parameters_NB_v1430_t	 rf_Parameters_v1430;
	struct LTE_UE_Capability_NB_v1440_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UE_Capability_NB_Ext_r14_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ue_Category_NB_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UE_Capability_NB_Ext_r14_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MAC-Parameters-NB-r14.h"
#include "LTE_PhyLayerParameters-NB-v1430.h"
#include "LTE_UE-Capability-NB-v1440-IEs.h"

#endif	/* _LTE_UE_Capability_NB_Ext_r14_IEs_H_ */
#include <asn_internal.h>