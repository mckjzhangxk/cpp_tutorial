# 编译  cmake -DCMAKE_INSTALL_PREFIX=$(pwd)/../result/ ..
cmake_minimum_required(VERSION 3.13)

project(main VERSION 1.0)

# 全局的include，避险重写target_include_directories指令
include_directories(include)


# 创建库文件
add_library(ipb_arithmetic src/sum.cpp src/subtract.cpp)
# target_include_directories(ipb_arithmetic PUBLIC include)

# 可执行文件
add_executable(${PROJECT_NAME} src/main.cpp)
# target_include_directories(${PROJECT_NAME} PUBLIC include)
# 当前目录在默认库文件搜索范围，恰巧 ipb_arithmetic库也在这个当前文件里面，所有可以忽略此指令
# target_link_directories(${PROJECT_NAME} PUBLIC ${CMAKE_BINARY_DIR})
target_link_libraries(${PROJECT_NAME} PRIVATE ipb_arithmetic)


###########################安装###############################
# 安装头文件
install(DIRECTORY ${CMAKE_SOURCE_DIR}/include 
       DESTINATION ${CMAKE_INSTALL_PREFIX})
# 安装lib
install(TARGETS ipb_arithmetic 
        LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
       )
# 安装可执行程序
install(TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)

message("安装目录：${CMAKE_INSTALL_PREFIX}")

