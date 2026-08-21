#include "nhanvien.h"
#include <iostream>
using namespace std;

double Employees::tien_phu_cap = 500;
Employees::Employees() : Nguoi(){
    nam_sinh = 0;
    he_so_luong = 0;
}
Employees::Employees(string ma_dinh_danh, string ho_ten, int nam_sinh, double he_so_luong)
    : Nguoi(ma_dinh_danh, ho_ten){
    this->nam_sinh = nam_sinh;
    this->he_so_luong = he_so_luong;
}
void Employees::taoThongtin(){
    nam_sinh = 2000;
    he_so_luong = 1.0;
}
void Employees::nhap(){
    Nguoi::nhap();
    cout << "Nhap nam sinh: ";
    cin >> nam_sinh;
    cout << "Nhap he so luong: ";
    cin >> he_so_luong;
    cin.ignore();
}
double Employees::tinhluong() const{
    return he_so_luong * 1550 + tien_phu_cap;
}
void Employees::xuat() const{
    Nguoi::xuat();
    cout << "Nam sinh: " << nam_sinh << endl;
    cout << "He so luong: " << he_so_luong << endl;
    cout << "Tien phu cap: " << tien_phu_cap << endl;
    cout << "Luong: " << tinhluong() << endl;
}
double Employees::getLuong() const{
    return tinhluong();
}