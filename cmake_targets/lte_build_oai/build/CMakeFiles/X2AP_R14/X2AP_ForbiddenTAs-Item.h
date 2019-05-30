/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_ForbiddenTAs_Item_H_
#define	_X2AP_ForbiddenTAs_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_PLMN-Identity.h"
#include "X2AP_ForbiddenTACs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_ProtocolExtensionContainer;

/* X2AP_ForbiddenTAs-Item */
typedef struct X2AP_ForbiddenTAs_Item {
	X2AP_PLMN_Identity_t	 pLMN_Identity;
	X2AP_ForbiddenTACs_t	 forbiddenTACs;
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ForbiddenTAs_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ForbiddenTAs_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_X2AP_ForbiddenTAs_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_ForbiddenTAs_Item_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_ForbiddenTAs_Item_H_ */
#include <asn_internal.h>
