//
//  main.cpp
//  polymorphism
//
//  多态性
// virtual 这个函数的调用是根据运行时的类型来调用的，C++通过以下技术实现的多态性
//  1)upcasting
//  2)dynamic binding
//  3)通过pointer,reference调用virtual函数才会有多态性
#include <iostream>

class Shape{
public:
    virtual void render();
    virtual ~Shape(){}
};
class Circle:public Shape{
public:
    virtual void render();
    virtual ~Circle(){}
};
class Rect:public Shape{
public:
    virtual void render();
    virtual ~Rect(){}
};

//cpp

void Shape::render(){
    std::cout << "Shape Render!\n";
}
void Circle::render(){
    std::cout << "Circle Render!\n";
}
void Rect::render(){
    std::cout << "Rect Render!\n";
}

//指针调用可以实现多态性
void f(Shape* s){
    s->render();
}


//引用调用可以实现多态性
void f(Shape& s){
    s.render();
}

int main(int argc, const char * argv[]) {

    Shape* p[]={new Shape(),new Circle(),new Rect()};
    f(p[0]);
    f(p[1]);
    f(p[2]);
    
    f(*p[0]);
    f(*p[1]);
    f(*p[2]);
}
