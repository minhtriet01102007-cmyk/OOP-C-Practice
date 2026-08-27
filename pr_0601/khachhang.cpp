#include "dichvu.h"
#include "nguoi.h"
#include "khachhang.h"
#include <iostream>
#include <string>

KhachHang::KhachHang() : Nguoi(), SoLuongDichVu(0)
{}
KhachHang::KhachHang(int SoLuongDichVu, DichVu dv[100])
    : Nguoi(), SoLuongDichVu(SoLuongDichVu)
{
    for (int i = 0; i < SoLuongDichVu; i++){
        this->dv[i] = dv[i];
    }
}
void KhachHang::Nhap(){
    Nguoi::nhap();
    std::cout << "Nhap so luong dich vu: ";
    std::cin >> SoLuongDichVu;
    std::cin.ignore();
    for (int i = 0; i < SoLuongDichVu; i++){
        std::cout << std::endl;
        std::cout << "=== Nhap dich vu thu " << i + 1 << " ===" << std::endl;
        dv[i].nhap();
    }
}
void KhachHang::Xuat() const{
    Nguoi::xuat();
    std::cout << "So luong dich vu: " << SoLuongDichVu << std::endl;
    for (int i = 0; i < SoLuongDichVu; i++){
        std::cout << "\n";
        std::cout << "=== Dich vu thu " << i + 1 << " ===" << std::endl;
        dv[i].xuat();
    }
    std::cout << "Tong gia cuoc: " << TongGiaCuoc() << std::endl;
}
double KhachHang::TongGiaCuoc() const{
    double tong = 0;
    for (int i = 0; i < SoLuongDichVu; i++){
        tong += dv[i].LayGiacuoc();
    }
    return tong;
}