/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_Paging_NB_H_
#define	_LTE_Paging_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_Paging_NB__systemInfoModification_r13 {
	LTE_Paging_NB__systemInfoModification_r13_true	= 0
} e_LTE_Paging_NB__systemInfoModification_r13;
typedef enum LTE_Paging_NB__systemInfoModification_eDRX_r13 {
	LTE_Paging_NB__systemInfoModification_eDRX_r13_true	= 0
} e_LTE_Paging_NB__systemInfoModification_eDRX_r13;

/* Forward declarations */
struct LTE_PagingRecordList_NB_r13;

/* LTE_Paging-NB */
typedef struct LTE_Paging_NB {
	struct LTE_PagingRecordList_NB_r13	*pagingRecordList_r13;	/* OPTIONAL */
	long	*systemInfoModification_r13;	/* OPTIONAL */
	long	*systemInfoModification_eDRX_r13;	/* OPTIONAL */
	struct LTE_Paging_NB__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_Paging_NB_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_systemInfoModification_r13_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_systemInfoModification_eDRX_r13_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_Paging_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_Paging_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_Paging_NB_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PagingRecordList-NB-r13.h"

#endif	/* _LTE_Paging_NB_H_ */
#include <asn_internal.h>
