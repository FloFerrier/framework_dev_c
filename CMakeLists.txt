cmake_minimum_required(VERSION 3.22)
project(framework-test-c)

set(CMAKE_C_STANDARD 99)

# Modules that exist in both our release and our unit tests, are added now
include_directories(src)
add_subdirectory(src)

if(CMAKE_BUILD_TYPE STREQUAL Release)
# If we had any files that ONLY were compiled into our release, for example startup code,
# it's really handy to put it here.
	message(INFO " Release selected.")
elseif(CMAKE_BUILD_TYPE STREQUAL Test)
	# It also needs to understand we have code in source and test directories
	include_directories(test)
	include_directories(unity)
	add_subdirectory(unity)
	add_subdirectory(test)
	message(INFO " Test selected.")
else()
	message(FATAL_ERROR " Specify CMAKE_BUILD_TYPE as Release or Test")
endif()
