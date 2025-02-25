cmake_minimum_required(VERSION 3.10)

# Starting Juice project
project(Juice)


# add includes
include_directories(libs/spdlog/include)
include_directories(src/Core/include)

# add definitions
add_definitions(-DPLATFORM_WINDOWS)
add_definitions(-DJUICE_OUTPUT_DLL)

add_library(Juice SHARED src/Core/kerbol.cpp)

