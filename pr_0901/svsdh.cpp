#include "sv.h"
#include "svsdh.h"
#include <iostream>

SVSDH::SVSDH() : SV(), hocphi(0){}
SVSDH::SVSDH(double hocphi) : SV(), hocphi(hocphi){}
SVSDH::~SVSDH(){}
void SVSDH::nhap(){
    SV::nhap();
    std::cout << "Nhap hoc phi: ";
    std::cin >> hocphi;
}
void SVSDH::xuat() const{
    SV::xuat();
    std::cout << "Hoc phi: " << hocphi << std::endl;
}
double SVSDH::getHP() const{
    return hocphi;
}