/*
** ###################################################################
**     Processors:          LPC51U68JBD48
**                          LPC51U68JBD64
**
**     Compilers:           GNU C Compiler
**                          IAR ANSI C/C++ Compiler for ARM
**                          Keil ARM C/C++ Compiler
**                          MCUXpresso Compiler
**
**     Reference manual:    LPC51U68 User manual User manual Rev. 1.0 13 Dec 2017
**     Version:             rev. 1.0, 2017-12-15
**     Build:               b240704
**
**     Abstract:
**         Provides a system configuration function and a global variable that
**         contains the system frequency. It configures the device and initializes
**         the oscillator (PLL) that is part of the microcontroller device.
**
**     Copyright 2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2024 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2017-12-15)
**         Initial version.
**
** ###################################################################
*/

/*!
 * @file LPC51U68
 * @version 1.0
 * @date 2017-12-15
 * @brief Device specific configuration file for LPC51U68 (implementation file)
 *
 * Provides a system configuration function and a global variable that contains
 * the system frequency. It configures the device and initializes the oscillator
 * (PLL) that is part of the microcontroller device.
 */

#include <stdint.h>
#include "fsl_device_registers.h"

#define NVALMAX (0x100)
#define PVALMAX (0x20U)
#define MVALMAX (0x8000U)
#define PLL_SSCG0_MDEC_VAL_P (0U)                                 /* MDEC is in bits  16 downto 0 */
#define PLL_SSCG0_MDEC_VAL_M (0x1FFFFUL << PLL_SSCG0_MDEC_VAL_P) /* NDEC is in bits  9 downto 0 */
#define PLL_NDEC_VAL_P (0U)                                       /* NDEC is in bits  9:0 */
#define PLL_NDEC_VAL_M (0x3FFUL << PLL_NDEC_VAL_P)
#define PLL_PDEC_VAL_P (0U) /* PDEC is in bits 6:0 */
#define PLL_PDEC_VAL_M (0x3FFUL << PLL_PDEC_VAL_P)

/* ----------------------------------------------------------------------------
   -- Core clock
   ---------------------------------------------------------------------------- */


static const uint8_t wdtFreqLookup[32] = {0, 8, 12, 15, 18, 20, 24, 26, 28, 30, 32, 34, 36, 38, 40, 41, 42, 44, 45, 46,
                                            48, 49, 50, 52, 53, 54, 56, 57, 58, 59, 60, 61};

static uint32_t GetWdtOscFreq(void)
{
    uint8_t freq_sel, div_sel;
    div_sel = (uint8_t)((SYSCON->WDTOSCCTRL & SYSCON_WDTOSCCTRL_DIVSEL_MASK) + 1UL) << 1UL;
    freq_sel = wdtFreqLookup[((SYSCON->WDTOSCCTRL & SYSCON_WDTOSCCTRL_FREQSEL_MASK) >> SYSCON_WDTOSCCTRL_FREQSEL_SHIFT)];
    return ((uint32_t) freq_sel * 50000U)/((uint32_t)div_sel);
}

/* Find decoded N value for raw NDEC value */
static uint32_t pllDecodeN(uint32_t NDEC)
{
    uint32_t n, x, i;

    /* Find NDec */
    switch (NDEC)
    {
        case 0xFFFU:
            n = 0UL;
            break;
        case 0x302U:
            n = 1UL;
            break;
        case 0x202U:
            n = 2UL;
            break;
        default:
            x = 0x080UL;
            n = 0xFFFFFFFFUL;
            for (i = NVALMAX; i >= 3UL; i--)
            {
                x = (((x ^ (x >> 2UL) ^ (x >> 3UL) ^ (x >> 4UL)) & 1UL) << 7UL) | ((x >> 1UL) & 0x7FUL);
                if ((x & (PLL_NDEC_VAL_M >> PLL_NDEC_VAL_P)) == NDEC)
                {
                    /* Decoded value of NDEC */
                    n = i;
                }
                if (n != 0xFFFFFFFFUL)
                {
                    break;
                }
            }
            break;
    }
    return n;
}

