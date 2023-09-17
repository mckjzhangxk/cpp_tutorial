//
//  main.cpp
//  reference_2
//
//  Created by zhanggxk on 2023/7/22.
//

#include <iostream>



//1.函数返回一个reference

int arr[]={1,2,3};

int& subscript(int i){
    return arr[i];
}

//2.const int& 可以表示一个 没有名字的结果
void f( int& a){
    std::cout << "f( int& a){\n";
}
void f(const int& a){
    std::cout << "f(const int& a){\n";
}

//3.返回一个对象
class A{
public:
    int i;
    int j;
};
//这个对象的类型其实是 const A
A g(){
    A a;
    a.j=200;
    return a;
}

A getA(){
    A a;
//    A* a=new A;
//    a->j=200;
    return a;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    
    subscript(0)=11;
    
    f(subscript(1));
    f(3*1);
    
    A r=g();
    r.i=100;
    

    std::cout << r.i<<"  "<<r.j<<'\n';


    return 0;
}
