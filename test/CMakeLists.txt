set(TEST_SOURCES
	test_main.c)

include(FetchContent)
# Fetch Unity from GitHub
FetchContent_Declare(unity GIT_REPOSITORY https://github.com/ThrowTheSwitch/Unity.git GIT_TAG v2.5.2)
FetchContent_MakeAvailable(unity)

add_executable(test_lib_app ${TEST_SOURCES})

set_target_properties(test_lib_app PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${BINARY_DIR}")

add_test(NAME test_lib_app COMMAND test_lib_app)

target_link_libraries(test_lib_app PUBLIC lib_app unity)

set_target_properties(lib_app PROPERTIES COMPILE_FLAGS "--coverage")
set_target_properties(lib_app PROPERTIES LINK_FLAGS "--coverage")

set_target_properties(test_lib_app PROPERTIES COMPILE_FLAGS "--coverage")
set_target_properties(test_lib_app PROPERTIES LINK_FLAGS "--coverage")