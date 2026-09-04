#include "lophoc.h"
#include "giangday.h"
#include <string>
#include <iostream>

int GiangDay::sotietdagiangday = 0;
GiangDay::GiangDay() : LopHoc(), magv(""), mamh(""), soTC(0)
{}
GiangDay::GiangDay(std::string magv, std::string mamh, int soTC) : LopHoc(), magv(magv), mamh(mamh), soTC(soTC)
{}
void GiangDay::nhap(){
    LopHoc::nhap();
    std::cout << "Nhap ma giang vien: ";
    getline(std::cin, magv);
    std::cout << "Nhap ma mon hoc: ";
    getline(std::cin, mamh);
    std::cout << "Nhap so tin chi: ";
    std::cin >> soTC;
    std::cout << "Nhap so tiet da giang day: ";
    std::cin >> sotietdagiangday;
    std::cin.ignore();
}
void GiangDay::xuat() const{
    std::cout << "Ma giang vien: " << magv << std::endl;
    std::cout << "Ma mon hoc: " << mamh << std::endl;
    std::cout << "So tin chi: " << soTC << std::endl;
}
int GiangDay::tinhsotietconlai() const{
    return soTC * 15 - sotietdagiangday;
}
std::string GiangDay::getMagv() const{
    return magv;
}
int GiangDay::getTC() const{
    return soTC;
}
