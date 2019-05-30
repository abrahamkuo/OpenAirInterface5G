/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_Neighbour_Information_H_
#define	_X2AP_Neighbour_Information_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "X2AP_ECGI.h"
#include "X2AP_PCI.h"
#include "X2AP_EARFCN.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_ProtocolExtensionContainer;

/* Forward definitions */
typedef struct X2AP_Neighbour_Information__Member {
	X2AP_ECGI_t	 eCGI;
	X2AP_PCI_t	 pCI;
	X2AP_EARFCN_t	 eARFCN;
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Neighbour_Information__Member;

/* X2AP_Neighbour-Information */
typedef struct X2AP_Neighbour_Information {
	A_SEQUENCE_OF(Neighbour_Information__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_Neighbour_Information_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_Neighbour_Information;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_Neighbour_Information_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_Neighbour_Information_1[1];
extern asn_per_constraints_t asn_PER_type_X2AP_Neighbour_Information_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_Neighbour_Information_H_ */
#include <asn_internal.h>