/* Find decoded P value for raw PDEC value */
static uint32_t pllDecodeP(uint32_t PDEC)
{
    uint32_t p, x, i;
    /* Find PDec */
    switch (PDEC)
    {
        case 0xFFU:
            p = 0UL;
            break;
        case 0x62U:
            p = 1UL;
            break;
        case 0x42U:
            p = 2UL;
            break;
        default:
            x = 0x10UL;
            p = 0xFFFFFFFFUL;
            for (i = PVALMAX; i >= 3UL; i--)
            {
                x = (((x ^ (x >> 2UL)) & 1UL) << 4UL) | ((x >> 1UL) & 0xFUL);
                if ((x & (PLL_PDEC_VAL_M >> PLL_PDEC_VAL_P)) == PDEC)
                {
                    /* Decoded value of PDEC */
                    p = i;
                }
                if (p != 0xFFFFFFFFUL)
                {
                    break;
                }
            }
            break;
    }
    return p;
}

/* Find decoded M value for raw MDEC value */
static uint32_t pllDecodeM(uint32_t MDEC)
{
    uint32_t m, i, x;

    /* Find MDec */
    switch (MDEC)
    {
        case 0xFFFFFU:
            m = 0UL;
            break;
        case 0x18003U:
            m = 1UL;
            break;
        case 0x10003U:
            m = 2UL;
            break;
        default:
            x = 0x04000UL;
            m = 0xFFFFFFFFUL;
            for (i = MVALMAX; i >= 3UL; i--)
            {
                x = (((x ^ (x >> 1UL)) & 1UL) << 14UL) | ((x >> 1UL) & 0x3FFFUL);
                if ((x & (PLL_SSCG0_MDEC_VAL_M >> PLL_SSCG0_MDEC_VAL_P)) == MDEC)
                {
                    /* Decoded value of MDEC */
                    m = i;
                }
                if (m != 0xFFFFFFFFUL)
                {
                    break;
                }
            }
            break;
    }
    return m;
}

/* Get predivider (N) from PLL NDEC setting */
static uint32_t findPllPreDiv(uint32_t ctrlReg, uint32_t nDecReg)
{
    uint32_t preDiv = 1U;

    /* Direct input is not used? */
    if ((ctrlReg & SYSCON_SYSPLLCTRL_DIRECTI_MASK) == 0UL)
    {
        /* Decode NDEC value to get (N) pre divider */
        preDiv = pllDecodeN(nDecReg & 0x3FFUL);
        if (preDiv == 0UL)
        {
            preDiv = 1U;
        }
    }
    /* Adjusted by 1, directi is used to bypass */
    return preDiv;
}

/* Get postdivider (P) from PLL PDEC setting */
static uint32_t findPllPostDiv(uint32_t ctrlReg, uint32_t pDecReg)
{
    uint32_t postDiv = 1U;

    /* Direct input is not used? */
    if ((ctrlReg & SYSCON_SYSPLLCTRL_DIRECTO_MASK) == 0UL)
    {
        /* Decode PDEC value to get (P) post divider */
        postDiv = 2UL * pllDecodeP(pDecReg & 0x7FUL);
        if (postDiv == 0UL)
        {
            postDiv = 2U;
        }
    }
    /* Adjusted by 1, directo is used to bypass */
    return postDiv;
}

/* Get multiplier (M) from PLL MDEC and BYPASS_FBDIV2 settings */
static uint32_t findPllMMult(uint32_t ctrlReg, uint32_t mDecReg)
{
    uint32_t mMult = 1U;

    /* Decode MDEC value to get (M) multiplier */
    mMult = pllDecodeM(mDecReg & 0x1FFFFUL);
    /* Extra multiply by 2 needed? */
    if ((ctrlReg & SYSCON_SYSPLLCTRL_BYPASSCCODIV2_MASK) == 0UL)
    {
        mMult = mMult << 1;
    }
    if (mMult == 0UL)
    {
        mMult = 1U;
    }
    return mMult;
}



/* ----------------------------------------------------------------------------
   -- Core clock
   ---------------------------------------------------------------------------- */

uint32_t SystemCoreClock = DEFAULT_SYSTEM_CLOCK;

/* ----------------------------------------------------------------------------
   -- SystemInit()
   ---------------------------------------------------------------------------- */

void SystemInit (void) {

#if defined(__CODE_RED)
    extern void(*const g_pfnVectors[]) (void);
    SCB->VTOR = (uint32_t) &g_pfnVectors;
#else
    extern void *__Vectors;
    SCB->VTOR = (uint32_t) &__Vectors;
#endif

  SystemInitHook();
}

/* ----------------------------------------------------------------------------
   -- SystemCoreClockUpdate()
   ---------------------------------------------------------------------------- */

