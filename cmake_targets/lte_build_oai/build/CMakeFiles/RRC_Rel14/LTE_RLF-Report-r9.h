/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/labuser/Desktop/openairinterface5g_f1ap/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/labuser/Desktop/openairinterface5g_f1ap/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RLF_Report_r9_H_
#define	_LTE_RLF_Report_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RSRP-Range.h"
#include "LTE_RSRQ-Range.h"
#include <constr_SEQUENCE.h>
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include "LTE_CellGlobalIdEUTRA.h"
#include "LTE_PhysCellId.h"
#include "LTE_ARFCN-ValueEUTRA.h"
#include <constr_CHOICE.h>
#include "LTE_ARFCN-ValueEUTRA-v9e0.h"
#include "LTE_C-RNTI.h"
#include "LTE_TimeSinceFailure-r11.h"
#include "LTE_ARFCN-ValueUTRA.h"
#include "LTE_PhysCellIdUTRA-FDD.h"
#include "LTE_PhysCellIdUTRA-TDD.h"
#include "LTE_RSRQ-Range-v1250.h"
#include "LTE_TrackingAreaCode.h"
#include "LTE_RSRP-Range-v1360.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RLF_Report_r9__ext1__failedPCellId_r10_PR {
	LTE_RLF_Report_r9__ext1__failedPCellId_r10_PR_NOTHING,	/* No components present */
	LTE_RLF_Report_r9__ext1__failedPCellId_r10_PR_cellGlobalId_r10,
	LTE_RLF_Report_r9__ext1__failedPCellId_r10_PR_pci_arfcn_r10
} LTE_RLF_Report_r9__ext1__failedPCellId_r10_PR;
typedef enum LTE_RLF_Report_r9__ext1__connectionFailureType_r10 {
	LTE_RLF_Report_r9__ext1__connectionFailureType_r10_rlf	= 0,
	LTE_RLF_Report_r9__ext1__connectionFailureType_r10_hof	= 1
} e_LTE_RLF_Report_r9__ext1__connectionFailureType_r10;
typedef enum LTE_RLF_Report_r9__ext3__basicFields_r11__rlf_Cause_r11 {
	LTE_RLF_Report_r9__ext3__basicFields_r11__rlf_Cause_r11_t310_Expiry	= 0,
	LTE_RLF_Report_r9__ext3__basicFields_r11__rlf_Cause_r11_randomAccessProblem	= 1,
	LTE_RLF_Report_r9__ext3__basicFields_r11__rlf_Cause_r11_rlc_MaxNumRetx	= 2,
	LTE_RLF_Report_r9__ext3__basicFields_r11__rlf_Cause_r11_t312_Expiry_r12	= 3
} e_LTE_RLF_Report_r9__ext3__basicFields_r11__rlf_Cause_r11;
typedef enum LTE_RLF_Report_r9__ext3__previousUTRA_CellId_r11__physCellId_r11_PR {
	LTE_RLF_Report_r9__ext3__previousUTRA_CellId_r11__physCellId_r11_PR_NOTHING,	/* No components present */
	LTE_RLF_Report_r9__ext3__previousUTRA_CellId_r11__physCellId_r11_PR_fdd_r11,
	LTE_RLF_Report_r9__ext3__previousUTRA_CellId_r11__physCellId_r11_PR_tdd_r11
} LTE_RLF_Report_r9__ext3__previousUTRA_CellId_r11__physCellId_r11_PR;
typedef enum LTE_RLF_Report_r9__ext3__selectedUTRA_CellId_r11__physCellId_r11_PR {
	LTE_RLF_Report_r9__ext3__selectedUTRA_CellId_r11__physCellId_r11_PR_NOTHING,	/* No components present */
	LTE_RLF_Report_r9__ext3__selectedUTRA_CellId_r11__physCellId_r11_PR_fdd_r11,
	LTE_RLF_Report_r9__ext3__selectedUTRA_CellId_r11__physCellId_r11_PR_tdd_r11
} LTE_RLF_Report_r9__ext3__selectedUTRA_CellId_r11__physCellId_r11_PR;
typedef enum LTE_RLF_Report_r9__ext5__drb_EstablishedWithQCI_1_r13 {
	LTE_RLF_Report_r9__ext5__drb_EstablishedWithQCI_1_r13_qci1	= 0
} e_LTE_RLF_Report_r9__ext5__drb_EstablishedWithQCI_1_r13;

/* Forward declarations */
struct LTE_MeasResultList2EUTRA_r9;
struct LTE_MeasResultList2UTRA_r9;
struct LTE_MeasResultListGERAN;
struct LTE_MeasResultList2CDMA2000_r9;
struct LTE_LocationInfo_r10;
struct LTE_CellGlobalIdEUTRA;
struct LTE_CellGlobalIdUTRA;
struct LTE_RSRQ_Type_r12;
struct LTE_MeasResultList2EUTRA_v1250;

