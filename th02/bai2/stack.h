#pragma once
#include "node.h"

class Stack{
    private:
        Node* top;            
        int size;               
        const int maxSize;     
    public:
        Stack(int max_capacity);
        Stack(const Stack& other);
        ~Stack();
        bool isEmpty();
        bool isFull();
        int numOfElements();
        void push(int value);
        int pop();
        void print();
};
