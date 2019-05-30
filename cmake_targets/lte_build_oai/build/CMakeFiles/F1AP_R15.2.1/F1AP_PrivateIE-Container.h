/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-Containers"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-Containers.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/F1AP_R15.2.1`
 */

#ifndef	_F1AP_PrivateIE_Container_H_
#define	_F1AP_PrivateIE_Container_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct F1AP_PrivateMessage_IEs;

/* F1AP_PrivateIE-Container */
typedef struct F1AP_PrivateIE_Container_176P0 {
	A_SEQUENCE_OF(struct F1AP_PrivateMessage_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_PrivateIE_Container_176P0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_PrivateIE_Container_176P0;
extern asn_SET_OF_specifics_t asn_SPC_F1AP_PrivateIE_Container_176P0_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_PrivateIE_Container_176P0_1[1];
extern asn_per_constraints_t asn_PER_type_F1AP_PrivateIE_Container_176P0_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_PrivateIE_Container_H_ */
#include <asn_internal.h>
