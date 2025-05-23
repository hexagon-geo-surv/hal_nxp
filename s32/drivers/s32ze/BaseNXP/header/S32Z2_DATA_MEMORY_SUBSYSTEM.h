/*
 * Copyright 1997-2016 Freescale Semiconductor, Inc.
 * Copyright 2016-2024 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*!
 * @file S32Z2_DATA_MEMORY_SUBSYSTEM.h
 * @version 2.3
 * @date 2024-05-03
 * @brief Peripheral Access Layer for S32Z2_DATA_MEMORY_SUBSYSTEM
 *
 * This file contains register definitions and macros for easy access to their
 * bit fields.
 *
 * This file assumes LITTLE endian system.
 */

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section [global]
* Violates MISRA 2012 Advisory Rule 2.3, local typedef not referenced
* The SoC header defines typedef for all modules.
*
* @section [global]
* Violates MISRA 2012 Advisory Rule 2.5, local macro not referenced
* The SoC header defines macros for all modules and registers.
*
* @section [global]
* Violates MISRA 2012 Advisory Directive 4.9, Function-like macro
* These are generated macros used for accessing the bit-fields from registers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.1, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.2, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.4, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.5, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 21.1, defined macro '__I' is reserved to the compiler
* This type qualifier is needed to ensure correct I/O access and addressing.
*/

/* Prevention from multiple including the same memory map */
#if !defined(S32Z2_DATA_MEMORY_SUBSYSTEM_H_)  /* Check if memory map has not been already included */
#define S32Z2_DATA_MEMORY_SUBSYSTEM_H_

#include "S32Z2_COMMON.h"

/* ----------------------------------------------------------------------------
   -- DATA_MEMORY_SUBSYSTEM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DATA_MEMORY_SUBSYSTEM_Peripheral_Access_Layer DATA_MEMORY_SUBSYSTEM Peripheral Access Layer
 * @{
 */

/** DATA_MEMORY_SUBSYSTEM - Size of Registers Arrays */
#define DATA_MEMORY_SUBSYSTEM_QMAN_TASK_IDX_COUNT 4u

/** DATA_MEMORY_SUBSYSTEM - Register Layout Typedef */
typedef struct {
  __IO uint32_t MSS_DMBA;                          /**< IDM Base Address, offset: 0x0 */
  __I  uint32_t MSS_DMBE;                          /**< DMSS Idle Indication, offset: 0x4 */
  uint8_t RESERVED_0[20];
  __I  uint32_t MSS_HDCFG;                         /**< DMSS Hardware Configuration, offset: 0x1C */
  uint8_t RESERVED_1[4];
  __IO uint32_t MSS_GPOUT;                         /**< MSS General Purpose 2, offset: 0x24 */
  __IO uint32_t MSS_DACC;                          /**< DDMA Access Configuration, offset: 0x28 */
  __IO uint32_t MSS_SDCFG;                         /**< MSS SW Configuration, offset: 0x2C */
  uint8_t RESERVED_2[8];
  __IO uint32_t MSS_BARRIER;                       /**< MSS Memory Barrier Control, offset: 0x38 */
  __I  uint32_t D_DMAB;                            /**< DDMA Status, offset: 0x3C */
  uint8_t RESERVED_3[4];
  __IO uint32_t DBG_WRC0;                          /**< EDP Write Response Counter, offset: 0x44 */
  uint8_t RESERVED_4[16];
  __IO uint32_t MSS_DDTC;                          /**< DDMA Linear Transfer Size, offset: 0x58 */
  uint8_t RESERVED_5[4];
  __IO uint32_t MSS_2DCFG1;                        /**< DDMA Configuration 1, offset: 0x60 */
  __IO uint32_t MSS_2DCFG2;                        /**< DDMA Configuration 2, offset: 0x64 */
  __IO uint32_t MSS_2DCFG3;                        /**< DDMA Configuration 3, offset: 0x68 */
  __IO uint32_t MSS_2DCFG4;                        /**< DDMA Configuration 4, offset: 0x6C */
  __IO uint32_t MSS_2DCFG5;                        /**< DDMA Configuration 5, offset: 0x70 */
  __IO uint32_t MSS_2DCFG6;                        /**< DDMA Configuration 6, offset: 0x74 */
  __IO uint32_t MSS_DDQS;                          /**< DDMA Status, offset: 0x78 */
  uint8_t RESERVED_6[4];
  __IO uint32_t MSS_DDEA;                          /**< DDMA Address 1, offset: 0x80 */
  __IO uint32_t MSS_DDIA;                          /**< DDMA Address 2, offset: 0x84 */
  uint8_t RESERVED_7[4];
  __IO uint32_t MSS_DDCL;                          /**< DDMA Control, offset: 0x8C */
  __IO uint32_t DDMA_PAUSE;                        /**< DDMA Pause Control, offset: 0x90 */
  uint8_t RESERVED_8[12];
  __I  uint32_t MSS_DDESC_ID;                      /**< DDMA Interrupt Source, offset: 0xA0 */
  __IO uint32_t MSS_DDESC_OV;                      /**< DDMA Task ID Overwrite Indication, offset: 0xA4 */
  __I  uint32_t MSTR_TASK_ID;                      /**< DDMA Task (Master) ID, offset: 0xA8 */
  uint8_t RESERVED_9[4];
  __I  uint32_t QMAN_TASK_IDX[DATA_MEMORY_SUBSYSTEM_QMAN_TASK_IDX_COUNT]; /**< QMAN Task IDx, array offset: 0xB0, array step: 0x4 */
} DATA_MEMORY_SUBSYSTEM_Type, *DATA_MEMORY_SUBSYSTEM_MemMapPtr;

