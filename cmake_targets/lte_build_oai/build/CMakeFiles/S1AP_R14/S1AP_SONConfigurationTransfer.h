/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_SONConfigurationTransfer_H_
#define	_S1AP_SONConfigurationTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_TargeteNB-ID.h"
#include "S1AP_SourceeNB-ID.h"
#include "S1AP_SONInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1AP_ProtocolExtensionContainer;

/* S1AP_SONConfigurationTransfer */
typedef struct S1AP_SONConfigurationTransfer {
	S1AP_TargeteNB_ID_t	 targeteNB_ID;
	S1AP_SourceeNB_ID_t	 sourceeNB_ID;
	S1AP_SONInformation_t	 sONInformation;
	struct S1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_SONConfigurationTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_SONConfigurationTransfer;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_SONConfigurationTransfer_H_ */
#include <asn_internal.h>
