cmake_minimum_required(VERSION 3.13)

project(optionDemo VERSION 2.5)




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







