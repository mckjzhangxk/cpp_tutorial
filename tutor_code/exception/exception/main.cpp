

#include <iostream>
#include "template.hpp"

//1）直接抛出 throws any
//2) throws 再次抛出
//3) try catch()
//4) try catch(...) 全部捕捉


void throwAny(){};
void throwNone() noexcept{}




//throws的对象在stack存放

void caller2(){
    Vector<float> v(10);
    try {
        v[22]=2;
    } catch (VectorIndexError& e) {
        std::cerr<<e.msg<<std::endl;
        std::cerr<<"caller 2"<<std::endl;
        throw e;
    }
    
}

void caller1(){
    try {
        caller2();
    } catch (VectorIndexError) {
        std::cerr<<"caller 1"<<std::endl;
        throw;
    }
}
int main(int argc, const char * argv[]) {
    
    
    try {
        caller1();
    } catch (...) {
        std::cerr<<"in main"<<std::endl;
    }
    
    return 0;
}
