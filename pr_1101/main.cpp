#include "lophoc.h"
#include "giangday.h"
#include <iostream>

int main(){
    std::cout << "===NHAP THONG TIN LOP HOC===" << std::endl;
    LopHoc pt;
    pt.nhap();
    std::cout << std::endl;

    std::cout << "===THONG TIN LOP HOC===" << std::endl;
    pt.xuat();
    std::cout << std::endl;

    int n;
    std::cout << "Nhap so luuong doi tuong GIANGDAY: ";
    std::cin >> n;
    std::cin.ignore();
    std::cout << "\n===NHAP THONG TIN " << n << " DOI TUONG===" << std::endl;
    GiangDay* ds = new GiangDay[n];
    for (int i=0; i<n; i++){
        std::cout << "Nhap thong tin cua doi tuong GIANGDAY thu " << i+1 << std::endl;
        ds[i].nhap();
    }
    std::cout << "\n";
    for (int i=0; i<n; i++){
        std::cout << "Thong tin cua doi tuong GIANGDAY thu " << i+1 << std::endl;
        ds[i].xuat();
    }
    std::cout << "\n";

    std::cout << "===CAC MON HOC CO 3 TIN CHI===" << std::endl;
    bool Mon3TC = false;
    for (int i=0; i<n; i++){
        if (ds[i].getTC() == 3){
            ds[i].xuat();
            Mon3TC = true;
        }
    }
    if (!Mon3TC){
        std::cout << "Khong co mon hoc nao co 3 tin chi" << std::endl;
    }
    std::cout << std::endl;

    if (n>0){
        int minTiet = ds[0].tinhsotietconlai();
        for (int i=0 ; i<n; i++){
            if (ds[i].tinhsotietconlai() < minTiet){
                minTiet = ds[i].tinhsotietconlai();
            }
        }
        std::cout << "===MA CAC GIANG VIEN CO SO TIET CON LAI THAP NHAT (" << minTiet << " tiet)===" << std::endl;
        for (int i=0; i<n; i++){
            if (ds[i].tinhsotietconlai() == minTiet){
                std::cout << "Ma GV: " << ds[i].getMagv() << std::endl;
            }
        }
    }
    delete[] ds;
    return 0;
}