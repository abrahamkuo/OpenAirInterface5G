/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_HoReportType_H_
#define	_S1AP_HoReportType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_HoReportType {
	S1AP_HoReportType_unnecessaryhotoanotherrat	= 0,
	/*
	 * Enumeration is extensible
	 */
	S1AP_HoReportType_earlyirathandover	= 1
} e_S1AP_HoReportType;

/* S1AP_HoReportType */
typedef long	 S1AP_HoReportType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_HoReportType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_HoReportType;
extern const asn_INTEGER_specifics_t asn_SPC_S1AP_HoReportType_specs_1;
asn_struct_free_f S1AP_HoReportType_free;
asn_struct_print_f S1AP_HoReportType_print;
asn_constr_check_f S1AP_HoReportType_constraint;
ber_type_decoder_f S1AP_HoReportType_decode_ber;
der_type_encoder_f S1AP_HoReportType_encode_der;
xer_type_decoder_f S1AP_HoReportType_decode_xer;
xer_type_encoder_f S1AP_HoReportType_encode_xer;
per_type_decoder_f S1AP_HoReportType_decode_uper;
per_type_encoder_f S1AP_HoReportType_encode_uper;
per_type_decoder_f S1AP_HoReportType_decode_aper;
per_type_encoder_f S1AP_HoReportType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_HoReportType_H_ */
#include <asn_internal.h>
