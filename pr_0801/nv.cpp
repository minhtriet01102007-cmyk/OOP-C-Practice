#include "nguoi.h"
#include "nv.h"
#include <iostream>
#include <string>

NhanVien::NhanVien() : Nguoi(), HSThamNien(0), MucLuong(0), AnCa(0)
{}
NhanVien::NhanVien(double HSThamNien, double MucLuong, double AnCa)
    : Nguoi("", "", 0), HSThamNien(HSThamNien), MucLuong(MucLuong), AnCa(AnCa)
{}
NhanVien::~NhanVien(){}
void NhanVien::nhap(){
    Nguoi::nhap();
    std::cout << "Nhap he so tham nien: ";
    std::cin >> HSThamNien;
    std::cout << "\n";
    std::cout << "Nhap muc luong: ";
    std::cin >> MucLuong;
    std::cout << "\n";
    std::cout << "Nhap tien an ca: ";
    std::cin >> AnCa;
    std::cin.ignore(); 
}
void NhanVien::xuat() const{
    Nguoi::xuat();
    std::cout << "He so tham nien: " << HSThamNien << std::endl;
    std::cout << "Muc luong: " << MucLuong << std::endl;
    std::cout << "Tien an ca: " << AnCa << std::endl;
}
bool NhanVien::NghiHuu() const{
    return tinhtuoi() >= 60;
}
double NhanVien::TinhLuong() const{
    if (NghiHuu()) return 0.75 * MucLuong * HSThamNien;
    else return MucLuong * HSThamNien + AnCa;
}