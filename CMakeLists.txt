cmake_minimum_required(VERSION 3.18)
project(framework-test-c)

set(CMAKE_C_STANDARD 99)

include_directories(lib)
add_subdirectory(lib)

set(BINARY_DIR ${CMAKE_BINARY_DIR})

message(INFO " CMAKE_BUILD_TYPE= ${CMAKE_BUILD_TYPE}")

if(CMAKE_BUILD_TYPE STREQUAL Debug)
	include_directories(src)
	add_subdirectory(src)
	message(INFO " Debug selected.")

elseif(CMAKE_BUILD_TYPE STREQUAL Release)
	include_directories(src)
	add_subdirectory(src)
	message(INFO " Release selected.")

elseif(CMAKE_BUILD_TYPE STREQUAL Test)
	include_directories(test)
	include_directories(unity)
	add_subdirectory(unity)
	add_subdirectory(test)
	message(INFO " Test selected.")

else()
	message(ERROR " Specify CMAKE_BUILD_TYPE as Debug, Test or Release")

endif()
