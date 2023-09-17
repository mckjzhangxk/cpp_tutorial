//
//  main.cpp
//  inherent
//
//  Created by zhanggxk on 2023/7/20.
//
//1.继承的基本用法
// 子类继承了父类别，那么他就可以拥有父类的public,protect的字段
// 并可以追加子类的方法

//2.关于构造函数
// 子类创建的时候，父类的构造函数也需要被调用,而且是先父后子的调用顺序


//3.重载
// name hidden:
// 如果子类 的方法签名与 父类 方法签名 完全一样，父类 该方法还存在重载，那么，
// 子类不会继承父类的 的这个方法
#include <iostream>
class Animal{
private:
    const std::string name;
public:
    Animal( const std::string& name):name(name){
        std::cout <<"Animal(name)\n";
    }
    const std::string& getName() const{
        return name;
    }
    void say(){
        std::cout <<name<<" say hello!\n";
    }
    
};

class Cat:public Animal{
public:
    
    Cat():Animal("cat"){
        std::cout <<"Cat()\n";
    };

//    virtual
    void sleep(int minute){
        std::cout <<"cat sleep "<<minute<<" min!\n";
    }
    void sleep(){
        sleep(0);
    }
    
    void f(){
        sleep(333);
    }
};


class LazzyCat:public Cat{
public:
    void sleep(int minute){
        std::cout <<"lazzy sleep "<<minute<<" min!\n";
    };
};

int main(int argc, const char * argv[]) {
    std::string c="cat1";
    
    Cat cat;
    cat.say();
    cat.sleep();
    
    
    std::cout <<"\n";
    LazzyCat lcat;
    lcat.sleep(222);
    lcat.f();
    
    //虽然Cat重载了sleep,但由于子类LazzyCat也定义了sleep,
    //这个函数由于name hidden的原因,相当于子类LazzyCat没有继承Cat的重载、
    //编译器不会认为LazzyCat有 sleep 方法。
//    lcat.sleep();  //lcat没有继承sleep
    
    std::cout <<"\n";
    
    Cat * cc=new LazzyCat();
    //这与之前说法并不矛盾，这个指针是Cat*，编译器会绑定Cats的sleep()
    cc->sleep();
    
    //如果不指定sleep是virtual，编译器会绑定Cats的sleep(int)方法,
    //否则会创建虚拟表，动态绑定
    cc->sleep(999);
    return 0;
}
