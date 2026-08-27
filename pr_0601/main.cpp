#include "dichvu.h"
#include "nguoi.h"
#include "khachhang.h"
#include <iostream>

int main(){
    std::cout << "=== Nhap thong tin cua mot nguoi ===\n";
    Nguoi n;
    n.nhap();

    std::cout << "\n=== Thong tin cua nguoi do ===\n";
    n.xuat();

    std::cout << "\n=== Nhap thong tin cua khach hang ===\n";
    KhachHang kh;
    kh.Nhap();

    std::cout << "\n=== Thong tin cua khach hang ===\n";
    kh.Xuat();

    std::cout << "\n=== Tong gia cuoc cua khach hang ===\n";
    std::cout << kh.TongGiaCuoc() << std::endl;

    return 0;
}