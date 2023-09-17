//
//  main.cpp
//  static
//
//  Created by zhanggxk on 2023/7/23.
//

#include <iostream>


class A{
public:
    //这里只是声明
    static int i;
    
    static void f();
};

//这是是定义,A::i就是一个全局变量!使用C的机制就可以实现
int A::i=222;
void A::f(){
    std::cout << i<<"\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << A::i<<"\n";
    
    A::f();
    return 0;
}
