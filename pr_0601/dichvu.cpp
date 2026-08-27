#include "dichvu.h"
#include <iostream>
#include <string>

DichVu::DichVu() : maDV(""), tenDV(""), gia_cuoc(0)
{}
DichVu::DichVu(std::string maDV, std::string tenDV, double gia_cuoc)
      : maDV(maDV), tenDV(tenDV), gia_cuoc(gia_cuoc)
{}
void DichVu::nhap(){
    std::cout << "Nhap ma dich vu: ";
    getline(std::cin, maDV);
    std::cout << "Nhap ten dich vu: ";
    getline(std::cin, tenDV);
    std::cout << "Nhap gia cuoc: ";
    std::cin >> gia_cuoc;
    std::cin.ignore();
}
void DichVu::xuat() const{
    std::cout << "Ma dich vu: " << maDV << std::endl;
    std::cout << "Ten dich vu: " << tenDV << std::endl;
    std::cout << "Gia cuoc: " << gia_cuoc << std::endl;
}
double DichVu::LayGiacuoc() const{
    return gia_cuoc;
}
