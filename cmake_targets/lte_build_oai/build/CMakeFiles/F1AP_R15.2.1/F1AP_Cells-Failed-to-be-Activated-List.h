/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-PDU-Contents"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-PDU-Contents.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/F1AP_R15.2.1`
 */

#ifndef	_F1AP_Cells_Failed_to_be_Activated_List_H_
#define	_F1AP_Cells_Failed_to_be_Activated_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct F1AP_ProtocolIE_SingleContainer;

/* F1AP_Cells-Failed-to-be-Activated-List */
typedef struct F1AP_Cells_Failed_to_be_Activated_List {
	A_SEQUENCE_OF(struct F1AP_ProtocolIE_SingleContainer) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_Cells_Failed_to_be_Activated_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_Cells_Failed_to_be_Activated_List;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_Cells_Failed_to_be_Activated_List_H_ */
#include <asn_internal.h>
