//
//  main.cpp
//  vtable
//
//  Created by zhanggxk on 2023/7/21.
//1）virtual的实现

//2) 为什么实现virtual的类，析构函数 一定是virtual
//

//3）C++默认是所有静态绑定，需要动态绑定的函数，一定要记得加上virtual
// 动态绑定只对指针，引用起作用！！！\

//4)virtual函数中存在override，子类调用父亲的方法
#include <iostream>


class Eclipse{
    int x1;
    int x2;
    
public:
    char * name;
    Eclipse(int x1,int x2,char* name):x1(x1),x2(x2),name(name){}
    virtual void render();
    virtual ~Eclipse(){
        std::cout << "~Eclipse!"<<name<<"\n";
    };
    
    virtual void overide_func(){
        std::cout << "Parent!"<<name<<"\n";
    }
};

class Circle:public Eclipse{
    int r;
public:
    Circle(int x1,int x2,int r,char* name):Eclipse(x1, x2,name),r(r){}
    virtual void render();
     ~Circle(){
        std::cout << "~Circle!"<<name<<"\n";
    };
    virtual void overide_func(){
        Eclipse::overide_func();
        std::cout << "Child!"<<name<<"\n";
    }
    
};
//cpp

void Circle::render(){
    std::cout << "Circle  Render!\n";
}
void Eclipse::render(){
    std::cout << "Eclipse  Render!\n";
}


int main(int argc, const char * argv[]) {
    
    
    Circle c(1,1,10,"c");
    Eclipse e1(2,2,"e1"),e2(3,3,"e2");
    
    
    int  vptr_e1= ((int*)&e1)[0];
    int  vptr_e2= ((int*)&e2)[0];

    std::cout <<"vptr_e1="<<vptr_e1<<'\n';
    std::cout <<"vptr_e2="<<vptr_e2<<'\n';


    Eclipse* p=&c;
    p->render();
    p=&e1;
    p->render();

    //手动把circle 的vtable改成了eclipse的vtable
    ((int*)&c)[0]=vptr_e1;
    p=&c;
    p->render();
    
    //这是为什么需要Eclipse的析构函数是virtual的原因
    //如果按照C++默认静态绑定的规则，delete mycircle是调用Eclipse的析构函数，而不是Circle的！！！
    {
        
        Eclipse * mycircle=new Circle (1,1,10,"mycircle");
        delete mycircle;
    }

    
    c.overide_func();
    return 0;
}
