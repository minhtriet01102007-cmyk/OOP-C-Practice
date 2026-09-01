#include "thisinh.h"
#include <string>
#include <iostream>

ThiSinh::ThiSinh() : sbd(""), Hoten(""), dc(""), diem_ut(0)
{}
ThiSinh::ThiSinh(std::string sbd, std::string Hoten, std::string dc, double diem_ut)
       : sbd(sbd), Hoten(Hoten), dc(dc), diem_ut(diem_ut)
{}
ThiSinh::~ThiSinh(){}
void ThiSinh::nhap(){
    std::cout << "Nhap so bao danh: ";
    getline(std::cin, sbd);
    std::cout << "Nhap ho va ten: ";
    getline(std::cin, Hoten);
    std::cout << "Nhap dia chi: ";
    getline(std::cin, dc);
    std::cout << "Nhap diem uu tien: ";
    std::cin >> diem_ut;
    std::cin.ignore();
}
void ThiSinh::xuat() const{
    std::cout << "So bao danh: " << sbd << std::endl;
    std::cout << "Ho va ten: " << Hoten << std::endl;
    std::cout << "Dia chi: " << dc << std::endl;
    std::cout << "Diem uu tien: " << diem_ut << std::endl;
}