/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_BCCH_BCH_Message_MBMS_H_
#define	_LTE_BCCH_BCH_Message_MBMS_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_BCCH-BCH-MessageType-MBMS-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_BCCH-BCH-Message-MBMS */
typedef struct LTE_BCCH_BCH_Message_MBMS {
	LTE_BCCH_BCH_MessageType_MBMS_r14_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_BCCH_BCH_Message_MBMS_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_BCCH_BCH_Message_MBMS;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_BCCH_BCH_Message_MBMS_H_ */
#include <asn_internal.h>
