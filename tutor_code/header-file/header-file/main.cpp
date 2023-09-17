//
//  main.cpp
//  header-file
//
//  Created by zhanggxk on 2023/7/19.
//

#include <iostream>
#include "A.hpp"
#include "B.hpp"


//头文件这节课讲的主要有2个知识点：
//1. heaeder文件中只允许放声明，不允许放定义，因为头文件会在<单元编译阶段>被多次展开，重复的定义会报错。
//声明包括:
//  1)extern修饰的全局变量
//  2)函数签名
//定义包括：
//  1)全局变量
//  2)函数体
//class,struct即是声明，也是定义。


//本程序中 B include A,所以在main.ii文件中，A.hpp会被展开2次
//所以使用#ifdef进行条件编译，只允许A.hpp的内容被展开一次。
//注意，我特意把extern global放在A.hpp的条件编译外，用于证明extern被声明多次也没问题
int global=0;
int main(int argc, const char * argv[]) {
    A a;
    a.inc();
    a.get();
    std::cout <<  a.get()<<std::endl;
    return 0;
}
