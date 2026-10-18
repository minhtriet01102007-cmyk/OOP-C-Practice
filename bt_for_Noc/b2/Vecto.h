#pragma once
#include <iostream>
using namespace std;

class Vecto{
    private:
        int sochieu;
        int *a;
    public:
        Vecto(int = 2);
        Vecto(const Vecto &);

        int getSochieu() const;
        void setSochieu(int);

        Vecto operator+(const Vecto &); 
        Vecto operator-(const Vecto &);
        Vecto operator*(const Vecto &);
        Vecto operator=(const Vecto &);
        friend istream &operator>>(istream &, Vecto &); 
        friend ostream &operator<<(ostream &, const Vecto &);
        int& operator[](int);
        int operator^(const Vecto &);
        ~Vecto();
};