/** Number of instances of the DATA_MEMORY_SUBSYSTEM module. */
#define DATA_MEMORY_SUBSYSTEM_INSTANCE_COUNT     (1u)

/* DATA_MEMORY_SUBSYSTEM - Peripheral instance base addresses */
/** Peripheral CEVA_SPF2__DATA_MEMORY_SUBSYSTEM base address */
#define IP_CEVA_SPF2__DATA_MEMORY_SUBSYSTEM_BASE (0x24400600u)
/** Peripheral CEVA_SPF2__DATA_MEMORY_SUBSYSTEM base pointer */
#define IP_CEVA_SPF2__DATA_MEMORY_SUBSYSTEM      ((DATA_MEMORY_SUBSYSTEM_Type *)IP_CEVA_SPF2__DATA_MEMORY_SUBSYSTEM_BASE)
/** Array initializer of DATA_MEMORY_SUBSYSTEM peripheral base addresses */
#define IP_DATA_MEMORY_SUBSYSTEM_BASE_ADDRS      { IP_CEVA_SPF2__DATA_MEMORY_SUBSYSTEM_BASE }
/** Array initializer of DATA_MEMORY_SUBSYSTEM peripheral base pointers */
#define IP_DATA_MEMORY_SUBSYSTEM_BASE_PTRS       { IP_CEVA_SPF2__DATA_MEMORY_SUBSYSTEM }

/* ----------------------------------------------------------------------------
   -- DATA_MEMORY_SUBSYSTEM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DATA_MEMORY_SUBSYSTEM_Register_Masks DATA_MEMORY_SUBSYSTEM Register Masks
 * @{
 */

