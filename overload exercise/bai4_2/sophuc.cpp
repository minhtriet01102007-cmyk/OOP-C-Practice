#include "sophuc.h"
#include <iostream>
using namespace std;

SoPhuc::SoPhuc(): thuc(0), ao(0){
}
SoPhuc::SoPhuc(double thuc, double ao){
    this->thuc = thuc;
    this->ao = ao;
}
SoPhuc::SoPhuc(double x){
    this->thuc = x;
    this->ao = 0;
}
SoPhuc::SoPhuc(const SoPhuc& sp){
    this->thuc = sp.thuc;
    this->ao = sp.ao;
}
SoPhuc SoPhuc::operator+(const SoPhuc& sp){
    SoPhuc kq;
    kq.thuc = thuc + sp.thuc;
    kq.ao = ao + sp.ao;
    return kq;
}
SoPhuc SoPhuc::operator-(const SoPhuc& sp){
    SoPhuc kq;
    kq.thuc = thuc - sp.thuc;
    kq.ao = ao - sp.ao;
    return kq;
}
SoPhuc SoPhuc::operator*(const SoPhuc& sp){
    SoPhuc kq;
    kq.thuc = thuc * sp.thuc - ao * sp.ao;
    kq.ao = thuc * sp.ao + ao * sp.thuc;
    return kq;
}
SoPhuc SoPhuc::operator/(const SoPhuc& sp){
    SoPhuc kq;
    double mau = sp.thuc * sp.thuc + sp.ao * sp.ao;
    kq.thuc = (thuc * sp.thuc + ao * sp.ao) / mau;
    kq.ao = (ao * sp.thuc - thuc * sp.ao) / mau;
    return kq;
}
SoPhuc& SoPhuc::operator=(const SoPhuc& sp){
    this->thuc = sp.thuc;
    this->ao = sp.ao;
    return *this;
}
bool SoPhuc::operator==(const SoPhuc& sp){
    return thuc == sp.thuc && ao == sp.ao;
}
bool SoPhuc::operator!=(const SoPhuc& sp){
    return !(*this == sp);
}
SoPhuc& SoPhuc::operator++(){
    thuc++;
    return *this;
}
SoPhuc& SoPhuc::operator--(){
    thuc--;
    return *this;
}
istream& operator>>(istream& in, SoPhuc& sp){
    cout << "Nhap phan thuc: ";
    in >> sp.thuc;
    cout << "Nhap phan ao: ";
    in >> sp.ao;
    return in;
}
ostream& operator<<(ostream& out, const SoPhuc& sp){
    out << sp.thuc;
    if (sp.ao >= 0) out << " + " << sp.ao << "i";
    else out << " - " << -sp.ao << "i";
    return out;
}