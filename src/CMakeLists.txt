file(GLOB_RECURSE GAME_SOURCE_FILES CONFIGURE_DEPENDS *.c)
file(GLOB_RECURSE GAME_HEADER_FILES CONFIGURE_DEPENDS *.h)

add_library("Source" ${GAME_HEADER_FILES} ${GAME_SOURCE_FILES})
# make includes work from the root of the project
target_include_directories("Source" PRIVATE "${PROJECT_SOURCE_DIR}/src")
