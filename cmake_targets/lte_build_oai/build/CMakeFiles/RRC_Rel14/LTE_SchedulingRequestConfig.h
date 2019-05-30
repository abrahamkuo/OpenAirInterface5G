/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SchedulingRequestConfig_H_
#define	_LTE_SchedulingRequestConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SchedulingRequestConfig_PR {
	LTE_SchedulingRequestConfig_PR_NOTHING,	/* No components present */
	LTE_SchedulingRequestConfig_PR_release,
	LTE_SchedulingRequestConfig_PR_setup
} LTE_SchedulingRequestConfig_PR;
typedef enum LTE_SchedulingRequestConfig__setup__dsr_TransMax {
	LTE_SchedulingRequestConfig__setup__dsr_TransMax_n4	= 0,
	LTE_SchedulingRequestConfig__setup__dsr_TransMax_n8	= 1,
	LTE_SchedulingRequestConfig__setup__dsr_TransMax_n16	= 2,
	LTE_SchedulingRequestConfig__setup__dsr_TransMax_n32	= 3,
	LTE_SchedulingRequestConfig__setup__dsr_TransMax_n64	= 4,
	LTE_SchedulingRequestConfig__setup__dsr_TransMax_spare3	= 5,
	LTE_SchedulingRequestConfig__setup__dsr_TransMax_spare2	= 6,
	LTE_SchedulingRequestConfig__setup__dsr_TransMax_spare1	= 7
} e_LTE_SchedulingRequestConfig__setup__dsr_TransMax;

/* LTE_SchedulingRequestConfig */
typedef struct LTE_SchedulingRequestConfig {
	LTE_SchedulingRequestConfig_PR present;
	union LTE_SchedulingRequestConfig_u {
		NULL_t	 release;
		struct LTE_SchedulingRequestConfig__setup {
			long	 sr_PUCCH_ResourceIndex;
			long	 sr_ConfigIndex;
			long	 dsr_TransMax;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SchedulingRequestConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_dsr_TransMax_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SchedulingRequestConfig;
extern asn_CHOICE_specifics_t asn_SPC_LTE_SchedulingRequestConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SchedulingRequestConfig_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_SchedulingRequestConfig_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SchedulingRequestConfig_H_ */
#include <asn_internal.h>
