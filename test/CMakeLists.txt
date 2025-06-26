file(GLOB_RECURSE TEST_SOURCE_FILES CONFIGURE_DEPENDS *.c)
file(GLOB_RECURSE TEST_HEADER_FILES CONFIGURE_DEPENDS *.h)

add_executable("UnitTest" ${TEST_SOURCE_FILES} ${TEST_HEADER_FILES})
add_test("UnitTests" UnitTest)
target_link_libraries("UnitTest" Source)

# make includes work from the root of the project
target_include_directories("UnitTest" PRIVATE "${PROJECT_SOURCE_DIR}")
