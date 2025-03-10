#Description: FLEXIO UART DMA Driver; user_visible: True
include_guard(GLOBAL)
message("driver_flexio_uart_dma component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/uart/fsl_flexio_uart_dma.c
)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/uart/.
)


include(driver_flexio_uart)
include(driver_dma)
