/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MeasObjectGERAN_H_
#define	_LTE_MeasObjectGERAN_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CarrierFreqsGERAN.h"
#include "LTE_Q-OffsetRangeInterRAT.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_PhysCellIdGERAN;

/* LTE_MeasObjectGERAN */
typedef struct LTE_MeasObjectGERAN {
	LTE_CarrierFreqsGERAN_t	 carrierFreqs;
	LTE_Q_OffsetRangeInterRAT_t	 offsetFreq;	/* DEFAULT 0 */
	BIT_STRING_t	*ncc_Permitted;	/* DEFAULT 'FF'HH */
	struct LTE_PhysCellIdGERAN	*cellForWhichToReportCGI;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasObjectGERAN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasObjectGERAN;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasObjectGERAN_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasObjectGERAN_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PhysCellIdGERAN.h"

#endif	/* _LTE_MeasObjectGERAN_H_ */
#include <asn_internal.h>