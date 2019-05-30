/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_LoadIndicator_H_
#define	_X2AP_LoadIndicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_LoadIndicator {
	X2AP_LoadIndicator_lowLoad	= 0,
	X2AP_LoadIndicator_mediumLoad	= 1,
	X2AP_LoadIndicator_highLoad	= 2,
	X2AP_LoadIndicator_overLoad	= 3
	/*
	 * Enumeration is extensible
	 */
} e_X2AP_LoadIndicator;

/* X2AP_LoadIndicator */
typedef long	 X2AP_LoadIndicator_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2AP_LoadIndicator_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_LoadIndicator;
extern const asn_INTEGER_specifics_t asn_SPC_X2AP_LoadIndicator_specs_1;
asn_struct_free_f X2AP_LoadIndicator_free;
asn_struct_print_f X2AP_LoadIndicator_print;
asn_constr_check_f X2AP_LoadIndicator_constraint;
ber_type_decoder_f X2AP_LoadIndicator_decode_ber;
der_type_encoder_f X2AP_LoadIndicator_encode_der;
xer_type_decoder_f X2AP_LoadIndicator_decode_xer;
xer_type_encoder_f X2AP_LoadIndicator_encode_xer;
per_type_decoder_f X2AP_LoadIndicator_decode_uper;
per_type_encoder_f X2AP_LoadIndicator_encode_uper;
per_type_decoder_f X2AP_LoadIndicator_decode_aper;
per_type_encoder_f X2AP_LoadIndicator_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_LoadIndicator_H_ */
#include <asn_internal.h>
