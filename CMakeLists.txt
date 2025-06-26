cmake_minimum_required(VERSION 3.5)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project("GAME" C)
enable_testing()
add_subdirectory("${PROJECT_SOURCE_DIR}/test")
add_subdirectory("${PROJECT_SOURCE_DIR}/src")

set(EXECUTABLE_NAME "Game")
add_executable(${EXECUTABLE_NAME} "Main.c")
target_link_libraries(${EXECUTABLE_NAME} Source)

# make includes work from the root of the project
target_include_directories(${EXECUTABLE_NAME} PRIVATE "${PROJECT_SOURCE_DIR}/test" PRIVATE "${PROJECT_SOURCE_DIR}/src")

# put the output executable in a folder named after it
set_target_properties(${EXECUTABLE_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/distributable/${PROJECT_NAME}")

# copy assets folder to build results
add_custom_command(TARGET ${EXECUTABLE_NAME} POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_directory
                       ${CMAKE_SOURCE_DIR}/assets $<TARGET_FILE_DIR:${EXECUTABLE_NAME}>/assets)
