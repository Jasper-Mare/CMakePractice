cmake_minimum_required(VERSION 3.5)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project("GAME" C)
enable_testing()
add_subdirectory("${PROJECT_SOURCE_DIR}/test")
add_subdirectory("${PROJECT_SOURCE_DIR}/src")
add_executable("Game" "Main.c")
target_link_libraries("Game" Source)
