/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/F1AP_R15.2.1`
 */

#ifndef	_F1AP_NRCellIdentity_H_
#define	_F1AP_NRCellIdentity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* F1AP_NRCellIdentity */
typedef BIT_STRING_t	 F1AP_NRCellIdentity_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_F1AP_NRCellIdentity_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_F1AP_NRCellIdentity;
asn_struct_free_f F1AP_NRCellIdentity_free;
asn_struct_print_f F1AP_NRCellIdentity_print;
asn_constr_check_f F1AP_NRCellIdentity_constraint;
ber_type_decoder_f F1AP_NRCellIdentity_decode_ber;
der_type_encoder_f F1AP_NRCellIdentity_encode_der;
xer_type_decoder_f F1AP_NRCellIdentity_decode_xer;
xer_type_encoder_f F1AP_NRCellIdentity_encode_xer;
oer_type_decoder_f F1AP_NRCellIdentity_decode_oer;
oer_type_encoder_f F1AP_NRCellIdentity_encode_oer;
per_type_decoder_f F1AP_NRCellIdentity_decode_uper;
per_type_encoder_f F1AP_NRCellIdentity_encode_uper;
per_type_decoder_f F1AP_NRCellIdentity_decode_aper;
per_type_encoder_f F1AP_NRCellIdentity_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_NRCellIdentity_H_ */
#include <asn_internal.h>
