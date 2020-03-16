cmake_minimum_required(VERSION 2.8.3)
project(sorting)

file(GLOB Headers *.h *.hpp)
file(GLOB Sources *.cpp)

message(${Sources})
message(${Headers})

add_executable(sorting ${Sources} ${Headers})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

