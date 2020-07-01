add_library(
    cpu
    src/CPU/lib.hpp
    src/CPU/lib.cpp
)

target_include_directories(cpu PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")