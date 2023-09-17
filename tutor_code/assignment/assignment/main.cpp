//
//  main.cpp
//  assignment
//
//  Created by zhanggxk on 2023/7/24.
//

#include <iostream>

class A;


std::ostream& operator<<(std::ostream& out,const A& a);

class A{
    int i;
public:
    A(int i):i(i){}
    A(const A& rhs){
        this->i=rhs.i;
        std::cout <<"Call Copy constructor"<< "\n";
    }
    
    const A& operator=(const A & rhs){
        std::cout <<"Call Assignment"<< "\n";
        if(this!=&rhs){
            this->i=rhs.i;
        }
        return *this;
    }
    friend std::ostream& operator<<(std::ostream& out,const A& a);
};

//这个例子解释了为什么一定要判断this!=rhs
//因为使用指针的画，new 会把old指针覆盖，data数据丢失
class B{
public:
    B(int i=0){
        data=new int;
        data[0]=i;
    }
    
    const B& operator=(B& rhs){
        this->data=new int;
        this->data[0]=rhs.data[0];
        return *this;
    }
    int *data;
};
std::ostream& operator<<(std::ostream& out,const A& a){
    out<<a.i;
    return out;
}

//赋值需要重载operator=操作符，与拷贝构造器的区别
// A x;
// A a=x; //拷贝构造器
// a=x    //赋值
int main(int argc, const char * argv[]) {
    // insert code here...
    
    A a=300;
    A b(a);
    A c(1);
    c=a;
    
    std::cout <<a<< "\n";
    std::cout <<b<< "\n";
    std::cout <<c<< "\n";
    
    
    
    std::cout << "\n";
    
    B b1=300;
    B b2;
    
    std::cout <<b1.data[0]<< "\n";
    b2=b1;
    std::cout <<b2.data[0]<< "\n";
    
    b2=b2;
    std::cout <<b2.data[0]<< "\n";
    return 0;
}
