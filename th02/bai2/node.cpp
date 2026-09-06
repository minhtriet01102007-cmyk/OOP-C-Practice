#include "node.h"
#include <iostream>

int Node::count = 0;
Node::Node(int value){
    count++;            
    this->id = count;    
    this->item = value;  
    this->next = nullptr;
}
Node::Node(const Node& other){
        count++;                  
        this->id = count;         
        this->item = other.item;  
        this->next = nullptr;     
}
void Node::print() const{
    std::cout << id << "\t" << item << std::endl;
}