#include "hs.h"
#include <iostream>
#include <string>
using namespace std;

HocSinh::HocSinh(): hoten(""), diemvan(0), diemtoan(0){}
HocSinh::HocSinh(string hoten, double diemvan, double diemtoan){
    this->hoten = hoten;
    this->diemvan = diemvan;
    this->diemtoan = diemtoan;
}
HocSinh::HocSinh(const HocSinh& hs){
    this->hoten = hs.hoten;
    this->diemvan = hs.diemvan;
    this->diemtoan = hs.diemtoan;
}
HocSinh::~HocSinh(){}
double HocSinh::DTB() const{
    return (this->diemvan + this->diemtoan) / 2;
}
bool HocSinh::operator>(const HocSinh& hs) {
    return this->DTB() > hs.DTB();
}
bool HocSinh::operator<(const HocSinh& hs) {
    return this->DTB() < hs.DTB();
}
bool HocSinh::operator==(const HocSinh& hs) {
    return this->DTB() == hs.DTB();
}
bool HocSinh::operator>=(const HocSinh& hs) {
    return this->DTB() >= hs.DTB();
}
bool HocSinh::operator<=(const HocSinh& hs) {
    return this->DTB() <= hs.DTB();
}
bool HocSinh::operator!=(const HocSinh& hs) {
    return this->DTB() != hs.DTB();
}
HocSinh& HocSinh::operator=(const HocSinh& hs){
    if (this != &hs){
        this->diemvan = hs.diemvan;
        this->diemtoan = hs.diemtoan;
    }
    return *this;
}
istream& operator>>(istream& in, HocSinh& hs){
    cout << "Nhap ho ten: ";
    getline(in, hs.hoten);
    cout << endl;
    cout << "Nhap diem van: ";
    in >> hs.diemvan;
    cout << endl;
    cout << "Nhap diem toan: ";
    in >> hs.diemtoan;
    return in;
}
ostream& operator<<(ostream& o, const HocSinh& hs){
    o << hs.hoten << ", " << hs.diemvan << ", " << hs.diemtoan;
    return o;
}
