#include "monhoc.h"
#include <string>
#include <iostream>

MONHOC::MONHOC() : maMH(""), tenMH(""){}
MONHOC::MONHOC(std::string maMH, std::string tenMH) : maMH(maMH), tenMH(tenMH){}
void MONHOC::nhap(){
    std::cout << "Nhap ma mon hoc: ";
    getline(std::cin, maMH);
    std::cout << "Nhap ten mon hoc: ";
    getline(std::cin, tenMH);
    std::cin.ignore();
}
void MONHOC::xuat() const{
    std::cout << "Ma mon hoc: " << maMH << std::endl;
    std::cout << "Ten mon hoc: " << tenMH << std::endl;
}