cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
#指定项目名称
project(homework2)
#${PROJECT_NAME}是引用项目名称，添加一个可执行文件
add_executable(task_1 guess.cpp)
add_executable(task_2 stream.cpp)