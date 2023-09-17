//
//  hw.hpp
//  template
//
//  Created by zhanggxk on 2023/7/25.
//

#ifndef hw_hpp
#define hw_hpp

#include <stdio.h>


//验证相同cpp文件中：
// HW<int>,HW<int>是否是一个类型
// 是
// HW<int>,HW<float>是否是一个类型
// 否

//验证不同cpp文件中：
// HW<int>,HW<int>是否是一个类型
// 是
template <class T>
class HW{
    
    T data;
    
    static int objects;
public:
    HW(){
        objects++;
        printf("#HW:%d\n",objects);
    }
};
template <class T>
int HW<T>::objects=0;

void callInHW();
#endif /* hw_hpp */
