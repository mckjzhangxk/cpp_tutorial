cmake_minimum_required(VERSION 3.13)

#指定项目名称
project(addDemo)
set(CMAKE_CXX_STANDARD 17)

# 第一个是静态库名称，第二个是源文件，无效引用头文件
add_library(mymath add.cpp)

# 安装lib

set_target_properties(mymath PROPERTIES PUBLIC_HEADER add.h)
install(TARGETS mymath 
        LIBRARY DESTINATION lib
        PUBLIC_HEADER DESTINATION include
)

add_executable(${PROJECT_NAME} main.cpp)

# 告诉cmake 从哪里找 用户自定义的库mymath
# target_link_libraries(${PROJECT_NAME} ${CMAKE_BUILD_RPATH})
# 使用mymath库
target_link_libraries(${PROJECT_NAME} PRIVATE  mymath)
