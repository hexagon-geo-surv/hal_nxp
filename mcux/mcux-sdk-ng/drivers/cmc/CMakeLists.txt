# Copyright 2024 NXP
#
# SPDX-License-Identifier: BSD-3-Clause

if(CONFIG_MCUX_COMPONENT_driver.cmc)
    mcux_component_version(2.3.1)

    mcux_add_source(SOURCES fsl_cmc.c fsl_cmc.h)

    mcux_add_include(INCLUDES .)

endif()
