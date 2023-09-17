//
//  main.cpp
//  default_value
//
//  Created by zhanggxk on 2023/7/20.
//

#include <iostream>

// 函数的默认参数值一定要在声明中写，而不要在定义中写。
// 设置默认值的函数没有被重载，还是一样多的参数，编译的时候对于缺省值，
//编译器会填充在声明中写的那个默认值！！！
class A{
public:
    void f(int a,int b=10);
};

//cpp

void A::f(int a,int b){}
int main(int argc, const char * argv[]) {
    // insert code here...
    A a;
    
    a.f(1);
    a.f(1,2);
    return 0;
}
