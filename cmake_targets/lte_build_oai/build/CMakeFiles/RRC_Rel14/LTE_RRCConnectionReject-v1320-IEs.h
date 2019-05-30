/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RRCConnectionReject_v1320_IEs_H_
#define	_LTE_RRCConnectionReject_v1320_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RRCConnectionReject_v1320_IEs__rrc_SuspendIndication_r13 {
	LTE_RRCConnectionReject_v1320_IEs__rrc_SuspendIndication_r13_true	= 0
} e_LTE_RRCConnectionReject_v1320_IEs__rrc_SuspendIndication_r13;

/* LTE_RRCConnectionReject-v1320-IEs */
typedef struct LTE_RRCConnectionReject_v1320_IEs {
	long	*rrc_SuspendIndication_r13;	/* OPTIONAL */
	struct LTE_RRCConnectionReject_v1320_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCConnectionReject_v1320_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_rrc_SuspendIndication_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionReject_v1320_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionReject_v1320_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCConnectionReject_v1320_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RRCConnectionReject_v1320_IEs_H_ */
#include <asn_internal.h>
