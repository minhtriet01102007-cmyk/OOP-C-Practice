#include "monhoc.h"
#include "sv.h"
#include <iostream>
using namespace std;

int main(){
    cout << "===== NHAP THONG TIN MON HOC =====" << endl;
    MonHoc mh;
    mh.nhap();

    cout << "\n===== THONG TIN MON HOC =====" << endl;
    mh.xuat();

    int n;
    cout << "\nNhap so luong sinh vien: ";
    cin >> n;
    cin.ignore();

    SinhVien ds[100];
    for (int i = 0; i < n; i++){
        cout << "NHAP SINH VIEN THU " << i + 1 << endl;
        ds[i].nhap();
    }

    cout << "\n\n===== DANH SACH SINH VIEN =====" << endl;
    for (int i = 0; i < n; i++) {
        cout << "SINH VIEN THU " << i + 1 << endl;
        ds[i].xuat();
        cout << "Diem tong ket: "
             << ds[i].DTK() << endl;
    }

    cout << "\n\n===== DANH SACH SINH VIEN DUOC HOC BONG =====" << endl;
    bool coHocBong = false;
    for (int i = 0; i < n; i++) {
        if (ds[i].DTK() >= 8.5) {
            ds[i].xuat();
            cout << "Diem tong ket: "
                 << ds[i].DTK() << endl;
            coHocBong = true;
        }
    }
    if (!coHocBong) {
        cout << "Khong co sinh vien nao duoc cap hoc bong." << endl;
    }
    return 0;
}