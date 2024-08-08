cmake_minimum_required(VERSION 2.8)
project(server_tm)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_FLAGS  "$ENV{CXXFLAGS} -rdynamic -O0 -ggdb -std=c++11 -Wall -Wno-deprecated -Werror -Wno-unused-function")

#set(CMAKE_CXX_STANDARD 14)

set(LIB_SRC
    server_tm/log.cc
)

add_library(server_tm SHARED ${LIB_SRC})
#add_library(server_tm_static STATIC ${LIB_SRC})
#SET_TARGET_PROPERTIES(server_tm_static PROPERTIES OUTPUT_NAME "server_tm")

add_executable(test tests/test.cc)
add_dependencies(test server_tm)
target_link_libraries(test server_tm)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
