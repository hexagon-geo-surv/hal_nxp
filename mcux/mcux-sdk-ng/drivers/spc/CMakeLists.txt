# Copyright 2024 NXP
#
# SPDX-License-Identifier: BSD-3-Clause

if(CONFIG_MCUX_COMPONENT_driver.spc)
    mcux_component_version(2.5.0)

    mcux_add_source(SOURCES fsl_spc.c fsl_spc.h)

    mcux_add_include(INCLUDES .)

endif()
