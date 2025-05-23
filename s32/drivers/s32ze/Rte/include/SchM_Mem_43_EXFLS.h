/*
 * Copyright 2021-2024 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/**
*   @file    SchM_Mem_43_EXFLS.h
*   @version 2.0.0
*
*   @brief   AUTOSAR Rte - module interface
*   @details This file contains the functions prototypes and data types of the AUTOSAR Rte.
*            This file contains sample code only. It is not part of the production code deliverables.
*
*   @addtogroup RTE_MODULE
*   @{
*/

#ifndef SCHM_MEM_43_EXFLS_H
#define SCHM_MEM_43_EXFLS_H

#ifdef __cplusplus
extern "C" {
#endif
/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define SCHM_MEM_43_EXFLS_AR_RELEASE_MAJOR_VERSION     4
#define SCHM_MEM_43_EXFLS_AR_RELEASE_MINOR_VERSION     7
#define SCHM_MEM_43_EXFLS_AR_RELEASE_REVISION_VERSION  0
#define SCHM_MEM_43_EXFLS_SW_MAJOR_VERSION             2
#define SCHM_MEM_43_EXFLS_SW_MINOR_VERSION             0
#define SCHM_MEM_43_EXFLS_SW_PATCH_VERSION             0

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
#define NUMBER_OF_CORES         (uint8)(14U)

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/
#define RTE_START_SEC_CODE
#include "Rte_MemMap.h"

#ifdef MCAL_TESTING_ENVIRONMENT
/** 
@brief   This function checks that all entered exclusive areas were also exited. 
@details This function checks that all entered exclusive areas were also exited. The check
         is done by verifying that all reentry_guard_* static variables are back to the
         zero value.
    
@param[in]     void       No input parameters
@return        void       This function does not return a value. Test asserts are used instead. 

@pre  None
@post None

@remarks Covers 
@remarks Implements 
*/
void SchM_Check_mem_43_exfls(void);
#endif /*MCAL_TESTING_ENVIRONMENT*/

extern void SchM_Enter_Mem_43_EXFLS_MEM_EXCLUSIVE_AREA_10(void);
extern void SchM_Exit_Mem_43_EXFLS_MEM_EXCLUSIVE_AREA_10(void);

extern void SchM_Enter_Mem_43_EXFLS_MEM_EXCLUSIVE_AREA_11(void);
extern void SchM_Exit_Mem_43_EXFLS_MEM_EXCLUSIVE_AREA_11(void);

extern void SchM_Enter_Mem_43_EXFLS_MEM_EXCLUSIVE_AREA_12(void);
extern void SchM_Exit_Mem_43_EXFLS_MEM_EXCLUSIVE_AREA_12(void);

extern void SchM_Enter_Mem_43_EXFLS_MEM_EXCLUSIVE_AREA_13(void);
extern void SchM_Exit_Mem_43_EXFLS_MEM_EXCLUSIVE_AREA_13(void);

extern void SchM_Enter_Mem_43_EXFLS_MEM_EXCLUSIVE_AREA_14(void);
extern void SchM_Exit_Mem_43_EXFLS_MEM_EXCLUSIVE_AREA_14(void);


void Mem_43_EXFLS_MainFunction(void);

#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* SCHM_MEM_43_EXFLS_H */
