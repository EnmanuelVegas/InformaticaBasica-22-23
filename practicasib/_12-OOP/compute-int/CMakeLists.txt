# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Enmanuel Vegas
# @date Diciembre, 2022
# @brief CMakeLists.txt simple example. You can use this as a template for your projects
#        This does not generate documentation
#        It doesn't build any library
# CMakeLists.txt defines the whole build
# CMake reads CMakeLists.txt sequentially
#
# Build process:
#   1. cd <project_folder>
#   2. mkdir build
#   3. cd build
#   4. cmake ..
#   5. make

cmake_minimum_required(VERSION 3.1)  # Mandatory

# set the project name 
project(racionales                # Mandatory
    VERSION 1.0
    DESCRIPTION "A simple CMake project"
    LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17) 						# Use c++17
set(CMAKE_CXX_STANDARD_REQUIRED True)

# tell cmake to output binaries here:
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR})

# Debug and release flags
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -Wextra -Wpedantic")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# tell cmake where to look for *.h files
include_directories(${PROJECT_SOURCE_DIR})

# Adds an executable target called "compute-int" to be built from the source files listed in the command invocation.
add_executable(compute-int
    src/compute_int_main.cc
    src/compute_int_class.cc
    src/compute_int_class.h
    src/tools.cc
    src/tools.h)
# Add expected compiler features to a target.

target_compile_features(compute-int PRIVATE cxx_std_17)

# Add compile options to a target.
target_compile_options(compute-int PRIVATE -Wall -Wextra -Wpedantic)