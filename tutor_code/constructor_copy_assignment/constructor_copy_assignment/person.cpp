//
//  person.cpp
//  constructor_copy_assignment
//
//  Created by zhanggxk on 2023/7/22.
//

#include "person.hpp"
#include <cstring>


Person::Person(const char * name){
    this->name=new char[1+strlen(name)];
    strcpy(this->name,(char*)name);
}
Person::Person(const Person& p){
//    this->name=(char*)p.name;
    this->name=new char[1+strlen(p.name)];
    strcpy(this->name,(char*)p.name);
}
