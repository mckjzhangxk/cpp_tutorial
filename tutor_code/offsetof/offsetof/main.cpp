#include <stddef.h>
#include <iostream>


typedef struct Example{
    int x;
    char y;
    int z;
} Example;
int main(int argc, const char * argv[]) {
    // insert code here...

    
    std::cout<<"offset(x)="<<offsetof(Example, x)<<std::endl;
    std::cout<<"offset(y)="<<offsetof(Example, y)<<std::endl;
    std::cout<<"offset(z)="<<offsetof(Example, z)<<std::endl;
    std::cout<<"sizeof(Example)="<<sizeof(Example)<<std::endl;
    return 0;
}
