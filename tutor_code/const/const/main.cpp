//
//  main.cpp
//  const
//
//  Created by zhanggxk on 2023/7/20.
//
#include <iostream>
#include <stdio.h>



class ConstValue{
    int data;
public:
    //知识点5，this其实是const的
    int getData() const;
    int getData();

    ConstValue():data(0){};
};
//cpp
int ConstValue::getData() const{
    std::cout<<"const getData\n";

    return data;
}
int ConstValue::getData(){
    std::cout<<"getData\n";
    return data;
}

int main(int argc, const char * argv[]) {
    const ConstValue cv;
    cv.getData();
    return 0;
    
    
    // 知识点1，const int 可以作为常量使用
    
    const int size=10;
    int arr[size];
    
    //这里能编译过去，但是结果是不对的
    int x=0;
    std::cout<<"input:\n";
    std::cin>>x;
    const int sz=x;
    int arr1[sz];
    arr1[1]=22;
    std::cout<<"size:"<<sizeof(arr1)<<'\n';
    
    //知识点2 const pointer
    
    //p是不可以改变的指针,p是const的
    int * const p=new int;
    //p本身不可以被修改
    //p=new int;
    p[0]=22;
    
    //p1->是const的
    const int* p1=new int;
    //p1本身可以被修改
    p1++;
    //p1所指的内存是只读的
    //p1[0]=22;
    
    
    char * ch="hw";
    char  ch1[]="hw";
    
    printf("main:%p\n",main);
    printf("code:%p\n",ch);
    printf("stack:%p\n",ch1);
    //对【代码区段】的内存赋值
    ch[0]='s';
    //对【堆栈】的内存赋值
    ch1[0]='s';
    
    

    
}