void SystemCoreClockUpdate (void) {
    uint32_t clkRate = 0U;
    uint32_t prediv, postdiv;
    uint32_t bypassccodiv2;
    uint64_t workRate;

    switch (SYSCON->MAINCLKSELB & SYSCON_MAINCLKSELB_SEL_MASK)
    {
        case 0x00U: /* MAINCLKSELA clock (main_clk_a)*/
            switch (SYSCON->MAINCLKSELA & SYSCON_MAINCLKSELA_SEL_MASK)
            {
                case 0x00U: /* FRO 12 MHz (fro_12m) */
                    clkRate = CLK_FRO_12MHZ;
                    break;
                case 0x01U: /* CLKIN source (clk_in) */
                    clkRate = CLK_CLK_IN;
                    break;
                case 0x02U: /* Watchdog oscillator (wdt_clk) */
                    clkRate = GetWdtOscFreq();
                    break;
                default: /* = 0x03 = FRO 96 or 48 MHz (fro_hf) */
                    if ((SYSCON->FROCTRL & SYSCON_FROCTRL_SEL_MASK) == SYSCON_FROCTRL_SEL_MASK)
                    {
                        clkRate = CLK_FRO_96MHZ;
                    }
                    else
                    {
                        clkRate = CLK_FRO_48MHZ;
                    }
                    break;
            }
            break;
        case 0x02U: /* System PLL clock (pll_clk)*/
            switch (SYSCON->SYSPLLCLKSEL & SYSCON_SYSPLLCLKSEL_SEL_MASK)
            {
                case 0x00U: /* FRO 12 MHz (fro_12m) */
                    clkRate = CLK_FRO_12MHZ;
                    break;
                case 0x01U: /* CLKIN source (clk_in) */
                    clkRate = CLK_CLK_IN;
                    break;
                case 0x02U: /* Watchdog oscillator (wdt_clk) */
                    clkRate = GetWdtOscFreq();
                    break;
                case 0x03U: /* RTC oscillator 32 kHz output (32k_clk) */
                    clkRate = CLK_RTC_32K_CLK;
                    break;
                default:
                    clkRate = 0U;
                    break;
            }
            if ((SYSCON->SYSPLLCTRL & SYSCON_SYSPLLCTRL_BYPASS_MASK) == 0U)
            {
                /* PLL is not in bypass mode, get pre-divider, post-divider, and M divider */
                prediv = findPllPreDiv(SYSCON->SYSPLLCTRL, SYSCON->SYSPLLNDEC);
                postdiv = findPllPostDiv(SYSCON->SYSPLLCTRL, SYSCON->SYSPLLPDEC);
                /* Adjust input clock */
                clkRate = clkRate / prediv;
                /* If using the SS, use the multiplier */
                if ((SYSCON->SYSPLLSSCTRL0 & SYSCON_SYSPLLSSCTRL0_SEL_EXT_MASK) == SYSCON_SYSPLLSSCTRL0_SEL_EXT_MASK)
                {
                    /* MDEC used for rate */
                    workRate = (uint64_t)(clkRate) * (uint64_t)findPllMMult(SYSCON->SYSPLLCTRL, SYSCON->SYSPLLSSCTRL0);
                }
                else
                {
                    /* SS multipler used for rate */
                    workRate = 0UL;
                    /* Adjust by fractional */
                    bypassccodiv2 = (uint32_t)((SYSCON->SYSPLLCTRL & SYSCON_SYSPLLCTRL_BYPASSCCODIV2_MASK) >> SYSCON_SYSPLLCTRL_BYPASSCCODIV2_SHIFT);
                    workRate = ((2U - bypassccodiv2) * (uint64_t)clkRate) * ((SYSCON->SYSPLLSSCTRL1 & 0x7FFFFUL) >> 11UL);
                }
                clkRate = (uint32_t)workRate / postdiv;
            }
            break;
        case 0x03U: /* RTC oscillator 32 kHz output (32k_clk) */
            clkRate = CLK_RTC_32K_CLK;
            break;
        default:
            clkRate = 0U;
            break;
    }
    SystemCoreClock = clkRate / ((SYSCON->AHBCLKDIV & 0xFFUL) + 1UL);

}

/* ----------------------------------------------------------------------------
   -- SystemInitHook()
   ---------------------------------------------------------------------------- */

__attribute__ ((weak)) void SystemInitHook (void) {
  /* Void implementation of the weak function. */
}
