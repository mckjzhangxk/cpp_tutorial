//
//  template.hpp
//  template
//
//  Created by zhanggxk on 2023/7/24.
//

#ifndef template_hpp
#define template_hpp
#include <iostream>
#include <iostream>


template <class T>
class Vector{
private:
    T* m_data;
    int m_size;
public:
    Vector(int size):m_size(size){
        this->m_data=new T[size];
    }
    virtual ~Vector(){
        delete this->m_data;
    }
    int size() const{
        return m_size;
    }
    T& operator[](int i);
};



class VectorIndexError{

public:
    std::string msg;
    VectorIndexError(std::string msg):msg(msg){}
    ~VectorIndexError(){}
    
};


template <class T>
T& Vector<T>::operator[](int i){
    if(i>=0&&i<m_size)
        return this->m_data[i];
    else{
        throw VectorIndexError("index error:"+std::to_string(i));
    }
}



#endif /* template_hpp */


