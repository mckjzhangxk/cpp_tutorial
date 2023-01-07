cmake_minimum_required(VERSION 3.13)

#指定项目名称
project(helloworld)

add_subdirectory(external/glfw)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC  external/glfw/include)
target_link_directories(${PROJECT_NAME} PRIVATE out/build/external/glfw)
target_link_libraries(${PROJECT_NAME} glfw)



