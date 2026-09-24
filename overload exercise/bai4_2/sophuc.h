#pragma once
#include <iostream>
using namespace std;

class SoPhuc{
    private:
        double thuc;
        double ao;
    public:
        SoPhuc();
        SoPhuc(double thuc, double ao);
        SoPhuc(double x);
        SoPhuc(const SoPhuc& sp);

        SoPhuc operator+(const SoPhuc& sp);
        SoPhuc operator-(const SoPhuc& sp);
        SoPhuc operator*(const SoPhuc& ps);
        SoPhuc operator/(const SoPhuc& ps);
        SoPhuc& operator=(const SoPhuc& ps);
        SoPhuc& operator+=(const SoPhuc& ps);
        SoPhuc& operator-=(const SoPhuc& ps);

        bool operator>(const SoPhuc& ps);
        bool operator<(const SoPhuc& ps);
        bool operator==(const SoPhuc& ps);
        bool operator>=(const SoPhuc& ps);
        bool operator<=(const SoPhuc& ps);
        bool operator!=(const SoPhuc& ps);

        SoPhuc& operator++();
        SoPhuc& operator--();

        operator float();
        operator int();

        friend istream& operator>>(istream& in, SoPhuc& ps);
        friend ostream& operator<<(ostream& out, const SoPhuc& ps);
};  
