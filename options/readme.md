### camke条件编译

* C 使用宏 进行条件编译
* cmake 可以使用 option 决定 某些编译配置是否生效
* 通过以下方式，把cmake.option的值 传递给 【C的宏】
* * 在config.h.in里面[添加cmakedefine语句](config.h.in)
* * 通过 -D{option}可以动态修改 camke的option
* * 如果不设置-D，那么option的默认参数会生效，<font color=red>但是如果改了以后再次生效，需要rm -rf *.</font>