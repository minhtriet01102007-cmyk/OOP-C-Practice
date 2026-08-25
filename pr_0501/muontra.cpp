#include "date.h"
#include "muontra.h"
#include <string>
#include <iostream>
using namespace std;

double Muontra::phi_cuoc = 50;
Muontra::Muontra() : Date(){
    ma_docgia = "";
    ma_sach = "";
    so_luong = 0;
}
void Muontra::nhap(){
    Date::nhap();
    cout << "Nhap ma doc gia: ";
    getline(cin, ma_docgia);
    cout << "Nhap ma sach: ";
    getline(cin, ma_sach);
    cout << "Nhap so luong: ";
    cin >> so_luong;
}
void Muontra::xuat() const{
    Date::xuat();
    cout << "Ma doc gia: " << ma_docgia << endl;
    cout << "Ma sach: " << ma_sach << endl;
    cout << "So luong: " << so_luong << endl;
    cout << "Phi cuoc: " << phi_cuoc << endl;
}
double Muontra::tinh() const{
    return so_luong * phi_cuoc;
}

