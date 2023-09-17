//0）模板分为 函数模板和类模板
//1）模板是声明不是定义
//2）关键字template <class T>需要加入模板函数(包括所有成员函数)头部

#include <iostream>
#include "template.hpp"
#include "hw.hpp"
int main(int argc, const char * argv[]) {
    
    
    
    
    int a=3,b=2;
    std::string s1="a",s2="b";
    swap(s1, s2);
    swap(a, b);
    //swap<int>(a, b);
    
    std::cout << a<<"\n";
    std::cout << b<<"\n";
    
    std::cout << s1<<"\n";
    std::cout << s2<<"\n";
    
    
    Vector<int> v(10);
    for (int i=0; i<v.size(); i++) {
        v[i]=i+1;
    }
    
    
    Vector<float> vf(2);
    vf[0]=vf[1]=1.0f;
    
    
    std::cout<<v<<std::endl;
    std::cout<<vf<<std::endl;
    
    
    HashTable<int, std::string> hss;
    std::string ss="abc";
    hss.put(0,ss);
    std::cout<<hss.get(0)<<std::endl;
    
    
    
    FixArray<float,30> f30;
    FixArray<float,50> f50;
    
    
    Point3D p3d;
    
    HW<float> hw1;
    HW<float> hw2;
    HW<int>   hw3;
    callInHW();
    
    BestVector<float> vb(3);
    for (int i=0; i<vb.size(); i++) {
        vb[i]=-i;
    }
    std::cout<<vb<<std::endl;
    return 0;
}
