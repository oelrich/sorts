set(TARGET_NAME sorts)

add_library(${TARGET_NAME}
  program.cpp)

add_executable(${TARGET_NAME}-bin program.cpp)
set_target_properties(${TARGET_NAME}-bin
  PROPERTIES OUTPUT_NAME ${TARGET_NAME})

target_compile_features(${TARGET_NAME} PRIVATE cxx_lambda_init_captures)