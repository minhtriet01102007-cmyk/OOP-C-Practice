#pragma once
#include "PhanSo.h"
#include "iostream"
using namespace std;
class ListPhanSo{
    private:
        PhanSo* arr;
        int n;
    public:
        ListPhanSo();
        ~ListPhanSo();
        friend std::istream& operator>>(std::istream& is, ListPhanSo& list);
        friend std::ostream& operator<<(std::ostream& o, const ListPhanSo& list);
        PhanSo& operator[](int index);
};