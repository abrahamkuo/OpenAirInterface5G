/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RRCConnectionResume_r13_IEs_H_
#define	_LTE_RRCConnectionResume_r13_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_NextHopChainingCount.h"
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RRCConnectionResume_r13_IEs__drb_ContinueROHC_r13 {
	LTE_RRCConnectionResume_r13_IEs__drb_ContinueROHC_r13_true	= 0
} e_LTE_RRCConnectionResume_r13_IEs__drb_ContinueROHC_r13;

/* Forward declarations */
struct LTE_RadioResourceConfigDedicated;
struct LTE_MeasConfig;
struct LTE_AntennaInfoDedicated_v10i0;
struct LTE_RRCConnectionResume_v1430_IEs;

/* LTE_RRCConnectionResume-r13-IEs */
typedef struct LTE_RRCConnectionResume_r13_IEs {
	struct LTE_RadioResourceConfigDedicated	*radioResourceConfigDedicated_r13;	/* OPTIONAL */
	LTE_NextHopChainingCount_t	 nextHopChainingCount_r13;
	struct LTE_MeasConfig	*measConfig_r13;	/* OPTIONAL */
	struct LTE_AntennaInfoDedicated_v10i0	*antennaInfoDedicatedPCell_r13;	/* OPTIONAL */
	long	*drb_ContinueROHC_r13;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct LTE_RRCConnectionResume_v1430_IEs	*rrcConnectionResume_v1430_IEs;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCConnectionResume_r13_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_drb_ContinueROHC_r13_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionResume_r13_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionResume_r13_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCConnectionResume_r13_IEs_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_RadioResourceConfigDedicated.h"
#include "LTE_MeasConfig.h"
#include "LTE_AntennaInfoDedicated-v10i0.h"
#include "LTE_RRCConnectionResume-v1430-IEs.h"

#endif	/* _LTE_RRCConnectionResume_r13_IEs_H_ */
#include <asn_internal.h>
