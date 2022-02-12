set(TEST_SOURCES
	test_main.c)

add_executable(libapp_test ${TEST_SOURCES})

add_test(NAME libapp_test COMMAND libapp_test)

target_link_libraries(libapp_test PUBLIC app_lib unity)
