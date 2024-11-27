# Specify the minimum version of CMake
cmake_minimum_required(VERSION 3.10)

# Define the project name and version
project(RayTracing VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(RayTracing main.cc) 