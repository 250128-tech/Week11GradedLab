cmake_minimum_required(VERSION 3.20)
project(MyProject)

# Set the C++ standard (e.g., 17, 20, or 23)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Create the executable from your source files
add_executable(Week11GradedLab main.cpp)