#include "stack.h"
#include <iostream>

Stack::Stack() : size(0), top(nullptr)
{}
Stack::~Stack(){
    while (!isEmpty()){
        pop();
    }
}
bool Stack::isEmpty(){
    return top == nullptr;
}
void Stack::push(int value){
    Node* newNode = new Node();
    newNode->item = value;
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
int Stack::numOfElement(){
    return size;
}
void Stack::print(){
    if (isEmpty()){
        std::cout << "Stack rong" << std::endl;
        return;
    }
    Node* current = top;
    std::cout << "Cac phan tu trong Stack (tu dinh): ";
    while (current != nullptr) {
        std::cout << current->item << " ";
        current = current->next;
    }
}