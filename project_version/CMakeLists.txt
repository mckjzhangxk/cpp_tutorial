cmake_minimum_required(VERSION 3.13)

#指定项目名称
project(pvc VERSION 2.5)

# 把cmake 的一些参数，模板替换到config.h.in,输出到config.h
configure_file(config.h.in config.h)
add_executable(${PROJECT_NAME} main.cpp)
# 这里设置config.h头文件的目录，因为config.h会输出到PROJECT_BINARY_DIR
target_include_directories(${PROJECT_NAME} PUBLIC  ${PROJECT_BINARY_DIR})


message("PROJECT_BINARY_DIR:${PROJECT_BINARY_DIR}")



