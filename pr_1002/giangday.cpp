#include "monhoc.h"
#include "giangday.h"
#include <string>
#include <iostream>

int GIANGDAY::sotiet = 0;
GIANGDAY::GIANGDAY() : MONHOC(), magv(""), malop(""), soTC(0)
{}
GIANGDAY::GIANGDAY(std::string magv, std::string malop, int soTC)
        : MONHOC(), magv(magv), malop(malop), soTC(soTC)
{}
void GIANGDAY::nhap(){
    MONHOC::nhap();
    std::cout << "Nhap ma giang vien: ";
    getline(std::cin, magv);
    std::cout << "Nhap ma lop: ";
    getline(std::cin, malop);
    std::cout << "Nhap so tin chi: ";
    std::cin >> soTC;
    std::cin.ignore();
}
void GIANGDAY::xuat() const{
    MONHOC::xuat();
    std::cout << "Ma giang vien: " << magv << std::endl;
    std::cout << "Ma lop: " << malop << std::endl;
    std::cout << "So tin chi: " << soTC << std::endl;
}
double GIANGDAY::tinhtiet() const{
    return soTC*15-sotiet;
}
int GIANGDAY::getTC() const{
    return soTC;
}
std::string GIANGDAY::getMaGV() const{
    return magv;
}
