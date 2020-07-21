cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(xot VERSION 0.0.1 LANGUAGES CXX)

if (MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_executable(xot src/main.cpp)

target_include_directories(xot PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)