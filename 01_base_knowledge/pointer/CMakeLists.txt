 
cmake_minimum_required (VERSION 3.5)

project (pointer)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++14")

aux_source_directory (. DIR_SRCS)

add_executable (pointer ${DIR_SRCS})
