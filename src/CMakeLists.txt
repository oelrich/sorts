
add_executable(sorts program.cpp)

target_compile_features(sorts PRIVATE cxx_lambda_init_captures)