# Copyright 2024 NXP
#
# SPDX-License-Identifier: BSD-3-Clause

if(CONFIG_MCUX_COMPONENT_driver.lpc_dac)
    mcux_component_version(2.0.2)

    mcux_add_source(SOURCES fsl_dac.h fsl_dac.c)

    mcux_add_include(INCLUDES .)

endif()
