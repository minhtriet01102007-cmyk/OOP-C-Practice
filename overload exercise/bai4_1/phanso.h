#pragma once
#include <iostream>
using namespace std;

class PhanSo{
    private:
        double tu;
        double mau;
    public:
        PhanSo();                       
        PhanSo(double tu, double mau);  
        PhanSo(double x);               
        PhanSo(const PhanSo& ps);      

        PhanSo operator+(const PhanSo& ps);
        PhanSo operator-(const PhanSo& ps);
        PhanSo operator*(const PhanSo& ps);
        PhanSo operator/(const PhanSo& ps);
        PhanSo& operator=(const PhanSo& ps);
        PhanSo& operator+=(const PhanSo& ps);
        PhanSo& operator-=(const PhanSo& ps);

        bool operator>(const PhanSo& ps);
        bool operator<(const PhanSo& ps);
        bool operator==(const PhanSo& ps);
        bool operator>=(const PhanSo& ps);
        bool operator<=(const PhanSo& ps);
        bool operator!=(const PhanSo& ps);

        PhanSo& operator++();
        PhanSo& operator--();

        operator float();
        operator int();

        friend istream& operator>>(istream& in, PhanSo& ps);
        friend ostream& operator<<(ostream& out, const PhanSo& ps);
};
