/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_UE_ContextKeptIndicator_H_
#define	_X2AP_UE_ContextKeptIndicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_UE_ContextKeptIndicator {
	X2AP_UE_ContextKeptIndicator_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_X2AP_UE_ContextKeptIndicator;

/* X2AP_UE-ContextKeptIndicator */
typedef long	 X2AP_UE_ContextKeptIndicator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_UE_ContextKeptIndicator;
asn_struct_free_f X2AP_UE_ContextKeptIndicator_free;
asn_struct_print_f X2AP_UE_ContextKeptIndicator_print;
asn_constr_check_f X2AP_UE_ContextKeptIndicator_constraint;
ber_type_decoder_f X2AP_UE_ContextKeptIndicator_decode_ber;
der_type_encoder_f X2AP_UE_ContextKeptIndicator_encode_der;
xer_type_decoder_f X2AP_UE_ContextKeptIndicator_decode_xer;
xer_type_encoder_f X2AP_UE_ContextKeptIndicator_encode_xer;
per_type_decoder_f X2AP_UE_ContextKeptIndicator_decode_uper;
per_type_encoder_f X2AP_UE_ContextKeptIndicator_encode_uper;
per_type_decoder_f X2AP_UE_ContextKeptIndicator_decode_aper;
per_type_encoder_f X2AP_UE_ContextKeptIndicator_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_UE_ContextKeptIndicator_H_ */
#include <asn_internal.h>
