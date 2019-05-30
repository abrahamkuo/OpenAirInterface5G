/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MasterInformationBlock_MBMS_r14_H_
#define	_LTE_MasterInformationBlock_MBMS_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MasterInformationBlock_MBMS_r14__dl_Bandwidth_MBMS_r14 {
	LTE_MasterInformationBlock_MBMS_r14__dl_Bandwidth_MBMS_r14_n6	= 0,
	LTE_MasterInformationBlock_MBMS_r14__dl_Bandwidth_MBMS_r14_n15	= 1,
	LTE_MasterInformationBlock_MBMS_r14__dl_Bandwidth_MBMS_r14_n25	= 2,
	LTE_MasterInformationBlock_MBMS_r14__dl_Bandwidth_MBMS_r14_n50	= 3,
	LTE_MasterInformationBlock_MBMS_r14__dl_Bandwidth_MBMS_r14_n75	= 4,
	LTE_MasterInformationBlock_MBMS_r14__dl_Bandwidth_MBMS_r14_n100	= 5
} e_LTE_MasterInformationBlock_MBMS_r14__dl_Bandwidth_MBMS_r14;

/* LTE_MasterInformationBlock-MBMS-r14 */
typedef struct LTE_MasterInformationBlock_MBMS_r14 {
	long	 dl_Bandwidth_MBMS_r14;
	BIT_STRING_t	 systemFrameNumber_r14;
	long	 additionalNonMBSFNSubframes_r14;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MasterInformationBlock_MBMS_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_dl_Bandwidth_MBMS_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MasterInformationBlock_MBMS_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MasterInformationBlock_MBMS_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MasterInformationBlock_MBMS_r14_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MasterInformationBlock_MBMS_r14_H_ */
#include <asn_internal.h>
