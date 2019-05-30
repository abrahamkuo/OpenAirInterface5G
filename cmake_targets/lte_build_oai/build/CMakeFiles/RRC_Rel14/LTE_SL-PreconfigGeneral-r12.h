/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SL_PreconfigGeneral_r12_H_
#define	_LTE_SL_PreconfigGeneral_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ARFCN-ValueEUTRA-r9.h"
#include "LTE_P-Max.h"
#include "LTE_AdditionalSpectrumEmission.h"
#include <NativeEnumerated.h>
#include "LTE_TDD-ConfigSL-r12.h"
#include <BIT_STRING.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include "LTE_AdditionalSpectrumEmission-v10l0.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SL_PreconfigGeneral_r12__sl_bandwidth_r12 {
	LTE_SL_PreconfigGeneral_r12__sl_bandwidth_r12_n6	= 0,
	LTE_SL_PreconfigGeneral_r12__sl_bandwidth_r12_n15	= 1,
	LTE_SL_PreconfigGeneral_r12__sl_bandwidth_r12_n25	= 2,
	LTE_SL_PreconfigGeneral_r12__sl_bandwidth_r12_n50	= 3,
	LTE_SL_PreconfigGeneral_r12__sl_bandwidth_r12_n75	= 4,
	LTE_SL_PreconfigGeneral_r12__sl_bandwidth_r12_n100	= 5
} e_LTE_SL_PreconfigGeneral_r12__sl_bandwidth_r12;

/* LTE_SL-PreconfigGeneral-r12 */
typedef struct LTE_SL_PreconfigGeneral_r12 {
	struct LTE_SL_PreconfigGeneral_r12__rohc_Profiles_r12 {
		BOOLEAN_t	 profile0x0001_r12;
		BOOLEAN_t	 profile0x0002_r12;
		BOOLEAN_t	 profile0x0004_r12;
		BOOLEAN_t	 profile0x0006_r12;
		BOOLEAN_t	 profile0x0101_r12;
		BOOLEAN_t	 profile0x0102_r12;
		BOOLEAN_t	 profile0x0104_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} rohc_Profiles_r12;
	LTE_ARFCN_ValueEUTRA_r9_t	 carrierFreq_r12;
	LTE_P_Max_t	 maxTxPower_r12;
	LTE_AdditionalSpectrumEmission_t	 additionalSpectrumEmission_r12;
	long	 sl_bandwidth_r12;
	LTE_TDD_ConfigSL_r12_t	 tdd_ConfigSL_r12;
	BIT_STRING_t	 reserved_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_SL_PreconfigGeneral_r12__ext1 {
		LTE_AdditionalSpectrumEmission_v10l0_t	*additionalSpectrumEmission_v1440;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_PreconfigGeneral_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_sl_bandwidth_r12_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_PreconfigGeneral_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_PreconfigGeneral_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_PreconfigGeneral_r12_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SL_PreconfigGeneral_r12_H_ */
#include <asn_internal.h>
