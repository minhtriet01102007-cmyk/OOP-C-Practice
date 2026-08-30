#include "nguoi.h"
#include <iostream>
#include <string>
#include <stdexcept>

Nguoi::Nguoi() : hoten(""), gioitinh(""), namsinh(0)
{}
Nguoi::Nguoi(std::string hoten, std::string gioitinh, int namsinh)
    : hoten(hoten), gioitinh(gioitinh), namsinh(namsinh){
    if (namsinh > 2020) throw std::invalid_argument("Nam sinh phai <= 2020");
}
Nguoi::~Nguoi()
{}
void Nguoi::nhap(){
    std::cout << "Nhap ho ten: " << "\n";
    std::getline(std::cin, this->hoten);
    std::cout << "Nhap gioi tinh: " << "\n";
    std::getline(std::cin, this->gioitinh);
    std::cout << "Nhap nam sinh: ";
    std::cin >> this->namsinh;
    std::cin.ignore();
}
void Nguoi::xuat() const{
    std::cout << "Ho ten: " << hoten << std::endl;
    std::cout << "Gioi tinh: " << gioitinh << std::endl;
    std::cout << "Nam sinh: " << namsinh << std::endl;
}
int Nguoi::tinhtuoi() const{
    return 2020 - namsinh;
}