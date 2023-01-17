cmake_minimum_required(VERSION 3.15)
project(image_viewer)
set(CMAKE_CXX_STANDARD 11)

add_library(html_writer api/html_writer.cpp)
add_library(image_brower api/image_browser.cpp)

target_link_libraries(image_brower html_writer)


