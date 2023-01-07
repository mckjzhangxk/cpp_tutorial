cmake_minimum_required(VERSION 3.13)

#指定项目名称
project(mymath)

# 第一个是静态库名称，第二个是源文件，无效引用头文件
add_library(mymath add.cpp)

# 安装lib

install(FILES add.h 
        DESTINATION ${CMAKE_INSTALL_PREFIX}/include)
install(TARGETS mymath 
        LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)

