#include "oto.h"
#include <iostream>
#include <string>

OTo::OTo() : PhuongTienGiaoThong() {
    so_cho = 0;
    kieu_dongco = "";
}
OTo::OTo(std::string hang_sx, std::string ten_phuongtien, int nam_sx, 
         float v_max, int so_cho, std::string kieu_dongco)
    : PhuongTienGiaoThong(hang_sx, ten_phuongtien, nam_sx, v_max){
    this->so_cho = so_cho;
    this->kieu_dongco = kieu_dongco;
}
OTo::~OTo(){
}
void OTo::nhap(){
    PhuongTienGiaoThong::nhap();
    std::cout << "Nhap so cho ngoi: ";
    std::cin >> so_cho;
    std::cout << "Nhap kieu dong co: ";
    getline(std::cin, kieu_dongco);
}
void OTo::xuat() const {
    PhuongTienGiaoThong::xuat();
    std::cout << "So cho ngoi: " << so_cho << std::endl;
    std::cout << "Kieu dong co: " << kieu_dongco << std::endl;
    std::cout << "Van toc co so: " << vantocoso() << " km/h" << std::endl;
}

float OTo::vantocoso() const{
    return getVmax();
}
bool OTo::operator<(const OTo& other) const{
    return vantocoso() < other.vantocoso();
}