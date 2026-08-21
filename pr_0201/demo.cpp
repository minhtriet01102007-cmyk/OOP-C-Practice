#include <iostream>
#include <vector>
#include "nhanvien.h"
using namespace std;
int main(){
    cout << "========== NHAP THONG TIN NGUOI ==========\n";
    Nguoi nguoi;
    nguoi.nhap();
    cout << "\n========== THONG TIN NGUOI ==========\n";
    nguoi.xuat();
    int n;
    cout << "\n\nNhap so luong nhan vien n = ";
    cin >> n;
    cin.ignore();
    vector<Employees> dsNhanVien(n);
    for (int i=0; i<n; i++){
        cout << "\n========== NHAN VIEN " << i + 1 << " ==========\n";
        dsNhanVien[i].nhap();
    }
    cout << "\n\n========== DANH SACH NHAN VIEN ==========\n";
    for (int i = 0; i < n; i++){
        cout << "\n----- NHAN VIEN " << i + 1 << " -----\n";
        dsNhanVien[i].xuat();
    }
    double luongMax = dsNhanVien[0].getLuong();
    for (int i = 1; i < n; i++){
        if (dsNhanVien[i].getLuong() > luongMax) {
            luongMax = dsNhanVien[i].getLuong();
        }
    }
    cout << "\n\n========== NHAN VIEN CO LUONG CAO NHAT ==========\n";
    cout << "Luong cao nhat: " << luongMax << endl;
    for (int i = 0; i < n; i++) {
        if (dsNhanVien[i].getLuong() == luongMax) {
            cout << "Nhan vien thu " << i + 1 << ":\n";
            dsNhanVien[i].xuat();
            cout << endl;
        }
    }
    return 0;
}