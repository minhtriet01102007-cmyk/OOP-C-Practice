#include "nguoi.h"
#include "nv.h"
#include <iostream>
#include <string>

int main(){
    std::cout << "Nhap thong tin cua 1 nguoi" << std::endl;
    Nguoi pt;
    pt.nhap();
    std::cout << "\n";
    std::cout << "Thong tin cua nguoi do" << std::endl;
    pt.xuat();
    std::cout << "Tuoi: " << pt.tinhtuoi() << std::endl;

    int n;
    std::cout << "Nhap so luong nhan vien: ";
    std::cin >> n;

    NhanVien* ds = new NhanVien[n];
    for (int i=0; i<n; i++){
        std::cout << "Nhap thong tin nhan vien thu " << i+1 << std::endl;
        ds[i].nhap();
    }
    std::cout << "\n";
    for (int i=0; i<n; i++){
        std::cout << "Thong tin nhan vien thu " << i+1 << std::endl;
        ds[i].xuat();
        std::cout << "Luong: " << ds[i].TinhLuong() << "\n";
    }
    std::cout << std::endl; 

    std::cout << "Thong tin nhan vien da nghi huu" << std::endl;
    for (int i=0; i<n; i++){
        if (ds[i].NghiHuu()){
            ds[i].xuat();
            std::cout << "Luong: " << ds[i].TinhLuong() << "\n";
        }
    }
    return 0;
}