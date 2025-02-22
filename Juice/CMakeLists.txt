cmake_minimum_required(VERSION 3.10)
project(Juice)


add_definitions(-DPLATFORM_WINDOWS)
add_definitions(-DJUICE_OUTPUT_DLL)

add_subdirectory(src)

