#include "sv.h"
#include "svsdh.h"
#include <iostream>

int main(){
    std::cout << "NHAP THONG TIN HOC VIEN" << std::endl;
    SV sv;
    sv.nhap();
    std::cout << "\n";
    std::cout << "THONG TIN HOC VIEN" << std::endl;
    sv.xuat();
    std::cout << "\n";
    std::cout << "NHAP THONG TIN HOC VIEN SAU DAI HOC" << std::endl;
    int n;
    std::cout << "Nhap so luong hoc vien sau dai hoc: ";
    std::cin >> n;
    SVSDH* ds = new SVSDH[n];
    for (int i=0; i<n; i++){
        std::cout << "Nhap thong tin hoc vien sau dai hoc thu " << i+1 << std::endl;
        ds[i].nhap();
    }
    std::cout << "\n";
    for (int i=0; i<n; i++){
        std::cout << "Thong tin hoc vien sau dai hoc thu " << i+1 << std::endl;
        ds[i].xuat();
    }
    std::cout << "\n";
    bool find = false;
    for (int i=0; i<n; i++){
        if (ds[i].getHP() > 9000){
            ds[i].xuat();
            find = true;
        }
    }
    if (!find)  std::cout << "Khong tim thay hoc vien" << std::endl;
    return 0;
}