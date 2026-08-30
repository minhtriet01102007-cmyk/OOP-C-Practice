#include "sv.h"
#include <string>
#include <iostream>

SV::SV() : maSV(""), hoten("")
{}
SV::SV(std::string maSV, std::string hoten) : maSV(maSV), hoten(hoten)
{}
SV::~SV(){}
void SV::nhap(){
    std::cout << "Nhap ma sinh vien: ";
    getline(std::cin, maSV);
    std::cout << "Nhap ho va ten: ";
    getline(std::cin, hoten);
    std::cin.ignore();
}
void SV::xuat() const{
    std::cout << "Ma sinh vien: " << maSV << "\n";
    std::cout << "Ho va ten: " << hoten << "\n";
}