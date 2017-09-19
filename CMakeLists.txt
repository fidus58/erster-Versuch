cmake_minimum_required(VERSION 3.9)

add_executable (first f.cpp)
target_compile_features(first PRIVATE cxx_lambda_init_captures)
