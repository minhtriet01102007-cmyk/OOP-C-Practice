#include "nguoi.h"
#include <string>
#include <iostream>

Nguoi::Nguoi() : ma_dinh_danh(""), ho_ten("")
{}
Nguoi::Nguoi(std::string ma_dinh_danh, std::string ho_ten)
            : ma_dinh_danh(ma_dinh_danh), ho_ten(ho_ten)
{}
void Nguoi::nhap(){
    std::cout << "Nhap ma dinh danh: " << "\n";
    getline(std::cin, ma_dinh_danh);
    std::cout << "Nhap ho va ten: " << "\n";
    getline(std::cin, ho_ten);
}
void Nguoi::xuat() const{
    std::cout << "Ma dinh danh: " << "\n";
    std::cout << "Ho va ten: " << "\n";
}