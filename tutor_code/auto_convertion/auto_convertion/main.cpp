#include <iostream>
//编译器会在以下情况下自动帮你转换类型
// 1)有另外一个类为参数的构造器，使用explict关键字，禁用这种转换
// 2）重载了 operator C()操作符号，可以把类转成C
// T=>C
// 1) T(C)的构造器
// 2) T存在 operator C() const 的convert function


//C,C++自动发生转换的
//T->T&    T&->T        T[]->T*
//T*->T[]  T->const T   T*->void *
class Apple;

class Orange{
public:
    //转换函数，转换成Apple对象
    operator Apple() const;
};
class Apple{
    
public:
    //不允许隐式转换
    explicit Apple(const Orange&){}
    
};

//cpp
Orange::operator Apple() const{
    return Apple(*this);
}


void f(Apple apple){}
int main(int argc, const char * argv[]) {
    
    Orange orange;
    Apple apple(orange);
    
    //赋值时 自动发生转换
    apple=orange;
    f(orange); //f(Apple(orange));
    return 0;
}
