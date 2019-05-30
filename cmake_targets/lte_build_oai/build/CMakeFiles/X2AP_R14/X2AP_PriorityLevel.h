/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_PriorityLevel_H_
#define	_X2AP_PriorityLevel_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_PriorityLevel {
	X2AP_PriorityLevel_spare	= 0,
	X2AP_PriorityLevel_highest	= 1,
	X2AP_PriorityLevel_lowest	= 14,
	X2AP_PriorityLevel_no_priority	= 15
} e_X2AP_PriorityLevel;

/* X2AP_PriorityLevel */
typedef long	 X2AP_PriorityLevel_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2AP_PriorityLevel_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_PriorityLevel;
asn_struct_free_f X2AP_PriorityLevel_free;
asn_struct_print_f X2AP_PriorityLevel_print;
asn_constr_check_f X2AP_PriorityLevel_constraint;
ber_type_decoder_f X2AP_PriorityLevel_decode_ber;
der_type_encoder_f X2AP_PriorityLevel_encode_der;
xer_type_decoder_f X2AP_PriorityLevel_decode_xer;
xer_type_encoder_f X2AP_PriorityLevel_encode_xer;
per_type_decoder_f X2AP_PriorityLevel_decode_uper;
per_type_encoder_f X2AP_PriorityLevel_encode_uper;
per_type_decoder_f X2AP_PriorityLevel_decode_aper;
per_type_encoder_f X2AP_PriorityLevel_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_PriorityLevel_H_ */
#include <asn_internal.h>
