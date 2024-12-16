cmake_minimum_required(VERSION 3.27.6)
project("Project")

if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    add_compile_options(
        -Wall
        -Werror
        -Wextra
        -Wuninitialized
        -pedantic-errors
        -Wconversion
    )
endif()

if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    add_compile_options(/Wall)
endif()

set(SOURCES src/Main.cpp src/DVD.cpp src/Inventory.cpp)
add_executable(project ${SOURCES})
target_include_directories(project PUBLIC include)