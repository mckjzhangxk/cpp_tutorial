cmake_minimum_required(VERSION 3.13)

project(optionDemo VERSION 2.5)



#尝试 cmake .. -DCMAKE_BUILD_TYPE=Release
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON) #把编译命令导出到 compile_commands.json
set(CMAKE_CXX_FLAGS "-Wall -Wextra -myFlag")

#尝试 cmake .. -DCMAKE_BUILD_TYPE=Release
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")

# cmake中设置的选项，外部使用 -DUSE_ADDER=ON/OFF
option(USE_ADDER "使用adder函数库" ON)
if(USE_ADDER)
    list(APPEND EXTRA_LIBS "addr" "glfw")
endif()

# 传递给C宏
configure_file(config.h.in config.h)


add_executable(${PROJECT_NAME} main.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})

message("EXTRA_LIBS:${EXTRA_LIBS}")







