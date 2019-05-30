/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SIB_Type_MBMS_r14_H_
#define	_LTE_SIB_Type_MBMS_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SIB_Type_MBMS_r14 {
	LTE_SIB_Type_MBMS_r14_sibType10	= 0,
	LTE_SIB_Type_MBMS_r14_sibType11	= 1,
	LTE_SIB_Type_MBMS_r14_sibType12_v920	= 2,
	LTE_SIB_Type_MBMS_r14_sibType13_v920	= 3,
	LTE_SIB_Type_MBMS_r14_sibType15_v1130	= 4,
	LTE_SIB_Type_MBMS_r14_sibType16_v1130	= 5
	/*
	 * Enumeration is extensible
	 */
} e_LTE_SIB_Type_MBMS_r14;

/* LTE_SIB-Type-MBMS-r14 */
typedef long	 LTE_SIB_Type_MBMS_r14_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_SIB_Type_MBMS_r14_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_SIB_Type_MBMS_r14;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_SIB_Type_MBMS_r14_specs_1;
asn_struct_free_f LTE_SIB_Type_MBMS_r14_free;
asn_struct_print_f LTE_SIB_Type_MBMS_r14_print;
asn_constr_check_f LTE_SIB_Type_MBMS_r14_constraint;
ber_type_decoder_f LTE_SIB_Type_MBMS_r14_decode_ber;
der_type_encoder_f LTE_SIB_Type_MBMS_r14_encode_der;
xer_type_decoder_f LTE_SIB_Type_MBMS_r14_decode_xer;
xer_type_encoder_f LTE_SIB_Type_MBMS_r14_encode_xer;
per_type_decoder_f LTE_SIB_Type_MBMS_r14_decode_uper;
per_type_encoder_f LTE_SIB_Type_MBMS_r14_encode_uper;
per_type_decoder_f LTE_SIB_Type_MBMS_r14_decode_aper;
per_type_encoder_f LTE_SIB_Type_MBMS_r14_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SIB_Type_MBMS_r14_H_ */
#include <asn_internal.h>
