#pragma once
#include <iostream>
using namespace std;

template<class T>
class Vector{
    private:
        T *Data;
        int size;
    public:
        Vector();
        Vector(int, const T&);
        ~Vector();
        void show();
};