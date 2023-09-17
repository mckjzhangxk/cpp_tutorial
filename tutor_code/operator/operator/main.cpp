// 运算符的重载
// 全局函数 或者成员函数都可以重载运算符
// 运算符最左的叫做receriver,receriver不会支持自动转换
//例如 定义了 const A A::operator+(const A& b)
// a+3 ok
// 3+a error 因为3是recerver，不会强转成A
#include <iostream>

class Integer;
//声明全局的重载函数
//operator的原型,2元运算符最好是全局函数+friend，这样支持自动转换
const Integer operator+(const Integer& a,const Integer& b);
bool  operator<(const Integer& a,const Integer& b);
bool  operator>=(const Integer& a,const Integer& b);
bool  operator>(const Integer& a,const Integer& b);
bool  operator<=(const Integer& a,const Integer& b);


bool  operator==(const Integer& a,const Integer& b);
bool  operator!=(const Integer& a,const Integer& b);


std::ostream&  operator<<(std::ostream& cout,const Integer& a);

class Integer{
public:
    Integer(int i):i(i){}
    //使用friend让 全局函数可以访问对象的member
    friend const Integer operator+(const Integer& a,const Integer& b);
    friend bool  operator<(const Integer& a,const Integer& b);
    friend bool  operator>=(const Integer& a,const Integer& b);
    friend bool  operator>(const Integer& a,const Integer& b);
    friend bool  operator<=(const Integer& a,const Integer& b);
    
    friend bool  operator==(const Integer& a,const Integer& b);
    friend bool  operator!=(const Integer& a,const Integer& b);
    
    friend  std::ostream&  operator<<(std::ostream& cout,const Integer& a);
    
    //++a
    const Integer& operator++(){
        this->i++;
        return *this;
    }
    //a++
    const Integer operator++(int i){
        Integer old(*this);
        this->i++;
        return old;;
    }
    
     
    int& operator[](int i){
        return  this->i;
    }
    
    
    void print(){
        std::cout<<i<<std::endl;
    }
private:
    int i;
};

//cpp
const Integer operator+(const Integer& a,const Integer& b){
    return Integer(a.i+b.i);
}
bool  operator<(const Integer& a,const Integer& b){
    return a.i<b.i;
}
bool  operator>=(const Integer& a,const Integer& b){
    return !(a<b);
}

bool  operator>(const Integer& a,const Integer& b){
    return b<a;
}
bool  operator<=(const Integer& a,const Integer& b){
    return !(a>b);
}

bool  operator==(const Integer& a,const Integer& b){
    return a.i==b.i;
}

bool  operator!=(const Integer& a,const Integer& b){
    return ! (a==b);
}

std::ostream&  operator<<(std::ostream& cout,const Integer& a){
    cout<<a.i;
    return cout;
}


 


int main(int argc, const char * argv[]) {
    // insert code here...
    Integer a(20),b(30);
    
    Integer c=1+a+b+3;
    std::cout<<"c="<<c<<std::endl;
    
//    std::cout<<a[0]<<std::endl;
//    a[0]=1000;
//    std::cout<<a[0]<<std::endl;
    
 
    std::cout<<"c++="<<c++<<std::endl;
    std::cout<<"++c="<<++c<<std::endl;
    
    std::cout<<"c<c++ "<<std::boolalpha<<(c<c++)<<std::endl;
    std::cout<<"c>c++ "<<std::boolalpha<<(c>c++)<<std::endl;
    std::cout<<"c<=++c "<<std::boolalpha<<(c<=++c)<<std::endl;
    std::cout<<"c>=c++ "<<std::boolalpha<<(c>=c++)<<std::endl;
    std::cout<<"c==c++ "<<std::boolalpha<<(c==c++)<<std::endl;
    std::cout<<"c!=++c "<<std::boolalpha<<(c!=++c)<<std::endl;
    return 0;
}
