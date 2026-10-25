#pragma once
#include <iostream>
#include "Vector.h"
using namespace std;

template <class T, class U, template <class V> class K>
class Map{
    private:
        K<T> list1;
        K<U> list2;
    public:
        Map();
        ~Map();
};