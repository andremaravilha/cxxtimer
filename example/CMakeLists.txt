cmake_minimum_required(VERSION 3.1)
project(cxxtimer-example)


# ==============================================================================
# C++ standard

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)


# ==============================================================================
# Paths to search for headers

include_directories(../)


# ==============================================================================
# Source files

set(SOURCE_FILES example.cpp)


# ==============================================================================
# Targets

add_executable(example ${SOURCE_FILES})
