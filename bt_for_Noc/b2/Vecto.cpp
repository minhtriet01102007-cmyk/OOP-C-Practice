#include "Vecto.h"

Vecto::Vecto(int n)
{
    sochieu = n;
    a = new int[sochieu];
    for(int i = 0; i < sochieu; i++) a[i] = 0;
}

Vecto::Vecto(const Vecto &x)
{
    sochieu = x.sochieu;
    a = new int[sochieu];
    for(int i = 0; i < sochieu; i++) a[i] = x.a[i];
}   

Vecto::~Vecto()
{
    delete[] a;
}

int Vecto::getSochieu() const
{
    return sochieu;
}

void Vecto::setSochieu(int n)
{
    sochieu = n;
    delete[] a;
    a = new int[sochieu];
    for(int i = 0; i < sochieu; i++) a[i] = 0;
}

Vecto Vecto::operator+(const Vecto &x)
{
    Vecto tong(sochieu);
    for(int i = 0; i < sochieu; i++) tong.a[i] = a[i] + x.a[i];
    return tong;
}

Vecto Vecto::operator-(const Vecto &x)
{
    Vecto hieu(sochieu);
    for(int i = 0; i < sochieu; i++) hieu.a[i] = a[i] - x.a[i];
    return hieu;
}   

Vecto Vecto::operator*(const Vecto &x)
{
    Vecto tich(sochieu);
    for(int i = 0; i < sochieu; i++) tich.a[i] = a[i] * x.a[i];
    return tich;
}

Vecto Vecto::operator=(const Vecto &x)
{
    sochieu = x.sochieu;
    delete[] a;
    a = new int[sochieu];
    for(int i = 0; i < sochieu; i++) a[i] = x.a[i];
    return *this;
}

istream &operator>>(istream &is, Vecto &x)
{
    cout << "Nhap so chieu: ";
    is >> x.sochieu;
    delete[] x.a;
    x.a = new int[x.sochieu];
    for(int i = 0; i < x.sochieu; i++) is >> x.a[i];
    return is;
}

ostream &operator<<(ostream &os, const Vecto &x)
{
    os << "(";
    for(int i = 0; i < x.sochieu - 1; i++) os << x.a[i] << ", ";
    os << x.a[x.sochieu - 1] << ")";
    return os;
}

int& Vecto::operator[](int i)
{
    return *(a + i);
}

int Vecto::operator^(const Vecto &x)
{
    int tichvohuong = 0;
    for(int i = 0; i < sochieu; i++) tichvohuong += a[i] * x.a[i];
    return tichvohuong;
}