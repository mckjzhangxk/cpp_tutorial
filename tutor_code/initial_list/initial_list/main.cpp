//
//  main.cpp
//  initial_list
//
//  Created by zhanggxk on 2023/7/19.
//
#include <iostream>

//初始化成员变量
//语法： member(value),其中value是给member的初始化值
//初始化成员变量要写在函数的body里面！！！

class A{
public:
    A(int a){};
};

class B{
private:
    A a;
public:
    B();
};

//cpp
B::B():a(A(2)){
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    B b;
    return 0;
}
