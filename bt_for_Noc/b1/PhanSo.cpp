#include "PhanSo.h"
#include <numeric>
#include <stdexcept>
#include <iostream>
using namespace std;

void PhanSo::rutgon(){
    if (mau == 0){
        throw invalid_argument("Mau so khong duoc bang 0");
    }
    int ucln = std::gcd(tu, mau);
    tu /= ucln;
    mau /= ucln;
    if (mau < 0){
        tu = -tu;
        mau = -mau;
    }
}
PhanSo::PhanSo(int t, int m) : tu(t), mau(m){ 
    rutgon(); 
}
istream& operator>>(istream& i, PhanSo& ps){
    cout << "Nhap tu so: "; i >> ps.tu;
    cout << "Nhap mau so: "; i >> ps.mau;
    ps.rutgon();
    return i;
}
ostream& operator<<(ostream& os, const PhanSo& ps){
    if (ps.mau == 1) os << ps.tu;
    else os << ps.tu << "/" << ps.mau;
    return os;
}
PhanSo PhanSo::operator+(const PhanSo& other) const{
    return PhanSo(tu * other.mau + other.tu * mau, mau * other.mau);
}
PhanSo PhanSo::operator-(const PhanSo& other) const{
    return PhanSo(tu * other.mau - other.tu * mau, mau * other.mau);
}
PhanSo PhanSo::operator*(const PhanSo& other) const{
    return PhanSo(tu * other.tu, mau * other.mau);
}
PhanSo PhanSo::operator/(const PhanSo& other) const{
    return PhanSo(tu * other.mau, mau * other.tu);
}
PhanSo& PhanSo::operator+=(const PhanSo& other){
    *this = *this + other;
    return *this;
}
PhanSo& PhanSo::operator++(){ 
    tu += mau;
    return *this;
}
PhanSo PhanSo::operator++(int){ 
    PhanSo temp = *this;
    tu += mau;
    return temp;
}
bool PhanSo::operator==(const PhanSo& other) const{
    return (tu == other.tu && mau == other.mau);
}
bool PhanSo::operator!=(const PhanSo& other) const{
    return !(*this == other);
}
bool PhanSo::operator>(const PhanSo& other) const{
    return (tu * other.mau > other.tu * mau);
}
bool PhanSo::operator<(const PhanSo& other) const{
    return (tu * other.mau < other.tu * mau);
}

