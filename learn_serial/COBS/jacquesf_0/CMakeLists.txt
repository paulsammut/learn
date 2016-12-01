project(jacquesf_0 C)
cmake_minimum_required(VERSION 2.8.8)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")
file(GLOB myexec_SRC
    "*.h"
    "*.cpp"
    "*.c"
)

add_executable(myexec ${myexec_SRC})
