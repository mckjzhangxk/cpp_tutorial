//
//  main.cpp
//  constructor_copy_assignment
//
//  Created by zhanggxk on 2023/7/22.
//

#include <iostream>
#include "person.hpp"
using namespace std;
int obj_count;
class Currency{
    void print(char* msg){
        cout<<msg<<",objs:"<<obj_count<<'\n';
    }
public:
    Currency(){
        obj_count++;
        print("Currency()");
    };
    Currency(const Currency& a){
        obj_count++;
        print("Currency()");
    };
    ~Currency(){
        obj_count--;
        print("~Currency()");
    };
    
};

//发生拷贝构造
void f( Currency p){
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    
    //obj1
    Currency  buck;
    
    //1)初始化与赋值的区别
    //obj2
    Currency p=buck; //初始化，拷贝构造
    //Currency p(buck); //初始化，拷贝构造
    p=buck;//赋值/
    
    f(p);
    
    Person p1("zxk");
    Person p2(p1);
    return 0;
}
