#include "hanghoa.hpp"
#include <iostream>

using namespace std;

Hanghoa::Hanghoa() {
    maHang = "";
    tenHang = "";
}

Hanghoa::Hanghoa(string maHang, string tenHang) {
    this->maHang = maHang;
    this->tenHang = tenHang;
}

void Hanghoa::nhap() {
    cout << "Nhap ma hang: ";
    cin >> maHang;

    cin.ignore();
    cout << "Nhap ten hang: ";
    getline(cin, tenHang);
}

void Hanghoa::xuat() const {
    cout << "Ma hang: " << maHang << endl;
    cout << "Ten hang: " << tenHang << endl;
}

string Hanghoa::getMaHang() const {
    return maHang;
}

string Hanghoa::getTenHang() const {
    return tenHang;
}
