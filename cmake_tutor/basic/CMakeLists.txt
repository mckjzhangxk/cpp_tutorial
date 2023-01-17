cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
#指定项目名称
project(helloworld)
#${PROJECT_NAME}是引用项目名称，添加一个可执行文件
add_executable(${PROJECT_NAME} main.cpp)

# 设置好安装的路径， bin表示/usr/local/bin/
# TARGETS：由于可能有多个target,后面接所有 targetName
install(TARGETS ${PROJECT_NAME} DESTINATION bin )