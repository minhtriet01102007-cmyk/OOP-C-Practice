#include "phanso.h"
#include <iostream>
using namespace std;

PhanSo::PhanSo(): tu(0), mau(1){
}
PhanSo::PhanSo(double tu, double mau){
    this->tu = tu;
    this->mau = mau;
}
PhanSo::PhanSo(double x){
    this->tu = x;
    this->mau = 1;
}
PhanSo::PhanSo(const PhanSo& ps){
    this->tu = ps.tu;
    this->mau = ps.mau;
}
PhanSo PhanSo::operator+(const PhanSo& ps){
    PhanSo kq;
    kq.tu = tu * ps.mau + ps.tu * mau;
    kq.mau = mau * ps.mau;
    return kq;
}
PhanSo PhanSo::operator-(const PhanSo& ps){
    PhanSo kq1;
    kq1.tu = tu * ps.mau - ps.tu * mau;
    kq1.mau = mau * ps.mau;
    return kq1;
}
PhanSo PhanSo::operator*(const PhanSo& ps){
    PhanSo kq2;
    kq2.tu = tu * ps.tu;
    kq2.mau = mau * ps.mau;
    return kq2;
}
PhanSo PhanSo::operator/(const PhanSo& ps){
    PhanSo kq3;
    kq3.tu = tu * ps.mau;
    kq3.mau = mau * ps.tu;
    return kq3;
}
PhanSo& PhanSo::operator=(const PhanSo& ps){
    tu = ps.tu;
    mau = ps.mau;
    return *this;
}
PhanSo& PhanSo::operator+=(const PhanSo& ps){
    tu = tu * ps.mau + ps.tu * mau;
    mau = mau * ps.mau;
    return *this;
}
PhanSo& PhanSo::operator-=(const PhanSo& ps){
    tu = tu * ps.mau - ps.tu * mau;
    mau = mau * ps.mau;
    return *this;
}
bool PhanSo::operator>(const PhanSo& ps){
    return tu * ps.mau > ps.tu * mau;
}
bool PhanSo::operator<(const PhanSo& ps){
    return tu * ps.mau < ps.tu * mau;
}
bool PhanSo::operator==(const PhanSo& ps){
    return tu * ps.mau == ps.tu * mau;
}
bool PhanSo::operator>=(const PhanSo& ps){
    return tu * ps.mau >= ps.tu * mau;
}
bool PhanSo::operator<=(const PhanSo& ps){
    return tu * ps.mau <= ps.tu * mau;
}
bool PhanSo::operator!=(const PhanSo& ps){
    return !(*this == ps);
}
PhanSo& PhanSo::operator++(){
    tu = tu + mau;
    return *this;
}
PhanSo& PhanSo::operator--(){
    tu = tu - mau;
    return *this;
}
PhanSo::operator float(){
    return (float)(tu / mau);
}
PhanSo::operator int(){
    return (int)(tu / mau);
}
istream& operator>>(istream& in, PhanSo& ps){
    cout << "Nhap tu: ";
    in >> ps.tu;
    cout << "Nhap mau: ";
    in >> ps.mau;
    return in;
}
ostream& operator<<(ostream& out, const PhanSo& ps){
    out << ps.tu << "/" << ps.mau;
    return out;
}




