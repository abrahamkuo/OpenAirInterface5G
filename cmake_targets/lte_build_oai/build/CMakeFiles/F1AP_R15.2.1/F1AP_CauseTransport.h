/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/F1AP_R15.2.1`
 */

#ifndef	_F1AP_CauseTransport_H_
#define	_F1AP_CauseTransport_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_CauseTransport {
	F1AP_CauseTransport_unspecified	= 0,
	F1AP_CauseTransport_transport_resource_unavailable	= 1
	/*
	 * Enumeration is extensible
	 */
} e_F1AP_CauseTransport;

/* F1AP_CauseTransport */
typedef long	 F1AP_CauseTransport_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_F1AP_CauseTransport_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_F1AP_CauseTransport;
extern const asn_INTEGER_specifics_t asn_SPC_F1AP_CauseTransport_specs_1;
asn_struct_free_f F1AP_CauseTransport_free;
asn_struct_print_f F1AP_CauseTransport_print;
asn_constr_check_f F1AP_CauseTransport_constraint;
ber_type_decoder_f F1AP_CauseTransport_decode_ber;
der_type_encoder_f F1AP_CauseTransport_encode_der;
xer_type_decoder_f F1AP_CauseTransport_decode_xer;
xer_type_encoder_f F1AP_CauseTransport_encode_xer;
oer_type_decoder_f F1AP_CauseTransport_decode_oer;
oer_type_encoder_f F1AP_CauseTransport_encode_oer;
per_type_decoder_f F1AP_CauseTransport_decode_uper;
per_type_encoder_f F1AP_CauseTransport_encode_uper;
per_type_decoder_f F1AP_CauseTransport_decode_aper;
per_type_encoder_f F1AP_CauseTransport_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_CauseTransport_H_ */
#include <asn_internal.h>
