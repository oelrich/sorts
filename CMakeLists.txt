cmake_minimum_required(VERSION 3.5)

project(sorts)

if (MSVC)
  add_compile_options(-W4)
else()
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_subdirectory(src)
enable_testing()
add_subdirectory(tests)
