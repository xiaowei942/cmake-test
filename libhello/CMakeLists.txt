set(LIB_SRC libhello.c)
add_definitions("-DLIB_EXPORT_BUILD")

add_library(libhello ${LIB_SRC})

set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
set_target_properties(libhello PROPERTIES OUTPUT_NAME "hello")
