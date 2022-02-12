set(SOURCE_FILES
	./main.c
	./lib_app.c
	./lib_app.h)

set(BINARY_DIR ${CMAKE_BINARY_DIR})

add_executable(release_run ${SOURCE_FILES})

add_library(app_lib STATIC ${SOURCE_FILES})
