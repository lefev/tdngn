cmake_minimum_required (VERSION 3.8)
project ("tdngn")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

add_subdirectory(vendor)
add_subdirectory(src)
