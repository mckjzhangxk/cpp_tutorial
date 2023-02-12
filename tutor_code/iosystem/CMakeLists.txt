cmake_minimum_required(VERSION 3.20)

project(IO_TUTORIAL)
set(CMAKE_CXX_STANDARD 17)


add_executable(variant variant.cpp)
add_executable(any any.cpp)
add_executable(optional optional.cpp)
add_executable(tuple tuple.cpp)
add_executable(clock clock.cpp)

add_executable(readfile readfile.cpp)
add_executable(writefile writefile.cpp)
add_executable(read_write_binary read_write_binary.cpp)

add_executable(directory directory.cpp)