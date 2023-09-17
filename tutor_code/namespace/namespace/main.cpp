//
//  main.cpp
//  namespace
//
//  Created by zhanggxk on 2023/9/17.
//

#include <iostream>
//h
namespace zxk{
    namespace util{
        void hello(){
            std::cout << "Hello, World!\n";
        }
    
        class A{
        public:
            void hello();
        };
    }

}
//cpp
namespace zxk{
    namespace util{
        void A::hello(){
            std::cout << "Hello, World!\n";
        }

    }

}

int main(int argc, const char * argv[]) {
    
    using zxk::util::A;
    
    zxk::util::hello();
     
    A a;
    a.hello();
    return 0;
}
