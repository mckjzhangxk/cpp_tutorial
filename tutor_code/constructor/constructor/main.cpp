//
//  main.cpp
//  constructor
//
//  Created by zhanggxk on 2023/7/19.
//

#include "Tree.hpp"

//本课讲述构造函数与析构函数调用的时刻

//1.在作用域结束的时候，析构函数会被调用。下面去掉{}可以看到
//~Tree()在End之后才会被打印

//2.default constructor
//没有参数的构造器是default constructor

//X 声明
class X{
public:
    X();
    X(int a);
};
//X实现
X::X(){}
X::X(int a){}
//


//3.new delete,delete[]的用法
// memory分配表 <size,address>
// delete先调用析构函数，然后再释放空间
// delete[] 会计算出元素个数，调用每个析构函数，最后释放空间


// delete p 的执行逻辑如下：
// A.memory分配表查看有没有p地址
// B.执行p的析构函数
// C.回收memory分配表 size的空间


// delete[] p 的执行逻辑如下：
// A.memory分配表查看有没有p地址
// B.根据size和p的类型，计算有几个对象，分别执行析构函数
// C.回收memory分配表 size的空间
int main(int argc, const char * argv[]) {
    // insert code here...
    
    std::cout << "Lab 1\n";
    {
        Tree t(22);
    }
    std::cout << "Lab 1 end\n";
    
    //剩余的4个元素都是使用默认构造器创建的
    X xs[5]={X(1)};
    
    std::cout << "Lab  3\n";
    //这里提供init_list={7,2,4}，用于传递给构造函数的参数init_height!!
    Tree*  trees=new Tree[3]{7,2,4};


//    delete trees;
    delete [] trees;
    
    return 0;
}
