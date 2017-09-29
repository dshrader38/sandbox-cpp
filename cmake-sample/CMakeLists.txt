
cmake_minimum_required(VERSION 3.0.0)
project(cmake-sample)

set(CMAKE_SAMPLE_VERSION_MAJOR 1)
set(CMAKE_SAMPLE_VERSION_MINOR 0)
set(CMAKE_COLOR_MAKEFILE ON)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_INCLUDE_CURRENT_DIR TRUE)

set(SOURCE "src/main.cpp")

# set the compiler flags
set(CMAKE_CXX_COMPILER "/usr/local/bin/g++-6")
list(APPEND CMAKE_CXX_FLAGS "-std=c++11 -pthread -g -DNDEBUG -D_GLIBCXX_USE_NANOSLEEP -Wall -Werror -Wextra -pedantic-errors ${CMAKE_CXX_FLAGS}")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(${PROJECT_NAME} ${SOURCE})
