set(LIB_SRC libhello.c)
add_definitions("-DLIB_EXPORT_BUILD")

if(use_shared_library)
	add_library(libhello SHARED ${LIB_SRC})
else()
	add_library(libhello ${LIB_SRC})
endif()

set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
set_target_properties(libhello PROPERTIES OUTPUT_NAME "hello")
