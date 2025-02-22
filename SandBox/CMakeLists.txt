cmake_minimum_required(VERSION 3.10)
project(SandboxApp)


add_definitions(-DPLATFORM_WINDOWS)


aux_source_directory(../Juice/src IncludeSrc)
include_directories(${IncludeSrc})

find_library(Juice_LIB Juice lib)

add_executable(App src/App.cpp)
target_link_libraries(App ${Juice_LIB})












