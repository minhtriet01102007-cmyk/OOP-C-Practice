#include "sv.h"
#include "svcnpm.h"
#include <iostream>

SVCNPM::SVCNPM() : SV(), dtb(0)
{}
SVCNPM::SVCNPM(double dtb) : SV(), dtb(dtb)
{}
SVCNPM::~SVCNPM(){}
void SVCNPM::nhap(){
    SV::nhap();
    std::cout << "Nhap diem trung binh: ";
    std::cin >> dtb;
}
void SVCNPM::xuat() const{
    std::cout << "Diem trung binh: " << dtb << std::endl;
}
double SVCNPM::getDTB() const{
    return dtb;
}