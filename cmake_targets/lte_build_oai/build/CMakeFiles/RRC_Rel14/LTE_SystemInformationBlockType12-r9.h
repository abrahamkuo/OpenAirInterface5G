/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SystemInformationBlockType12_r9_H_
#define	_LTE_SystemInformationBlockType12_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SystemInformationBlockType12_r9__warningMessageSegmentType_r9 {
	LTE_SystemInformationBlockType12_r9__warningMessageSegmentType_r9_notLastSegment	= 0,
	LTE_SystemInformationBlockType12_r9__warningMessageSegmentType_r9_lastSegment	= 1
} e_LTE_SystemInformationBlockType12_r9__warningMessageSegmentType_r9;

/* LTE_SystemInformationBlockType12-r9 */
typedef struct LTE_SystemInformationBlockType12_r9 {
	BIT_STRING_t	 messageIdentifier_r9;
	BIT_STRING_t	 serialNumber_r9;
	long	 warningMessageSegmentType_r9;
	long	 warningMessageSegmentNumber_r9;
	OCTET_STRING_t	 warningMessageSegment_r9;
	OCTET_STRING_t	*dataCodingScheme_r9;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType12_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_warningMessageSegmentType_r9_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType12_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType12_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType12_r9_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SystemInformationBlockType12_r9_H_ */
#include <asn_internal.h>
