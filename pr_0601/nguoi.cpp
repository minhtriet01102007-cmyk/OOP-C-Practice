#include "nguoi.h"
#include <iostream>
#include <string>

Nguoi::Nguoi() : hoten(""), diachi(""), sdt("")
{}
Nguoi::Nguoi(std::string hoten, std::string diachi, std::string sdt)
     : hoten(hoten), diachi(diachi), sdt(sdt)
{}
void Nguoi::nhap(){
    std::cout << "Nhap ho ten: ";
    getline(std::cin, hoten);
    std::cout << "Nhap dia chi: ";
    getline(std::cin, diachi); 
    std::cout << "Nhap so dien thoai: ";
    getline(std::cin, sdt);
}
void Nguoi::xuat() const{
    std::cout << "Ho ten: " << hoten << "\n";
    std::cout << "Dia chi: " << diachi << "\n";
    std::cout << "So dien thoai: " << sdt << "\n"; 
}