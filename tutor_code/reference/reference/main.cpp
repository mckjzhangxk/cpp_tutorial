//
//  main.cpp
//  reference
//
//  Created by zhanggxk on 2023/7/21.
//

#include <iostream>


void f(int& x){
    x++;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int x=10;
    
    const int &y=x;
    int &z=x;
    //y=30; //const &是不能被赋值的
    z=30;
    
    f(x);f(z);
    //传递给引用的必须是'有名字被引用的变量'
    //f(x+1);
    std::cout << x<<"\n";
    return 0;
}
