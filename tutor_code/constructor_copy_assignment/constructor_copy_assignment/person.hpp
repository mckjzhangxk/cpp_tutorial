//
//  person.hpp
//  constructor_copy_assignment
//
//  Created by zhanggxk on 2023/7/22.
//

#ifndef person_hpp
#define person_hpp

class Person{
public:
    Person(const char * name);
    Person(const Person & p);
    virtual ~Person(){
        delete name;
    }
private:
    char * name;
};

#endif /* person_hpp */
