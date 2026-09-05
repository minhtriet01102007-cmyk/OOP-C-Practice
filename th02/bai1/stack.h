#pragma once
#include "node.h"

class Stack{
    private:
        int size;
        Node* top;
    public:
        Stack();
        ~Stack();
        bool isEmpty();
        void push(int value);
        int pop();
        int numOfElement();
        void print();
};