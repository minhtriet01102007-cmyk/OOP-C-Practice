#include "lophoc.h"
#include <string>
#include <iostream>

LopHoc::LopHoc() : malop(""), tenlop("")
{}
LopHoc::LopHoc(std::string malop, std::string tenlop) : malop(malop), tenlop(tenlop)
{}
void LopHoc::nhap(){
    std::cout << "Nhap ma lop: ";
    getline(std::cin, malop);
    std::cout << "Nhap ten lop: ";
    getline(std::cin, tenlop);
    std::cin.ignore();
}
void LopHoc::xuat() const{
    std::cout << "Ma lop: " << malop << std::endl;
    std::cout << "Ten lop: " << tenlop << std::endl;
}
