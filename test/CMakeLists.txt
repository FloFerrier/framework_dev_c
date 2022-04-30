set(TEST_SOURCES
	test_main.c)

add_executable(test_lib_app ${TEST_SOURCES})

set_target_properties(test_lib_app PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

add_test(NAME test_lib_app COMMAND test_lib_app)

target_link_libraries(test_lib_app PUBLIC lib_app unity)

set_target_properties(lib_app PROPERTIES COMPILE_FLAGS "--coverage")
set_target_properties(lib_app PROPERTIES LINK_FLAGS "--coverage")

set_target_properties(test_lib_app PROPERTIES COMPILE_FLAGS "--coverage")
set_target_properties(test_lib_app PROPERTIES LINK_FLAGS "--coverage")