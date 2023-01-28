cmake_minimum_required(VERSION 3.20)

project(STL_TUTORIAL)
set(CMAKE_CXX_STANDARD 17)

add_executable(array array.cpp)
add_executable(vector vector.cpp)
add_executable(vector_optimize vector_optimize.cpp)
add_executable(map map.cpp)
add_executable(unmap unmap.cpp)
add_executable(iterator iterator.cpp)


add_executable(sort alg_sort.cpp)
add_executable(find alg_find.cpp)
add_executable(fill alg_fill.cpp)
add_executable(count alg_count.cpp)
add_executable(foreach alg_foreach.cpp)
add_executable(allof alg_allof.cpp)
add_executable(rotate alg_rotate.cpp)
add_executable(transform alg_transform.cpp)
add_executable(accumulate alg_accumulate.cpp)
add_executable(min_element alg_min_element.cpp)
