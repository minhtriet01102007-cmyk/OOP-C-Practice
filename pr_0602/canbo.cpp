#include "nhanvien.h"
#include "canbo.h"
#include <iostream>
#include <string>

void CanBo::Nhap(){
    NhanVien::Nhap();
    std::cout << "Nhap he so luong: ";
    std::cin >> hesoluong;
    std::cout << "Nhap phu cap: ";
    std::cin >> phucap;
    std::cin.ignore();
    std::cout << "Nhap trinh do: ";
    getline(std::cin, level);
}
void CanBo::Xuat() const{
    NhanVien::Xuat();
    std::cout << "He so luong: " << hesoluong << "\n";
    std::cout << "Phu cap: " << phucap << "\n";
    std::cout << "Trinh do: " << level << "\n";
}
double CanBo::TinhLuong() const{
    double luong = hesoluong * 1550 + phucap;
    if (!VeHuu()) return luong;
    else return luong * 0.7;
}