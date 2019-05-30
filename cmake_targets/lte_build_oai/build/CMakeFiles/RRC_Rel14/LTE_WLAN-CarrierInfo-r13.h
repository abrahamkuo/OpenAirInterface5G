/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_WLAN_CarrierInfo_r13_H_
#define	_LTE_WLAN_CarrierInfo_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_WLAN_CarrierInfo_r13__countryCode_r13 {
	LTE_WLAN_CarrierInfo_r13__countryCode_r13_unitedStates	= 0,
	LTE_WLAN_CarrierInfo_r13__countryCode_r13_europe	= 1,
	LTE_WLAN_CarrierInfo_r13__countryCode_r13_japan	= 2,
	LTE_WLAN_CarrierInfo_r13__countryCode_r13_global	= 3
	/*
	 * Enumeration is extensible
	 */
} e_LTE_WLAN_CarrierInfo_r13__countryCode_r13;

/* Forward declarations */
struct LTE_WLAN_ChannelList_r13;

/* LTE_WLAN-CarrierInfo-r13 */
typedef struct LTE_WLAN_CarrierInfo_r13 {
	long	*operatingClass_r13;	/* OPTIONAL */
	long	*countryCode_r13;	/* OPTIONAL */
	struct LTE_WLAN_ChannelList_r13	*channelNumbers_r13;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_WLAN_CarrierInfo_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_countryCode_r13_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_WLAN_CarrierInfo_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_WLAN_CarrierInfo_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_WLAN_CarrierInfo_r13_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_WLAN-ChannelList-r13.h"

#endif	/* _LTE_WLAN_CarrierInfo_r13_H_ */
#include <asn_internal.h>