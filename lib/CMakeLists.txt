set(SOURCE_FILES
	./lib_app.c
	./lib_app.h)

add_library(lib_app STATIC ${SOURCE_FILES})

set_target_properties(lib_app PROPERTIES LINK_FLAGS "--coverage")