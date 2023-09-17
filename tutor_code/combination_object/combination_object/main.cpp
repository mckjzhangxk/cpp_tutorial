//
//  main.cpp
//  combination_object
//
//  Created by zhanggxk on 2023/7/20.
//

#include <iostream>

//继承的方法1，使用复合对象，让每个对象成为类的成员，这样就可以使用该对象的
//所有公开方法了
class Cpu{
public:
    Cpu(int hz):hz(hz){};
    void print(){
        std::cout << "Cpu "<<hz<<" Hz\n";
    }
private:
    int hz;
};

class Disk{
public:
    Disk(int hz):hz(hz){};
    void print(){
        std::cout << "Disk "<<hz<<" Hz\n";
    }
private:
    int hz;
};



class Computer{
public:
    //初始化列表
    Computer(int cpuhz,int diskhz):mCpu(cpuhz),mDisk(diskhz){};
    void print(){
        mCpu.print();
        mDisk.print();
    }
private:
    Cpu mCpu;
    Disk mDisk;
};
int main(int argc, const char * argv[]) {
    Computer computer(1000,2000);
    computer.print();
    return 0;
}
