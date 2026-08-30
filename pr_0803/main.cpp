#include "video.h"
#include "media.h"
#include <iostream>

int main(){
    std::cout << "Nhap thong tin cua mot phuong tien truyen thong media" << std::endl;
    Media pt;
    pt.nhap();
    std::cout << std::endl;
    std::cout << "Thong tin cua mot phuong tien truyen thong media" << std::endl;
    pt.show();
    std::cout << std::endl;
    int n;
    std::cout << "Nhap so doi tuong Video: ";
    std::cin >> n;
    Video* ds = new Video[n];
    for (int i=0; i<n; i++){
        std::cout << "Nhap thong tin doi tuong Video thu " << i+1 << std::endl;
        ds[i].nhap();
    }
    std::cout << std::endl;
    for (int i=0; i<n; i++){
        std::cout << "Thong tin doi tuong Video thu " << i+1 << std::endl;
        ds[i].xuat();
    }
    std::cout << std::endl;
    bool timThay = false;
    for (int i=0; i<n; i++){
        if (ds[i].getTen() == "Huong dan lap trinh Python" && ds[i].getTime() > 10){
            ds[i].xuat();
            timThay = true;
        }
    }
    if (!timThay){
        std::cout << "Khong tim thay sach!" << std::endl;
    }
    return 0;
}