/* LTE_RLF-Report-r9 */
typedef struct LTE_RLF_Report_r9 {
	struct LTE_RLF_Report_r9__measResultLastServCell_r9 {
		LTE_RSRP_Range_t	 rsrpResult_r9;
		LTE_RSRQ_Range_t	*rsrqResult_r9;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResultLastServCell_r9;
	struct LTE_RLF_Report_r9__measResultNeighCells_r9 {
		struct LTE_MeasResultList2EUTRA_r9	*measResultListEUTRA_r9;	/* OPTIONAL */
		struct LTE_MeasResultList2UTRA_r9	*measResultListUTRA_r9;	/* OPTIONAL */
		struct LTE_MeasResultListGERAN	*measResultListGERAN_r9;	/* OPTIONAL */
		struct LTE_MeasResultList2CDMA2000_r9	*measResultsCDMA2000_r9;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultNeighCells_r9;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_RLF_Report_r9__ext1 {
		struct LTE_LocationInfo_r10	*locationInfo_r10;	/* OPTIONAL */
		struct LTE_RLF_Report_r9__ext1__failedPCellId_r10 {
			LTE_RLF_Report_r9__ext1__failedPCellId_r10_PR present;
			union LTE_RLF_Report_r9__LTE_ext1__LTE_failedPCellId_r10_u {
				LTE_CellGlobalIdEUTRA_t	 cellGlobalId_r10;
				struct LTE_RLF_Report_r9__ext1__failedPCellId_r10__pci_arfcn_r10 {
					LTE_PhysCellId_t	 physCellId_r10;
					LTE_ARFCN_ValueEUTRA_t	 carrierFreq_r10;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} pci_arfcn_r10;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *failedPCellId_r10;
		struct LTE_CellGlobalIdEUTRA	*reestablishmentCellId_r10;	/* OPTIONAL */
		long	*timeConnFailure_r10;	/* OPTIONAL */
		long	*connectionFailureType_r10;	/* OPTIONAL */
		struct LTE_CellGlobalIdEUTRA	*previousPCellId_r10;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_RLF_Report_r9__ext2 {
		struct LTE_RLF_Report_r9__ext2__failedPCellId_v1090 {
			LTE_ARFCN_ValueEUTRA_v9e0_t	 carrierFreq_v1090;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *failedPCellId_v1090;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_RLF_Report_r9__ext3 {
		struct LTE_RLF_Report_r9__ext3__basicFields_r11 {
			LTE_C_RNTI_t	 c_RNTI_r11;
			long	 rlf_Cause_r11;
			LTE_TimeSinceFailure_r11_t	 timeSinceFailure_r11;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *basicFields_r11;
		struct LTE_RLF_Report_r9__ext3__previousUTRA_CellId_r11 {
			LTE_ARFCN_ValueUTRA_t	 carrierFreq_r11;
			struct LTE_RLF_Report_r9__ext3__previousUTRA_CellId_r11__physCellId_r11 {
				LTE_RLF_Report_r9__ext3__previousUTRA_CellId_r11__physCellId_r11_PR present;
				union LTE_RLF_Report_r9__LTE_ext3__LTE_previousUTRA_CellId_r11__LTE_physCellId_r11_u {
					LTE_PhysCellIdUTRA_FDD_t	 fdd_r11;
					LTE_PhysCellIdUTRA_TDD_t	 tdd_r11;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} physCellId_r11;
			struct LTE_CellGlobalIdUTRA	*cellGlobalId_r11;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *previousUTRA_CellId_r11;
		struct LTE_RLF_Report_r9__ext3__selectedUTRA_CellId_r11 {
			LTE_ARFCN_ValueUTRA_t	 carrierFreq_r11;
			struct LTE_RLF_Report_r9__ext3__selectedUTRA_CellId_r11__physCellId_r11 {
				LTE_RLF_Report_r9__ext3__selectedUTRA_CellId_r11__physCellId_r11_PR present;
				union LTE_RLF_Report_r9__LTE_ext3__LTE_selectedUTRA_CellId_r11__LTE_physCellId_r11_u {
					LTE_PhysCellIdUTRA_FDD_t	 fdd_r11;
					LTE_PhysCellIdUTRA_TDD_t	 tdd_r11;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} physCellId_r11;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *selectedUTRA_CellId_r11;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct LTE_RLF_Report_r9__ext4 {
		struct LTE_RLF_Report_r9__ext4__failedPCellId_v1250 {
			LTE_TrackingAreaCode_t	 tac_FailedPCell_r12;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *failedPCellId_v1250;
		LTE_RSRQ_Range_v1250_t	*measResultLastServCell_v1250;	/* OPTIONAL */
		struct LTE_RSRQ_Type_r12	*lastServCellRSRQ_Type_r12;	/* OPTIONAL */
		struct LTE_MeasResultList2EUTRA_v1250	*measResultListEUTRA_v1250;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct LTE_RLF_Report_r9__ext5 {
		long	*drb_EstablishedWithQCI_1_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	struct LTE_RLF_Report_r9__ext6 {
		LTE_RSRP_Range_v1360_t	*measResultLastServCell_v1360;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext6;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RLF_Report_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_connectionFailureType_r10_20;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_rlf_Cause_r11_30;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_drb_EstablishedWithQCI_1_r13_54;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RLF_Report_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RLF_Report_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RLF_Report_r9_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MeasResultList2EUTRA-r9.h"
#include "LTE_MeasResultList2UTRA-r9.h"
#include "LTE_MeasResultListGERAN.h"
#include "LTE_MeasResultList2CDMA2000-r9.h"
#include "LTE_LocationInfo-r10.h"
#include "LTE_CellGlobalIdEUTRA.h"
#include "LTE_CellGlobalIdUTRA.h"
#include "LTE_RSRQ-Type-r12.h"
#include "LTE_MeasResultList2EUTRA-v1250.h"

#endif	/* _LTE_RLF_Report_r9_H_ */
#include <asn_internal.h>
