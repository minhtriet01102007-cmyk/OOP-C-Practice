#include "nhanvien.h"
#include "canbo.h"
#include <iostream>

int main(){
    std::cout << "=== Nhap thong tin cua nhan vien ===\n";
    NhanVien nv;
    nv.Nhap();

    std::cout << "\n=== Thong tin cua nhan vien ===\n";
    nv.Xuat();

    if (nv.VeHuu())
        std::cout << "Trang thai: Ve huu!\n";
    else
        std::cout << "Trang thai: Chua ve huu!\n";

    int n;
    std::cout << "\n=== Nhap thong tin cua can bo ===\n";
    std::cout << "Nhap so luong can bo: ";
    std::cin >> n;

    CanBo* ds = new CanBo[n];

    for (int i = 0; i < n; i++){
        std::cout << "\n=== Nhap thong tin can bo thu " << i + 1 << " ===\n";
        ds[i].Nhap();
    }

    std::cout << "\n=== THONG TIN CAC CAN BO ===\n";
    for (int i = 0; i < n; i++) {
        std::cout << "\n=== Can bo thu " << i + 1 << " ===\n";
        ds[i].Xuat();

        std::cout << "Luong: " << ds[i].TinhLuong() << "\n";
    }

    std::cout << "\n=== CAC CAN BO CHUA VE HUU ===\n";

    for (int i = 0; i < n; i++) {
        if (!ds[i].VeHuu()) {
            ds[i].Xuat();
            std::cout << "Luong: " << ds[i].TinhLuong() << "\n";
        }
    }
    delete[] ds;
    return 0;
}