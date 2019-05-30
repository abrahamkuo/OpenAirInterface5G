/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SupportedBandGERAN_H_
#define	_LTE_SupportedBandGERAN_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SupportedBandGERAN {
	LTE_SupportedBandGERAN_gsm450	= 0,
	LTE_SupportedBandGERAN_gsm480	= 1,
	LTE_SupportedBandGERAN_gsm710	= 2,
	LTE_SupportedBandGERAN_gsm750	= 3,
	LTE_SupportedBandGERAN_gsm810	= 4,
	LTE_SupportedBandGERAN_gsm850	= 5,
	LTE_SupportedBandGERAN_gsm900P	= 6,
	LTE_SupportedBandGERAN_gsm900E	= 7,
	LTE_SupportedBandGERAN_gsm900R	= 8,
	LTE_SupportedBandGERAN_gsm1800	= 9,
	LTE_SupportedBandGERAN_gsm1900	= 10,
	LTE_SupportedBandGERAN_spare5	= 11,
	LTE_SupportedBandGERAN_spare4	= 12,
	LTE_SupportedBandGERAN_spare3	= 13,
	LTE_SupportedBandGERAN_spare2	= 14,
	LTE_SupportedBandGERAN_spare1	= 15
	/*
	 * Enumeration is extensible
	 */
} e_LTE_SupportedBandGERAN;

/* LTE_SupportedBandGERAN */
typedef long	 LTE_SupportedBandGERAN_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_SupportedBandGERAN_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_SupportedBandGERAN;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_SupportedBandGERAN_specs_1;
asn_struct_free_f LTE_SupportedBandGERAN_free;
asn_struct_print_f LTE_SupportedBandGERAN_print;
asn_constr_check_f LTE_SupportedBandGERAN_constraint;
ber_type_decoder_f LTE_SupportedBandGERAN_decode_ber;
der_type_encoder_f LTE_SupportedBandGERAN_encode_der;
xer_type_decoder_f LTE_SupportedBandGERAN_decode_xer;
xer_type_encoder_f LTE_SupportedBandGERAN_encode_xer;
per_type_decoder_f LTE_SupportedBandGERAN_decode_uper;
per_type_encoder_f LTE_SupportedBandGERAN_encode_uper;
per_type_decoder_f LTE_SupportedBandGERAN_decode_aper;
per_type_encoder_f LTE_SupportedBandGERAN_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SupportedBandGERAN_H_ */
#include <asn_internal.h>
