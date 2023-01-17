### camke条件编译

* C 使用宏 进行条件编译
* cmake 可以使用 option 决定 某些编译配置是否生效
* 通过以下方式，把cmake.option的值 传递给 【C的宏】
* * 在config.h.in里面[添加cmakedefine语句](config.h.in)
* * 通过 -D{option}可以动态修改 camke的option
* * 如果不设置-D，那么option的默认参数会生效，<font color=red>但是如果改了以后再次生效，需要rm -rf *.</font>
* * <font color=red>对cmake后的配置可以使用ccmake 进行检查</font>
```bash
cd build
ccmake
```

### camke重要的宏

|名称| 功能 | 示例|
| - | -|:-|
| CMAKE_EXPORT_COMPILE_COMMANDS | 编译命令导成json，用于检查 设置的参数是否生效 |
|DCMAKE_BUILD_TYPE||Release,Debug
| CMAKE_CXX_STANDARD |  | set(CMAKE_CXX_STANDARD 11)
| CMAKE_CXX_FLAGS| 编译器而外参数 |-Wall -Wextra"
| CMAKE_CXX_FLAGS_DEBUG|Debug模式，而外参数 | "-g -O0"
