#include <iostream>
#include "config.h"
using namespace std;

int main(void)
{

    #ifdef USE_ADDER
        cout<<"use add lib"<<endl;
    #else
        cout<<"not use add lib"<<endl;
    #endif
    return 0;
}