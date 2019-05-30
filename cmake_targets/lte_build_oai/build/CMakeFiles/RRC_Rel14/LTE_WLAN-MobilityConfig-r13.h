/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_WLAN_MobilityConfig_r13_H_
#define	_LTE_WLAN_MobilityConfig_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_WLAN_MobilityConfig_r13__associationTimer_r13 {
	LTE_WLAN_MobilityConfig_r13__associationTimer_r13_s10	= 0,
	LTE_WLAN_MobilityConfig_r13__associationTimer_r13_s30	= 1,
	LTE_WLAN_MobilityConfig_r13__associationTimer_r13_s60	= 2,
	LTE_WLAN_MobilityConfig_r13__associationTimer_r13_s120	= 3,
	LTE_WLAN_MobilityConfig_r13__associationTimer_r13_s240	= 4
} e_LTE_WLAN_MobilityConfig_r13__associationTimer_r13;
typedef enum LTE_WLAN_MobilityConfig_r13__successReportRequested_r13 {
	LTE_WLAN_MobilityConfig_r13__successReportRequested_r13_true	= 0
} e_LTE_WLAN_MobilityConfig_r13__successReportRequested_r13;

/* Forward declarations */
struct LTE_WLAN_Id_List_r13;
struct LTE_WLAN_SuspendConfig_r14;

/* LTE_WLAN-MobilityConfig-r13 */
typedef struct LTE_WLAN_MobilityConfig_r13 {
	struct LTE_WLAN_Id_List_r13	*wlan_ToReleaseList_r13;	/* OPTIONAL */
	struct LTE_WLAN_Id_List_r13	*wlan_ToAddList_r13;	/* OPTIONAL */
	long	*associationTimer_r13;	/* OPTIONAL */
	long	*successReportRequested_r13;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_WLAN_MobilityConfig_r13__ext1 {
		struct LTE_WLAN_SuspendConfig_r14	*wlan_SuspendConfig_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_WLAN_MobilityConfig_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_associationTimer_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_successReportRequested_r13_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_WLAN_MobilityConfig_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_WLAN_MobilityConfig_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_WLAN_MobilityConfig_r13_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_WLAN-Id-List-r13.h"
#include "LTE_WLAN-SuspendConfig-r14.h"

#endif	/* _LTE_WLAN_MobilityConfig_r13_H_ */
#include <asn_internal.h>
