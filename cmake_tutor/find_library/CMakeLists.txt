cmake_minimum_required(VERSION 3.13)

#指定项目名称
project(search)

# mymath是库名，NAMES 对于的别名
find_library(ADDER_LIB mymath NAMES mymath2)
# find_library(ADDER_LIB mymath NAMES mymath2 REQUIRED)

# 把libyuv.h所在的位置放入ADD_HEADER
find_path(ADD_HEADER "add.h")


# find_package()
message(STATUS "ADD_HEADER:${ADD_HEADER}")
message(STATUS "ADDER_LIB:${ADDER_LIB}")

