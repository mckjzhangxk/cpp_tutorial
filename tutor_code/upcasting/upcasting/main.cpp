//
//  main.cpp
//  upcasting
//
//  向上造型
//由于子类与父类模型结构完全相同，关于成员变量的引用，访问方式也完全一样，所以可以把
//子类 赋值给 父类，包括pointer,reference,object
// A [i]
// B [i j]
#include <iostream>
class A{
    int i;
public:
    A():i(10){}
    void print(){
        std::cout << "print A.i="<<i<<"\n";
    }
};
class B:public A{
    int j;
public:
    B():j(20){}
};



int main(int argc, const char * argv[]) {
    A a;
    B b;
    
    
    std::cout << "a.size="<<sizeof(a)<<"\n";
    std::cout << "b.size="<<sizeof(b)<<"\n";
    
    int * p=(int*)&a;
    
    std::cout << "*p(A)="<<*p<<"\n";
    p=(int*)&b;
    std::cout << "*p(B)="<<*p<<"\n";
    p++;
    std::cout << "*p++(B)="<<*p<<"\n";
    
    
    A* ap=&a;
    A* bp=&b;
    ap->print();
    bp->print();
    return 0;
}
