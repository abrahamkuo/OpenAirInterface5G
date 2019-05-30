/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SystemTimeInfoCDMA2000_H_
#define	_LTE_SystemTimeInfoCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <BIT_STRING.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SystemTimeInfoCDMA2000__cdma_SystemTime_PR {
	LTE_SystemTimeInfoCDMA2000__cdma_SystemTime_PR_NOTHING,	/* No components present */
	LTE_SystemTimeInfoCDMA2000__cdma_SystemTime_PR_synchronousSystemTime,
	LTE_SystemTimeInfoCDMA2000__cdma_SystemTime_PR_asynchronousSystemTime
} LTE_SystemTimeInfoCDMA2000__cdma_SystemTime_PR;

/* LTE_SystemTimeInfoCDMA2000 */
typedef struct LTE_SystemTimeInfoCDMA2000 {
	BOOLEAN_t	 cdma_EUTRA_Synchronisation;
	struct LTE_SystemTimeInfoCDMA2000__cdma_SystemTime {
		LTE_SystemTimeInfoCDMA2000__cdma_SystemTime_PR present;
		union LTE_SystemTimeInfoCDMA2000__LTE_cdma_SystemTime_u {
			BIT_STRING_t	 synchronousSystemTime;
			BIT_STRING_t	 asynchronousSystemTime;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cdma_SystemTime;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemTimeInfoCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemTimeInfoCDMA2000;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemTimeInfoCDMA2000_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemTimeInfoCDMA2000_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SystemTimeInfoCDMA2000_H_ */
#include <asn_internal.h>
