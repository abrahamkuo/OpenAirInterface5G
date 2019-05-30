/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SystemInformationBlockType4_H_
#define	_LTE_SystemInformationBlockType4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_IntraFreqNeighCellList;
struct LTE_IntraFreqBlackCellList;
struct LTE_PhysCellIdRange;

/* LTE_SystemInformationBlockType4 */
typedef struct LTE_SystemInformationBlockType4 {
	struct LTE_IntraFreqNeighCellList	*intraFreqNeighCellList;	/* OPTIONAL */
	struct LTE_IntraFreqBlackCellList	*intraFreqBlackCellList;	/* OPTIONAL */
	struct LTE_PhysCellIdRange	*csg_PhysCellIdRange;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType4;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType4_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType4_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_IntraFreqNeighCellList.h"
#include "LTE_IntraFreqBlackCellList.h"
#include "LTE_PhysCellIdRange.h"

#endif	/* _LTE_SystemInformationBlockType4_H_ */
#include <asn_internal.h>
