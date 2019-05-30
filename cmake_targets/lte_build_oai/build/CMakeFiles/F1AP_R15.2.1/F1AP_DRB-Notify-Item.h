/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/F1AP_R15.2.1`
 */

#ifndef	_F1AP_DRB_Notify_Item_H_
#define	_F1AP_DRB_Notify_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "F1AP_DRBID.h"
#include "F1AP_Notification-Cause.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct F1AP_ProtocolExtensionContainer;

/* F1AP_DRB-Notify-Item */
typedef struct F1AP_DRB_Notify_Item {
	F1AP_DRBID_t	 dRBID;
	F1AP_Notification_Cause_t	 notification_Cause;
	struct F1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_DRB_Notify_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_DRB_Notify_Item;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_DRB_Notify_Item_H_ */
#include <asn_internal.h>
