#include "hanghoa.hpp"
#include "maytinh.hpp"
#include <iostream>
using namespace std;

int main() {
    cout << "===== NHAP THONG TIN HANG HOA =====" << endl;
    Hanghoa hh;
    hh.nhap();
    cout << "\n===== THONG TIN HANG HOA =====" << endl;
    hh.xuat();
    int n;
    cout << "\n===== NHAP THONG TIN MAY TINH =====" << endl;
    cout << "Nhap so luong may tinh: ";
    cin >> n;

    Maytinh* ds = new Maytinh[n];

    for (int i = 0; i < n; i++) {
        cout << "\n--- MAY TINH " << i + 1 << " ---" << endl;
        ds[i].nhap();
    }
    cout << "\n===== THONG TIN CAC MAY TINH =====" << endl;

    for (int i = 0; i < n; i++) {
        cout << "\n--- MAY TINH " << i + 1 << " ---" << endl;
        ds[i].xuat();
    }
    cout << "\n===== MAY TINH CUA SAMSUNG =====" << endl;

    bool coSamsung = false;

    for (int i = 0; i < n; i++) {
        if (ds[i].getNhaSanXuat() == "SAMSUNG") {
            ds[i].xuat();
            cout << endl;
            coSamsung = true;
        }
    }

    if (!coSamsung) {
        cout << "Khong co may tinh SAMSUNG." << endl;
    }
    cout << "\n===== MAY TINH CO GIA BAN THUC TE THAP NHAT =====" << endl;

    int vtMin = 0;

    for (int i = 1; i < n; i++) {
        if (ds[i].giaBanThucTe() < ds[vtMin].giaBanThucTe()) {
            vtMin = i;
        }
    }

    cout << "Ten may tinh: "
         << ds[vtMin].getTenHang() << endl;

    cout << "Gia ban thuc te: "
         << ds[vtMin].giaBanThucTe() << endl;


    // Giai phong bo nho
    delete[] ds;

    return 0;
}