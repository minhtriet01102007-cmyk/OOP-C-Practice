#include "maytinh.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

double Maytinh::tyLeKhuyenMai = 0.1;

Maytinh::Maytinh() : Hanghoa() {
    nhaSanXuat = "";
    namSanXuat = 0;
    giaBanNiemYet = 0;
}

Maytinh::Maytinh(string maHang, string tenHang,
                 string nhaSanXuat, int namSanXuat,
                 double giaBanNiemYet)
    : Hanghoa(maHang, tenHang) {

    this->nhaSanXuat = nhaSanXuat;
    this->namSanXuat = namSanXuat;
    this->giaBanNiemYet = giaBanNiemYet;
}

void Maytinh::nhap() {
    Hanghoa::nhap();

    cout << "Nhap nha san xuat: ";
    getline(cin, nhaSanXuat);

    cout << "Nhap nam san xuat: ";
    cin >> namSanXuat;

    cout << "Nhap gia ban niem yet: ";
    cin >> giaBanNiemYet;
}

void Maytinh::xuat() const {
    Hanghoa::xuat();

    cout << "Nha san xuat: " << nhaSanXuat << endl;
    cout << "Nam san xuat: " << namSanXuat << endl;

    cout << fixed << setprecision(2);
    cout << "Gia ban niem yet: " << giaBanNiemYet << endl;
    cout << "Ty le khuyen mai: " << tyLeKhuyenMai * 100 << "%" << endl;
    cout << "Gia ban thuc te: " << giaBanThucTe() << endl;
}

double Maytinh::giaBanThucTe() const {
    return giaBanNiemYet - giaBanNiemYet * tyLeKhuyenMai;
}

string Maytinh::getNhaSanXuat() const {
    return nhaSanXuat;
}

void Maytinh::setTyLeKhuyenMai(double tyLe) {
    tyLeKhuyenMai = tyLe;
}

double Maytinh::getTyLeKhuyenMai() {
    return tyLeKhuyenMai;
}