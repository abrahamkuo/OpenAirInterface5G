/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_HandoverCommand_r8_IEs_H_
#define	_LTE_HandoverCommand_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_HandoverCommand-r8-IEs */
typedef struct LTE_HandoverCommand_r8_IEs {
	OCTET_STRING_t	 handoverCommandMessage;
	struct LTE_HandoverCommand_r8_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_HandoverCommand_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_HandoverCommand_r8_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_HandoverCommand_r8_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_HandoverCommand_r8_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_HandoverCommand_r8_IEs_H_ */
#include <asn_internal.h>
