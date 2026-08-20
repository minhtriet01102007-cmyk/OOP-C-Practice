#include "giaothong.h"
#include <iostream>
#include <string>

PhuongTienGiaoThong::PhuongTienGiaoThong()
    : hang_sx(""), ten_phuongtien(""), nam_sx(0), v_max(0.0)
{}
PhuongTienGiaoThong::PhuongTienGiaoThong(std::string hang_sx, std::string ten_phuongtien,
                                         int nam_sx, float v_max)
    : hang_sx(hang_sx), ten_phuongtien(ten_phuongtien), nam_sx(nam_sx), v_max(v_max)
{}
PhuongTienGiaoThong::~PhuongTienGiaoThong()
{}
void PhuongTienGiaoThong::nhap(){
    std::cout << "Nhap hang san xuat: ";
    getline(std::cin, hang_sx);
    std::cout << "Nhap ten phuong tien: ";
    getline(std::cin, ten_phuongtien);
    std::cout << "Nhap nam san xuat: ";
    std::cin >> nam_sx;
    std::cout << "Nhap van toc toi da: ";
    std::cin >> v_max;
}
void PhuongTienGiaoThong::xuat() const{
    std::cout << "Hang san xuat: " << hang_sx << std::endl;
    std::cout << "Ten phuong tien: " << ten_phuongtien <<"\n";
    std::cout << "Nam san xuat: " << nam_sx << "\n";
    std::cout << "Van toc toi da: " << v_max << "\n";
}
float PhuongTienGiaoThong::getVmax() const{
    return v_max;
}

