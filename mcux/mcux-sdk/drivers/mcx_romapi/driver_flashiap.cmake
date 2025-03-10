#Description: ROMAPI FLASHIAP Driver; user_visible: True
include_guard(GLOBAL)
message("driver_flashiap component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/flash/src/fsl_flash.c
)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/flash
)


include(driver_common)
