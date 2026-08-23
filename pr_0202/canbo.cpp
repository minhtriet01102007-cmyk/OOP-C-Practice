#include "canbo.h"
#include "date.h"
#include <iostream>
#include <string>
using namespace std;

double CanBo::tien_phu_cap = 500;

CanBo::CanBo() : Date() {
    ma_canbo = " ";
    ten_canbo = " ";
    luong_basic = 0;
}

CanBo::CanBo(int day, int month, int year, string ma_canbo, string ten_canbo, int luong_basic)
    : Date(day, month, year) {
    this->ma_canbo = ma_canbo;
    this->ten_canbo = ten_canbo;
    this->luong_basic = luong_basic;
}

void CanBo::taoThongtin() {
    ma_canbo = "A001";
    ten_canbo = "ABC";
    luong_basic = 500;
}

void CanBo::nhap(){
    Date::nhap();
    cout << "Nhap ma can bo: ";
    cin.ignore();
    getline(cin, ma_canbo);
    cout << "Nhap ten can bo: ";
    getline(cin, ten_canbo);
    cout << "Nhap luong co ban: ";
    cin >> luong_basic;
}

void CanBo::xuat() const{
    cout << "Ma can bo: " << ma_canbo << endl;
    cout << "Ten can bo: " << ten_canbo << endl;
    cout << "Tien phu cap: " << tien_phu_cap << endl;
    cout << "Luong: " << tinhLuong() << endl;
}

double CanBo::tinhLuong() const{
    return luong_basic + tien_phu_cap;
}

double CanBo::getLuong() const{
    return tinhLuong();
}

