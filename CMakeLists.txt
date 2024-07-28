cmake_minimum_required(VERSION 3.28)
project(server_tm)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

include_directories(bin)
include_directories(build)
include_directories(cmake)
include_directories(lib)
include_directories(server_tm)
include_directories(tests)

add_executable(server_tm
        server_tm/log.cc
        server_tm/log.h
        README.md)
