#include "nhanvien.h"
#include <iostream>
#include <string>

NhanVien::NhanVien() : manv(""), hoten(""), tuoi(0)
{}
NhanVien::NhanVien(std::string manv, std::string hoten, int tuoi)
        : manv(manv), hoten(hoten), tuoi(tuoi)
{}
void NhanVien::Nhap(){
    std::cout << "Nhap ma nhan vien: ";
    getline(std::cin, manv);
    std::cout << "Nhap ho ten: ";
    getline(std::cin, hoten);
    std::cout << "Nhap tuoi: ";
    std::cin >> tuoi;
}
void NhanVien::Xuat() const{
    std::cout << "Ma nhan vien: " << manv << "\n";
    std::cout << "Ho ten: " << hoten << "\n";
    std::cout << "Tuoi: " << tuoi << "\n";
}
bool NhanVien::VeHuu() const{
    return tuoi >= 60;
}
