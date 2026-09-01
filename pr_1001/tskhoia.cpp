#include "tskhoia.h"
#include "thisinh.h"
#include <iostream>
#include <string>

ThiSinhKhoiA::ThiSinhKhoiA(): ThiSinh(), toan(0), ly(0), hoa(0)
{}
ThiSinhKhoiA::ThiSinhKhoiA(double toan, double ly, double hoa)
    : ThiSinh(), toan(toan), ly(ly), hoa(hoa)
{}
ThiSinhKhoiA::~ThiSinhKhoiA()
{}
void ThiSinhKhoiA::nhap(){
    ThiSinh::nhap();
    std::cout << "Nhap diem Toan: ";
    std::cin >> toan;
    std::cout << "Nhap diem Ly: ";
    std::cin >> ly;
    std::cout << "Nhap diem Hoa: ";
    std::cin >> hoa;
}
void ThiSinhKhoiA::xuat() const{
    ThiSinh::xuat();
    std::cout << "Diem Toan: " << toan << std::endl;
    std::cout << "Diem Ly: " << ly << std::endl;
    std::cout << "Diem Hoa: " << hoa << std::endl;
    std::cout << "Tong diem 3 mon: " << tinhtong() << std::endl;
}

double ThiSinhKhoiA::getToan() const{
    return toan;
}
double ThiSinhKhoiA::getLy() const{
    return ly;
}
double ThiSinhKhoiA::getHoa() const{
    return hoa;
}
double ThiSinhKhoiA::tinhtong() const{
    return toan + ly + hoa;
}
bool ThiSinhKhoiA::operator>(const ThiSinhKhoiA& other) const{
    return tinhtong() > other.tinhtong();
}