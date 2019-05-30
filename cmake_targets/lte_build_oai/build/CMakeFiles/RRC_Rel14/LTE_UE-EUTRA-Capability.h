/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_UE_EUTRA_Capability_H_
#define	_LTE_UE_EUTRA_Capability_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_AccessStratumRelease.h"
#include <NativeInteger.h>
#include "LTE_PDCP-Parameters.h"
#include "LTE_PhyLayerParameters.h"
#include "LTE_RF-Parameters.h"
#include "LTE_MeasParameters.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_UE_EUTRA_Capability_v920_IEs;
struct LTE_IRAT_ParametersUTRA_FDD;
struct LTE_IRAT_ParametersUTRA_TDD128;
struct LTE_IRAT_ParametersUTRA_TDD384;
struct LTE_IRAT_ParametersUTRA_TDD768;
struct LTE_IRAT_ParametersGERAN;
struct LTE_IRAT_ParametersCDMA2000_HRPD;
struct LTE_IRAT_ParametersCDMA2000_1XRTT;

/* LTE_UE-EUTRA-Capability */
typedef struct LTE_UE_EUTRA_Capability {
	LTE_AccessStratumRelease_t	 accessStratumRelease;
	long	 ue_Category;
	LTE_PDCP_Parameters_t	 pdcp_Parameters;
	LTE_PhyLayerParameters_t	 phyLayerParameters;
	LTE_RF_Parameters_t	 rf_Parameters;
	LTE_MeasParameters_t	 measParameters;
	BIT_STRING_t	*featureGroupIndicators;	/* OPTIONAL */
	struct LTE_UE_EUTRA_Capability__interRAT_Parameters {
		struct LTE_IRAT_ParametersUTRA_FDD	*utraFDD;	/* OPTIONAL */
		struct LTE_IRAT_ParametersUTRA_TDD128	*utraTDD128;	/* OPTIONAL */
		struct LTE_IRAT_ParametersUTRA_TDD384	*utraTDD384;	/* OPTIONAL */
		struct LTE_IRAT_ParametersUTRA_TDD768	*utraTDD768;	/* OPTIONAL */
		struct LTE_IRAT_ParametersGERAN	*geran;	/* OPTIONAL */
		struct LTE_IRAT_ParametersCDMA2000_HRPD	*cdma2000_HRPD;	/* OPTIONAL */
		struct LTE_IRAT_ParametersCDMA2000_1XRTT	*cdma2000_1xRTT;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} interRAT_Parameters;
	struct LTE_UE_EUTRA_Capability_v920_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UE_EUTRA_Capability_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_Capability;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_UE-EUTRA-Capability-v920-IEs.h"
#include "LTE_IRAT-ParametersUTRA-FDD.h"
#include "LTE_IRAT-ParametersUTRA-TDD128.h"
#include "LTE_IRAT-ParametersUTRA-TDD384.h"
#include "LTE_IRAT-ParametersUTRA-TDD768.h"
#include "LTE_IRAT-ParametersGERAN.h"
#include "LTE_IRAT-ParametersCDMA2000-HRPD.h"
#include "LTE_IRAT-ParametersCDMA2000-1XRTT.h"

#endif	/* _LTE_UE_EUTRA_Capability_H_ */
#include <asn_internal.h>
