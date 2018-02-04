set(UNIT_TEST_LIST
  sorts)

include(${CMAKE_SOURCE_DIR}/tests/cmake/Catch.cmake)

foreach(NAME IN LISTS UNIT_TEST_LIST)
  list(APPEND UNIT_TEST_SOURCE_LIST
    ${NAME}.test.cpp)
endforeach()

set(TARGET_NAME sorts-test)

add_executable(${TARGET_NAME}
  tester.cpp
  ${UNIT_TEST_SOURCE_LIST})

target_link_libraries(${TARGET_NAME} PUBLIC sorts)

target_include_directories(${TARGET_NAME} PUBLIC ../externals/)

add_test(
  NAME ${TARGET_NAME}
  COMMAND ${TARGET_NAME} -o report.xml -r junit)

catch_discover_tests(${TARGET_NAME} TEST_SPEC * EXTRA_ARGS -r compact)