/*! @name MSS_DMBA - IDM Base Address */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_MSS_DMBA_DMBA_MASK (0xFFFFFFFFU)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBA_DMBA_SHIFT (0U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBA_DMBA_WIDTH (32U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBA_DMBA(x)   (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DMBA_DMBA_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DMBA_DMBA_MASK)
/*! @} */

/*! @name MSS_DMBE - DMSS Idle Indication */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_WBE_MASK  (0x1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_WBE_SHIFT (0U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_WBE_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_WBE(x)    (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DMBE_WBE_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DMBE_WBE_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_EWBE_MASK (0x2U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_EWBE_SHIFT (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_EWBE_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_EWBE(x)   (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DMBE_EWBE_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DMBE_EWBE_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_EDPE_MASK (0x4U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_EDPE_SHIFT (2U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_EDPE_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_EDPE(x)   (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DMBE_EDPE_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DMBE_EDPE_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_DMSS_IDLE_MASK (0x8U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_DMSS_IDLE_SHIFT (3U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_DMSS_IDLE_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_DMSS_IDLE(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DMBE_DMSS_IDLE_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DMBE_DMSS_IDLE_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_ADLB_MASK (0x10U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_ADLB_SHIFT (4U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_ADLB_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_ADLB(x)   (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DMBE_ADLB_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DMBE_ADLB_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_AXIP_MASK (0x80U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_AXIP_SHIFT (7U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_AXIP_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_AXIP(x)   (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DMBE_AXIP_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DMBE_AXIP_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_DMA_MASK  (0x100U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_DMA_SHIFT (8U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_DMA_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_DMA(x)    (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DMBE_DMA_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DMBE_DMA_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_QMAN_MASK (0x200U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_QMAN_SHIFT (9U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_QMAN_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_QMAN(x)   (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DMBE_QMAN_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DMBE_QMAN_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_L1WBB_MASK (0x10000U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_L1WBB_SHIFT (16U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_L1WBB_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DMBE_L1WBB(x)  (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DMBE_L1WBB_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DMBE_L1WBB_MASK)
/*! @} */

/*! @name MSS_HDCFG - DMSS Hardware Configuration */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_BLK_NUM_MASK (0x1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_BLK_NUM_SHIFT (0U)
#define DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_BLK_NUM_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_BLK_NUM(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_BLK_NUM_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_BLK_NUM_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_BNK_NUM_MASK (0x2U)
#define DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_BNK_NUM_SHIFT (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_BNK_NUM_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_BNK_NUM(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_BNK_NUM_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_BNK_NUM_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_TCM_SIZE_MASK (0x1CU)
#define DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_TCM_SIZE_SHIFT (2U)
#define DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_TCM_SIZE_WIDTH (3U)
#define DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_TCM_SIZE(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_TCM_SIZE_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_TCM_SIZE_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_EDAP_AXI_WID_MASK (0x20U)
#define DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_EDAP_AXI_WID_SHIFT (5U)
#define DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_EDAP_AXI_WID_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_EDAP_AXI_WID(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_EDAP_AXI_WID_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_EDAP_AXI_WID_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_EDP_AXI_WID_MASK (0x180U)
#define DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_EDP_AXI_WID_SHIFT (7U)
#define DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_EDP_AXI_WID_WIDTH (2U)
#define DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_EDP_AXI_WID(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_EDP_AXI_WID_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_HDCFG_EDP_AXI_WID_MASK)
/*! @} */

/*! @name MSS_GPOUT - MSS General Purpose 2 */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_MSS_GPOUT_GPOUT_MASK (0xFFFFFFFFU)
#define DATA_MEMORY_SUBSYSTEM_MSS_GPOUT_GPOUT_SHIFT (0U)
#define DATA_MEMORY_SUBSYSTEM_MSS_GPOUT_GPOUT_WIDTH (32U)
#define DATA_MEMORY_SUBSYSTEM_MSS_GPOUT_GPOUT(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_GPOUT_GPOUT_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_GPOUT_GPOUT_MASK)
/*! @} */

/*! @name MSS_DACC - DDMA Access Configuration */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_MSS_DACC_DOL_MASK  (0xF0U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DACC_DOL_SHIFT (4U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DACC_DOL_WIDTH (4U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DACC_DOL(x)    (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DACC_DOL_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DACC_DOL_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DACC_UOL_MASK  (0x700U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DACC_UOL_SHIFT (8U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DACC_UOL_WIDTH (3U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DACC_UOL(x)    (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DACC_UOL_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DACC_UOL_MASK)
/*! @} */

/*! @name MSS_SDCFG - MSS SW Configuration */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_MSS_SDCFG_DAPE_MASK (0x400000U)
#define DATA_MEMORY_SUBSYSTEM_MSS_SDCFG_DAPE_SHIFT (22U)
#define DATA_MEMORY_SUBSYSTEM_MSS_SDCFG_DAPE_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_SDCFG_DAPE(x)  (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_SDCFG_DAPE_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_SDCFG_DAPE_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_SDCFG_EDAP_DS_MASK (0x2000000U)
#define DATA_MEMORY_SUBSYSTEM_MSS_SDCFG_EDAP_DS_SHIFT (25U)
#define DATA_MEMORY_SUBSYSTEM_MSS_SDCFG_EDAP_DS_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_SDCFG_EDAP_DS(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_SDCFG_EDAP_DS_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_SDCFG_EDAP_DS_MASK)
/*! @} */

/*! @name MSS_BARRIER - MSS Memory Barrier Control */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_MSS_BARRIER_INT_ACT_MASK (0x80U)
#define DATA_MEMORY_SUBSYSTEM_MSS_BARRIER_INT_ACT_SHIFT (7U)
#define DATA_MEMORY_SUBSYSTEM_MSS_BARRIER_INT_ACT_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_BARRIER_INT_ACT(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_BARRIER_INT_ACT_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_BARRIER_INT_ACT_MASK)
/*! @} */

/*! @name D_DMAB - DDMA Status */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_D_DMAB_Reserved0_MASK (0x1U)
#define DATA_MEMORY_SUBSYSTEM_D_DMAB_Reserved0_SHIFT (0U)
#define DATA_MEMORY_SUBSYSTEM_D_DMAB_Reserved0_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_D_DMAB_Reserved0(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_D_DMAB_Reserved0_SHIFT)) & DATA_MEMORY_SUBSYSTEM_D_DMAB_Reserved0_MASK)
/*! @} */

/*! @name DBG_WRC0 - EDP Write Response Counter */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_DBG_WRC0_WRC0_MASK (0x7FU)
#define DATA_MEMORY_SUBSYSTEM_DBG_WRC0_WRC0_SHIFT (0U)
#define DATA_MEMORY_SUBSYSTEM_DBG_WRC0_WRC0_WIDTH (7U)
#define DATA_MEMORY_SUBSYSTEM_DBG_WRC0_WRC0(x)   (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_DBG_WRC0_WRC0_SHIFT)) & DATA_MEMORY_SUBSYSTEM_DBG_WRC0_WRC0_MASK)

#define DATA_MEMORY_SUBSYSTEM_DBG_WRC0_MAX_OS0_MASK (0x180U)
#define DATA_MEMORY_SUBSYSTEM_DBG_WRC0_MAX_OS0_SHIFT (7U)
#define DATA_MEMORY_SUBSYSTEM_DBG_WRC0_MAX_OS0_WIDTH (2U)
#define DATA_MEMORY_SUBSYSTEM_DBG_WRC0_MAX_OS0(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_DBG_WRC0_MAX_OS0_SHIFT)) & DATA_MEMORY_SUBSYSTEM_DBG_WRC0_MAX_OS0_MASK)
/*! @} */

/*! @name MSS_DDTC - DDMA Linear Transfer Size */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_MSS_DDTC_DDTC_MASK (0x3FFFFFU)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDTC_DDTC_SHIFT (0U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDTC_DDTC_WIDTH (22U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDTC_DDTC(x)   (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDTC_DDTC_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDTC_DDTC_MASK)
/*! @} */

/*! @name MSS_2DCFG1 - DDMA Configuration 1 */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_TDT_MASK (0x1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_TDT_SHIFT (0U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_TDT_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_TDT(x)  (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_TDT_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_TDT_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_CLIP_EN_MASK (0xCU)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_CLIP_EN_SHIFT (2U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_CLIP_EN_WIDTH (2U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_CLIP_EN(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_CLIP_EN_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_CLIP_EN_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_TRTYP_MASK (0x70U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_TRTYP_SHIFT (4U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_TRTYP_WIDTH (3U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_TRTYP(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_TRTYP_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_TRTYP_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_UNPACK_MASK (0xF00U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_UNPACK_SHIFT (8U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_UNPACK_WIDTH (4U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_UNPACK(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_UNPACK_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_UNPACK_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_ELEMENT_SZ_MASK (0x3000U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_ELEMENT_SZ_SHIFT (12U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_ELEMENT_SZ_WIDTH (2U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_ELEMENT_SZ(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_ELEMENT_SZ_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_ELEMENT_SZ_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_CH_NUM_MASK (0xC000U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_CH_NUM_SHIFT (14U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_CH_NUM_WIDTH (2U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_CH_NUM(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_CH_NUM_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_2DCFG1_CH_NUM_MASK)
/*! @} */

/*! @name MSS_2DCFG2 - DDMA Configuration 2 */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG2_TILE_WIDTH_MASK (0xFFFFU)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG2_TILE_WIDTH_SHIFT (0U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG2_TILE_WIDTH_WIDTH (16U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG2_TILE_WIDTH(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_2DCFG2_TILE_WIDTH_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_2DCFG2_TILE_WIDTH_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG2_TILE_HEIGHT_MASK (0xFFFF0000U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG2_TILE_HEIGHT_SHIFT (16U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG2_TILE_HEIGHT_WIDTH (16U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG2_TILE_HEIGHT(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_2DCFG2_TILE_HEIGHT_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_2DCFG2_TILE_HEIGHT_MASK)
/*! @} */

/*! @name MSS_2DCFG3 - DDMA Configuration 3 */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG3_INT_STRIDE_MASK (0xFFFFU)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG3_INT_STRIDE_SHIFT (0U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG3_INT_STRIDE_WIDTH (16U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG3_INT_STRIDE(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_2DCFG3_INT_STRIDE_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_2DCFG3_INT_STRIDE_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG3_EXT_STRIDE_MASK (0xFFFF0000U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG3_EXT_STRIDE_SHIFT (16U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG3_EXT_STRIDE_WIDTH (16U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG3_EXT_STRIDE(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_2DCFG3_EXT_STRIDE_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_2DCFG3_EXT_STRIDE_MASK)
/*! @} */

/*! @name MSS_2DCFG4 - DDMA Configuration 4 */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG4_PADVAL_MASK (0xFFFFFFFFU)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG4_PADVAL_SHIFT (0U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG4_PADVAL_WIDTH (32U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG4_PADVAL(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_2DCFG4_PADVAL_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_2DCFG4_PADVAL_MASK)
/*! @} */

/*! @name MSS_2DCFG5 - DDMA Configuration 5 */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG5_TCLIP_MASK (0xFFFFU)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG5_TCLIP_SHIFT (0U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG5_TCLIP_WIDTH (16U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG5_TCLIP(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_2DCFG5_TCLIP_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_2DCFG5_TCLIP_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG5_BCLIP_MASK (0xFFFF0000U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG5_BCLIP_SHIFT (16U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG5_BCLIP_WIDTH (16U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG5_BCLIP(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_2DCFG5_BCLIP_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_2DCFG5_BCLIP_MASK)
/*! @} */

/*! @name MSS_2DCFG6 - DDMA Configuration 6 */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG6_LCLIP_MASK (0xFFFFU)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG6_LCLIP_SHIFT (0U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG6_LCLIP_WIDTH (16U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG6_LCLIP(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_2DCFG6_LCLIP_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_2DCFG6_LCLIP_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG6_RCLIP_MASK (0xFFFF0000U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG6_RCLIP_SHIFT (16U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG6_RCLIP_WIDTH (16U)
#define DATA_MEMORY_SUBSYSTEM_MSS_2DCFG6_RCLIP(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_2DCFG6_RCLIP_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_2DCFG6_RCLIP_MASK)
/*! @} */

/*! @name MSS_DDQS - DDMA Status */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QEMPTY_MASK (0x1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QEMPTY_SHIFT (0U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QEMPTY_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QEMPTY(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QEMPTY_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QEMPTY_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QFULL_MASK (0x2U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QFULL_SHIFT (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QFULL_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QFULL(x)  (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QFULL_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QFULL_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QCOUNT_MASK (0xCU)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QCOUNT_SHIFT (2U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QCOUNT_WIDTH (2U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QCOUNT(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QCOUNT_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QCOUNT_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QAUTO_MASK (0x40U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QAUTO_SHIFT (6U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QAUTO_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QAUTO(x)  (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QAUTO_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QAUTO_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QOVFL_MASK (0x80U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QOVFL_SHIFT (7U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QOVFL_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QOVFL(x)  (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QOVFL_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDQS_QOVFL_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_STS0_MASK (0x300U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_STS0_SHIFT (8U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_STS0_WIDTH (2U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_STS0(x)   (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDQS_STS0_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDQS_STS0_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_STS1_MASK (0xC00U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_STS1_SHIFT (10U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_STS1_WIDTH (2U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_STS1(x)   (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDQS_STS1_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDQS_STS1_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_STS2_MASK (0x3000U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_STS2_SHIFT (12U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_STS2_WIDTH (2U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_STS2(x)   (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDQS_STS2_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDQS_STS2_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_LSID_MASK (0x30000U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_LSID_SHIFT (16U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_LSID_WIDTH (2U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDQS_LSID(x)   (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDQS_LSID_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDQS_LSID_MASK)
/*! @} */

/*! @name MSS_DDEA - DDMA Address 1 */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_MSS_DDEA_DDEA_MASK (0xFFFFFFFFU)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDEA_DDEA_SHIFT (0U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDEA_DDEA_WIDTH (32U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDEA_DDEA(x)   (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDEA_DDEA_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDEA_DDEA_MASK)
/*! @} */

/*! @name MSS_DDIA - DDMA Address 2 */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_MSS_DDIA_DDIA_MASK (0xFFFFFFFFU)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDIA_DDIA_SHIFT (0U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDIA_DDIA_WIDTH (32U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDIA_DDIA(x)   (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDIA_DDIA_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDIA_DDIA_MASK)
/*! @} */

/*! @name MSS_DDCL - DDMA Control */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_IIT_MASK  (0x1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_IIT_SHIFT (0U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_IIT_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_IIT(x)    (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDCL_IIT_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDCL_IIT_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_TRID_MASK (0xEU)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_TRID_SHIFT (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_TRID_WIDTH (3U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_TRID(x)   (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDCL_TRID_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDCL_TRID_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_BSZ_MASK  (0xF0U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_BSZ_SHIFT (4U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_BSZ_WIDTH (4U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_BSZ(x)    (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDCL_BSZ_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDCL_BSZ_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_DDST_MASK (0x100U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_DDST_SHIFT (8U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_DDST_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_DDST(x)   (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDCL_DDST_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDCL_DDST_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_EXTW_MASK (0x200U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_EXTW_SHIFT (9U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_EXTW_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_EXTW(x)   (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDCL_EXTW_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDCL_EXTW_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_DDIE_MASK (0x400U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_DDIE_SHIFT (10U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_DDIE_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_DDIE(x)   (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDCL_DDIE_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDCL_DDIE_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_MESSAGE_MASK (0x10000U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_MESSAGE_SHIFT (16U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_MESSAGE_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_MESSAGE(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDCL_MESSAGE_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDCL_MESSAGE_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_DDMA_TASK_ID_MASK (0x7F000000U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_DDMA_TASK_ID_SHIFT (24U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_DDMA_TASK_ID_WIDTH (7U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDCL_DDMA_TASK_ID(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDCL_DDMA_TASK_ID_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDCL_DDMA_TASK_ID_MASK)
/*! @} */

/*! @name DDMA_PAUSE - DDMA Pause Control */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_DDMA_PAUSE_DDMA_PAUSE_MASK (0x1U)
#define DATA_MEMORY_SUBSYSTEM_DDMA_PAUSE_DDMA_PAUSE_SHIFT (0U)
#define DATA_MEMORY_SUBSYSTEM_DDMA_PAUSE_DDMA_PAUSE_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_DDMA_PAUSE_DDMA_PAUSE(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_DDMA_PAUSE_DDMA_PAUSE_SHIFT)) & DATA_MEMORY_SUBSYSTEM_DDMA_PAUSE_DDMA_PAUSE_MASK)

#define DATA_MEMORY_SUBSYSTEM_DDMA_PAUSE_DDMA_PAUSE_STATUS_MASK (0x2U)
#define DATA_MEMORY_SUBSYSTEM_DDMA_PAUSE_DDMA_PAUSE_STATUS_SHIFT (1U)
#define DATA_MEMORY_SUBSYSTEM_DDMA_PAUSE_DDMA_PAUSE_STATUS_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_DDMA_PAUSE_DDMA_PAUSE_STATUS(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_DDMA_PAUSE_DDMA_PAUSE_STATUS_SHIFT)) & DATA_MEMORY_SUBSYSTEM_DDMA_PAUSE_DDMA_PAUSE_STATUS_MASK)
/*! @} */

/*! @name MSS_DDESC_ID - DDMA Interrupt Source */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q0_TASK_MASK (0x1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q0_TASK_SHIFT (0U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q0_TASK_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q0_TASK(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q0_TASK_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q0_TASK_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q1_TASK_MASK (0x2U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q1_TASK_SHIFT (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q1_TASK_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q1_TASK(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q1_TASK_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q1_TASK_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q2_TASK_MASK (0x4U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q2_TASK_SHIFT (2U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q2_TASK_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q2_TASK(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q2_TASK_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q2_TASK_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q3_TASK_MASK (0x8U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q3_TASK_SHIFT (3U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q3_TASK_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q3_TASK(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q3_TASK_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_Q3_TASK_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_MSTR_TASK_MASK (0x10000U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_MSTR_TASK_SHIFT (16U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_MSTR_TASK_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_MSTR_TASK(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_MSTR_TASK_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDESC_ID_MSTR_TASK_MASK)
/*! @} */

/*! @name MSS_DDESC_OV - DDMA Task ID Overwrite Indication */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q0_TASK_OV_MASK (0x1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q0_TASK_OV_SHIFT (0U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q0_TASK_OV_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q0_TASK_OV(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q0_TASK_OV_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q0_TASK_OV_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q1_TASK_OV_MASK (0x2U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q1_TASK_OV_SHIFT (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q1_TASK_OV_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q1_TASK_OV(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q1_TASK_OV_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q1_TASK_OV_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q2_TASK_OV_MASK (0x4U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q2_TASK_OV_SHIFT (2U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q2_TASK_OV_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q2_TASK_OV(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q2_TASK_OV_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q2_TASK_OV_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q3_TASK_OV_MASK (0x8U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q3_TASK_OV_SHIFT (3U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q3_TASK_OV_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q3_TASK_OV(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q3_TASK_OV_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_Q3_TASK_OV_MASK)

#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_MSTR_TASK_OV_MASK (0x10000U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_MSTR_TASK_OV_SHIFT (16U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_MSTR_TASK_OV_WIDTH (1U)
#define DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_MSTR_TASK_OV(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_MSTR_TASK_OV_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSS_DDESC_OV_MSTR_TASK_OV_MASK)
/*! @} */

/*! @name MSTR_TASK_ID - DDMA Task (Master) ID */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_MSTR_TASK_ID_DDMA_TASK_ID_MASK (0x7FU)
#define DATA_MEMORY_SUBSYSTEM_MSTR_TASK_ID_DDMA_TASK_ID_SHIFT (0U)
#define DATA_MEMORY_SUBSYSTEM_MSTR_TASK_ID_DDMA_TASK_ID_WIDTH (7U)
#define DATA_MEMORY_SUBSYSTEM_MSTR_TASK_ID_DDMA_TASK_ID(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_MSTR_TASK_ID_DDMA_TASK_ID_SHIFT)) & DATA_MEMORY_SUBSYSTEM_MSTR_TASK_ID_DDMA_TASK_ID_MASK)
/*! @} */

/*! @name QMAN_TASK_IDX - QMAN Task IDx */
/*! @{ */

#define DATA_MEMORY_SUBSYSTEM_QMAN_TASK_IDX_DDMA_TASK_ID_MASK (0x7FU)
#define DATA_MEMORY_SUBSYSTEM_QMAN_TASK_IDX_DDMA_TASK_ID_SHIFT (0U)
#define DATA_MEMORY_SUBSYSTEM_QMAN_TASK_IDX_DDMA_TASK_ID_WIDTH (7U)
#define DATA_MEMORY_SUBSYSTEM_QMAN_TASK_IDX_DDMA_TASK_ID(x) (((uint32_t)(((uint32_t)(x)) << DATA_MEMORY_SUBSYSTEM_QMAN_TASK_IDX_DDMA_TASK_ID_SHIFT)) & DATA_MEMORY_SUBSYSTEM_QMAN_TASK_IDX_DDMA_TASK_ID_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group DATA_MEMORY_SUBSYSTEM_Register_Masks */

/*!
 * @}
 */ /* end of group DATA_MEMORY_SUBSYSTEM_Peripheral_Access_Layer */

#endif  /* #if !defined(S32Z2_DATA_MEMORY_SUBSYSTEM_H_) */
