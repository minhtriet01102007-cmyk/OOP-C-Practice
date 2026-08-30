#include "sv.h"
#include "svcnpm.h"
#include <iostream>

int main(){
    std::cout << "Nhap thong tin cua sinh vien" << std::endl;
    SV sv;
    sv.nhap();
    std::cout << "\n";
    std::cout << "Thong tin cua sinh vien" << std::endl;
    sv.xuat();
    std::cout << std::endl;
    std::cout << "Nhap thong tin cho doi tuong sinh vien chuyen nganh cnpm" << std::endl;
    int n;
    std::cout << "Nhap so luong doi tuong: ";
    std::cin >> n;
    SVCNPM* ds = new SVCNPM[n];
    for (int i=0; i<n; i++){
        std::cout << "Nhap thong tin doi tuong sinh vien cnpm thu " << i+1 << std::endl;
        ds[i].nhap();
    }
    std::cout << std::endl;
    for (int i=0; i<n; i++){
        std::cout << "Thong tin doi tuong sinh vien cnpm thu " << i+1 << std::endl;
        ds[i].xuat();
    }
    std::cout << std::endl;
    bool timThay = false;
    for (int i=0; i<n; i++){
        if (ds[i].getDTB() >= 8.5){
            ds[i].xuat();
            timThay = true;
        }
    }
    if (!timThay){
        std::cout << "Khong tim thay sinh vien" << std::endl;
    }

    return 0;
}