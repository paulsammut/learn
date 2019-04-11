set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)
cmake_minimum_required(VERSION 3.0.0)
project(learn)
file(GLOB myexec_SRC
    "*.h"
    "*.cpp"
)

add_executable(learn ${myexec_SRC})
