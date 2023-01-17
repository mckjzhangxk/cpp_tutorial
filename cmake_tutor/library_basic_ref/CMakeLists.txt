cmake_minimum_required(VERSION 3.13)

#指定项目名称
project(addDemo)
set(CMAKE_CXX_STANDARD 17)


# 方法1：从系统目录中获得 库文件，头文件

add_executable(${PROJECT_NAME} main.cpp)

# 头文件目录
include_directories(/usr/local/include)
# 或者使用
# target_include_directories(${PROJECT_NAME} PUBLIC /usr/local/include)

# 库文件目录
target_link_directories(${PROJECT_NAME} PRIVATE /usr/local/lib)
# 链接库文件
target_link_libraries(${PROJECT_NAME}   mymath)



# 方法2：引用项目中的库文件，头文件

add_executable(main main.cpp)
include_directories(/usr/local/include)
target_link_directories(main PRIVATE ${CMAKE_SOURCE_DIR}/../library_basic/build)
target_link_libraries(main   mymath)