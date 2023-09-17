//
//  main.cpp
//  inline
//
//  Created by zhanggxk on 2023/7/20.
//

#include "lib.hpp"

// inline函数只是替代代码，不会产生函数调用，编译的时候不会进入符号表
// 所以需要在.hpp文件的声明中写好body.

//大函数或者递归函数不可能是inline函数


//关于成员函数inline的两种写法

//写法1
class L1{
    inline void f(){}
};

//写法2
class L2{
    void f();
};
//cpp

inline void L2::f(){}

int main(int argc, const char * argv[]) {
    // insert code here...
    f();
    return 0;
}
