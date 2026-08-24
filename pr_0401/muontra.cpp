#include "sach.h"
#include "muontra.h"
#include <iostream>
#include <string>

double Muontra::phi_cuoc=50;
Muontra::Muontra() : Sach(){
    ma_docgia = "";
    so_luong = 0;
}
void Muontra::nhap(){
    Sach::nhap();
    std::cout << "Nhap ma doc gia: ";
    getline(std::cin, ma_docgia);
    std::cout << "Nhap so luong: ";
    std::cin >> so_luong;
    std::cin.ignore();
}
void Muontra::xuat() const{
    Sach::xuat();
    std::cout << "Ma doc gia: " << ma_docgia << std::endl;
    std::cout << "So luong: " << so_luong << std::endl;
    std::cout << "Phi cuoc: " << phi_cuoc << std:: endl;
}
double Muontra::tinh() const{
    return so_luong * phi_cuoc;
}