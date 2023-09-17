//
//  template.hpp
//  template
//
//  Created by zhanggxk on 2023/7/24.
//

#ifndef template_hpp
#define template_hpp
#include <iostream>

//1)模板函数
template <class T>
void swap(T& a,T& b){
    T temp=b;
    b=a;
    a=temp;
}

//模板类
template <class T>
class Vector{
private:
    T* m_data;
    int m_size;
public:
    Vector(int size);
    virtual ~Vector();
    int size() const{
        return m_size;
    }
    T& operator[](int i);
};

//2 模板也可是是固定类型的替代符
template <class T,int n>
class FixArray{
    
private:
    T* m_data[n];
};

//3 可以有多个模板变量
template <class K,class V>
class HashTable{
private:
    V m_data[1024];
public:
    void put(const K& key,V& v){
        // index=hash(key)
        int index=0;
        m_data[index]=v;
    }
    V& get(const K& key){
        // index=hash(key)
        int index=0;
        return m_data[index];
    }
    
};
//继承
class Point3D:public FixArray<float, 3>{};

template <class T>
class BestVector:public Vector<T>{
public:
    BestVector(int sz):Vector<T>(sz){}
};

//cpp Vector
template <class T>
Vector<T>::Vector(int size):m_size(size){
    this->m_data=new T[size];
}
template <class T>
Vector<T>::~Vector(){
    delete this->m_data;
}

template <class T>
T& Vector<T>::operator[](int i){
    if(i>=0&&i<m_size)
        return this->m_data[i];
    else{
        return this->m_data[0]; //???
    }
}

template <class T>
std::ostream& operator<<(std::ostream& out,Vector<T>& v){
    out<<"[";
    for (int i=0; i<v.size(); i++) {
        out<<v[i]<<",";
    }
    out<<"]";
    return out;
}
#endif /* template_hpp */


