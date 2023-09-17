//
//  Tree.cpp
//  constructor
//
//  Created by zhanggxk on 2023/7/19.
//

#include "Tree.hpp"

 
Tree::Tree(int h){
    height=h;
    std::cout<<"Tree("<<height<<")"<<std::endl;
}
 

Tree::~Tree(){
    std::cout<<"~Tree("<<height<<")"<<std::endl;
}
