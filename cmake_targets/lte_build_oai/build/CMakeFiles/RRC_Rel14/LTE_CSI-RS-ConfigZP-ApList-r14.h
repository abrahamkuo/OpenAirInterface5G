/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_CSI_RS_ConfigZP_ApList_r14_H_
#define	_LTE_CSI_RS_ConfigZP_ApList_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CSI_RS_ConfigZP_ApList_r14_PR {
	LTE_CSI_RS_ConfigZP_ApList_r14_PR_NOTHING,	/* No components present */
	LTE_CSI_RS_ConfigZP_ApList_r14_PR_release,
	LTE_CSI_RS_ConfigZP_ApList_r14_PR_setup
} LTE_CSI_RS_ConfigZP_ApList_r14_PR;

/* Forward declarations */
struct LTE_CSI_RS_ConfigZP_r11;

/* LTE_CSI-RS-ConfigZP-ApList-r14 */
typedef struct LTE_CSI_RS_ConfigZP_ApList_r14 {
	LTE_CSI_RS_ConfigZP_ApList_r14_PR present;
	union LTE_CSI_RS_ConfigZP_ApList_r14_u {
		NULL_t	 release;
		struct LTE_CSI_RS_ConfigZP_ApList_r14__setup {
			A_SEQUENCE_OF(struct LTE_CSI_RS_ConfigZP_r11) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CSI_RS_ConfigZP_ApList_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CSI_RS_ConfigZP_ApList_r14;
extern asn_CHOICE_specifics_t asn_SPC_LTE_CSI_RS_ConfigZP_ApList_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CSI_RS_ConfigZP_ApList_r14_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_CSI_RS_ConfigZP_ApList_r14_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CSI-RS-ConfigZP-r11.h"

#endif	/* _LTE_CSI_RS_ConfigZP_ApList_r14_H_ */
#include <asn_internal.h>
