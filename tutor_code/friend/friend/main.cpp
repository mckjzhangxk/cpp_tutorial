//
//  main.cpp
//  friend
//
//  Created by zhanggxk on 2023/7/19.
//

#include <iostream>

//friend是一种破坏私有变量的方法
//被friend修饰的 函数，都可以访问class的private
// 注意 friend只能在 class内部使用！！

//不完整声明,用于friend 的声明
int main(int argc, const char * argv[]);
void changeXAge();
class X;



class Y{
public:
    void setXAgeToThree(X* x);
};

class X{
private:
    int age=11;
    void hello(){};
    //main函数可以访问X的private
    friend int ::main(int argc, const char * argv[]);
    //Y.setXAgeToThree函数可以访问X的private
    friend void Y::setXAgeToThree(X* x);
    //changeXAge也可以访问X的private
    friend void ::changeXAge();
};

//实现cpp

//Y
void Y::setXAgeToThree(X* x){
    x->age=33;
    x->hello();
}
// changeXAge()
void changeXAge(){
    X x;
    x.age=1000;
    x.hello();
}
int main(int argc, const char * argv[]) {
    
    X x;
    
    x.age=22;
    x.hello();
    
    
    changeXAge();
    return 0;
}
