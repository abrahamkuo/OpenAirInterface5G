/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RadioResourceConfigDedicatedSCell_r10_H_
#define	_LTE_RadioResourceConfigDedicatedSCell_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_PhysicalConfigDedicatedSCell_r10;
struct LTE_MAC_MainConfigSCell_r11;
struct LTE_NAICS_AssistanceInfo_r12;
struct LTE_NeighCellsCRS_Info_r13;
struct LTE_PhysicalConfigDedicatedSCell_v1370;

/* LTE_RadioResourceConfigDedicatedSCell-r10 */
typedef struct LTE_RadioResourceConfigDedicatedSCell_r10 {
	struct LTE_PhysicalConfigDedicatedSCell_r10	*physicalConfigDedicatedSCell_r10;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_RadioResourceConfigDedicatedSCell_r10__ext1 {
		struct LTE_MAC_MainConfigSCell_r11	*mac_MainConfigSCell_r11;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_RadioResourceConfigDedicatedSCell_r10__ext2 {
		struct LTE_NAICS_AssistanceInfo_r12	*naics_Info_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_RadioResourceConfigDedicatedSCell_r10__ext3 {
		struct LTE_NeighCellsCRS_Info_r13	*neighCellsCRS_InfoSCell_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct LTE_RadioResourceConfigDedicatedSCell_r10__ext4 {
		struct LTE_PhysicalConfigDedicatedSCell_v1370	*physicalConfigDedicatedSCell_v1370;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RadioResourceConfigDedicatedSCell_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RadioResourceConfigDedicatedSCell_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RadioResourceConfigDedicatedSCell_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RadioResourceConfigDedicatedSCell_r10_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PhysicalConfigDedicatedSCell-r10.h"
#include "LTE_MAC-MainConfigSCell-r11.h"
#include "LTE_NAICS-AssistanceInfo-r12.h"
#include "LTE_NeighCellsCRS-Info-r13.h"
#include "LTE_PhysicalConfigDedicatedSCell-v1370.h"

#endif	/* _LTE_RadioResourceConfigDedicatedSCell_r10_H_ */
#include <asn_internal.h>
