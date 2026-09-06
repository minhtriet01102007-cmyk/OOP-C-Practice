#include "stack.h"
#include <iostream>

Stack::Stack(int max_capacity) : maxSize(max_capacity){
    this->top = nullptr; 
    this->size = 0;    
}
Stack::Stack(const Stack& other) : maxSize(other.maxSize){
    this->top = nullptr;
    this->size = 0;
    if (other.top == nullptr) return; 
    Node* currentOther = other.top;
    Node* tailNew = nullptr;
    while (currentOther != nullptr){
        Node* newNode = new Node(*currentOther);
        if (this->top == nullptr){
            this->top = newNode; 
        } 
        else{
            tailNew->next = newNode; 
        }
        tailNew = newNode;
        currentOther = currentOther->next; 
    }
    this->size = other.size; 
}
Stack::~Stack(){
    while (!isEmpty()){
        pop();
    }
}
bool Stack::isEmpty(){
    return top == nullptr;
}
bool Stack::isFull(){
    return size >= maxSize;
}
int Stack::numOfElements(){
    return size;
}
void Stack::push(int value) {
    if (isFull()){ 
        std::cout << "Ngan xep da day" << std::endl;
    }
    Node* newNode = new Node(value); 
    newNode->next = top;             
    top = newNode;                 
    size++;                         
}
int Stack::pop(){
    if (isEmpty()) return -1;
    else{
        Node* temp = top;             
        int popValue = temp->item;
        top = top->next;              
        delete temp;                  
        size--;                       
        return popValue;
    }
}
void Stack::print(){
    if (isEmpty()){
        std::cout << "Ngan xep dang rong.\n";
        return;
    }
    std::cout << "--- CAC PHAN TU TRONG STACK (Tu dinh xuong) ---\n";
    std::cout << "ID\tValue\n";
    Node* current = top;
    while (current != nullptr){
        current->print(); 
        current = current->next;
    }
}