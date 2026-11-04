cmake_minimum_required(VERSION 3.20)

project(SWEGrind LANGUAGES CXX)

add_executable(SWEGrind
    src/main.cpp
    src/backspace_string_compare.cpp
    test/stack_test.cpp
    test/backspace_string_compare_test.cpp
)

target_compile_features(SWEGrind PRIVATE cxx_std_17)
target_include_directories(SWEGrind PRIVATE include)