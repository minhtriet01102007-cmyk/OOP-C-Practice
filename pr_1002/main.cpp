#include "monhoc.h"
#include "giangday.h"
#include <iostream>

int main(){
    std::cout << "===NHAP THONG TIN MON HOC===" << std::endl;
    MONHOC mh;
    mh.nhap();
    std::cout << "\n";

    std::cout << "===THONG TIN MON HOC===" << std::endl;
    mh.xuat();
    std::cout << "\n";

    int n;
    std::cout << "Nhap so luong doi tuong GIANGDAY: ";
    std::cin >> n;
    std::cin.ignore();
    std::cout << "===NHAP THONG TIN CUA " << n << " DOI TUONG GIANGDAY===" << std::endl; 
    std::cout << "\n";
    GIANGDAY* ds = new GIANGDAY[n];
    for (int i=0; i<n; i++){
        std::cout << "===NHAP THONG TIN DOI TUONG GIANGDAY THU " << i+1 << " ===" << std::endl;
        ds[i].nhap();
    }
    std::cout << std::endl;
    for (int i=0; i<n; i++){
        std::cout << "===THONG TIN DOI TUONG GIANGDAY THU " << i+1 << " ===" << std::endl;
        ds[i].xuat();
    }
    std::cout << std::endl;
  
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
        int minTiet = ds[0].tinhtiet();
        for (int i=0 ; i<n; i++){
            if (ds[i].tinhtiet() < minTiet){
                minTiet = ds[i].tinhtiet();
            }
        }
        std::cout << "===MA CAC GIANG VIEN CO SO TIET CON LAI THAP NHAT (" << minTiet << " tiet)===" << std::endl;
        for (int i=0; i<n; i++){
            if (ds[i].tinhtiet() == minTiet){
                std::cout << "Ma GV: " << ds[i].getMaGV() << std::endl;
            }
        }
    }
    delete[] ds;
    return 0;
}