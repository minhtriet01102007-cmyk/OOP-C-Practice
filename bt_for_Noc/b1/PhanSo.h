#pragma once
#include <iostream>
using namespace std;

class PhanSo{
    private:
        int tu;
        int mau;
        void rutgon();
    public:
        PhanSo(int t = 0, int m = 1);
        friend istream& operator>>(std::istream& i, PhanSo& ps);
        friend ostream& operator<<(std::ostream& o, const PhanSo& ps);
        PhanSo operator+(const PhanSo&) const;
        PhanSo operator-(const PhanSo&) const;
        PhanSo operator*(const PhanSo&) const;
        PhanSo operator/(const PhanSo&) const;
        PhanSo& operator+=(const PhanSo&);
        PhanSo& operator++(); 
        PhanSo operator++(int); 
        bool operator==(const PhanSo&) const;
        bool operator!=(const PhanSo&) const;
        bool operator>(const PhanSo&) const;
        bool operator<(const PhanSo&) const;
};



