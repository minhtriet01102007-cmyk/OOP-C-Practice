#pragma once
#include <iostream>
using namespace std;

class Polynomial{
    private:
        int deg;
        int* coeff;
    public:
        Polynomial(int deg = 0);
        Polynomial(const Polynomial &p);
        ~Polynomial();
        int getDegree() const;
        void setDegree(int deg);
        Polynomial operator+(const Polynomial &p);
        Polynomial operator-(const Polynomial &p);
        Polynomial operator*(const Polynomial &p);
        Polynomial& operator=(const Polynomial &p);
        int& operator[](int i);
        int operator()(int x) const;
        friend istream &operator>>(istream &is, Polynomial &p);
        friend ostream &operator<<(ostream &os, const Polynomial &p);
};
