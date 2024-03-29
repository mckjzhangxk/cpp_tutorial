* 重要的命令： cmake是一个输入，输出的函数。
```
    cmake [options] -S <path-to-source> -B <path-to-build>

    -D${OptionName}=OFF 
    eg: cmake -S . -B build -DGLFW_BUILD_DOCS=OFF
```

* [基本的结构CMakeLists.txt](basic/CMakeLists.txt)
```
cmake_minimum_required(VERSION 3.10)

#指定项目名称
project(helloworld)
#${PROJECT_NAME}是引用项目名称，添加一个可执行文件
add_executable(${PROJECT_NAME} main.cpp)


#执行编译命令
mkdir build
cd build
cmake .. #等价于cmake -S .. -B .
make 
```

* [静态库的编译](library_basic/CMakeLists.txt)
```
# 第一个是静态库名称，第二个是源文件，无效引用头文件
add_library(mymath add.cpp)

安装静态库
set_target_properties(mymath PROPERTIES PUBLIC_HEADER add.h)
install(TARGETS mymath 
        LIBRARY DESTINATION lib  #库文件
        PUBLIC_HEADER DESTINATION include #头文件文件
)
```

[使用静态库](library_basic_ref/CMakeLists.txt)
```
# 头文件目录
include_directories(/usr/local/include)
# 库文件目录
target_link_directories(${PROJECT_NAME} PRIVATE /usr/local/lib)
# 链接库文件
target_link_libraries(${PROJECT_NAME}   mymath)


```

[预处理文件](project_version/CMakeLists.txt)
```
#configure_file 是把cmake的参数,属性，传递给C 文件

configure_file(config.h.in config.h)


#define MAJOR @pvc_VERSION_MAJOR@
#define MINOR @pvc_VERSION_MINOR@
```

[安装](https://cmake.org/cmake/help/v3.10/command/install.html#installing-targets)
```

#安装文件夹
install(DIRECTORY dirs... DESTINATION <dir>)
install(DIRECTORY include DESTINATION /usr/local/include/abc)

#安装target
install(TARGETS targets DESTINATION <dir>)

install(TARGETS helloworld  DESTINATION /bin/)
install(TARGETS mylib LIBRARY DESTINATION /usr/local/lib)

```
变量
```
    list(APPEND LIBS  opengl pthread glfw)
```