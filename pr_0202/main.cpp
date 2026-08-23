#include "date.h"
#include "canbo.h"
#include <iostream>
using namespace std;

int main(){
    cout << "===== NHAP NGAY THANG NAM =====" << endl;
    Date date;
    date.nhap();
    cout << "\n===== NGAY THANG NAM VUA NHAP =====" << endl;
    date.xuat();

    int n;
    cout << "\n===== NHAP THONG TIN CAN BO =====" << endl;
    cout << "Nhap so luong can bo: ";
    cin >> n;
    CanBo *ds = new CanBo[n];
    for (int i = 0; i < n; i++){
        cout << "\n--- CAN BO " << i + 1 << " ---" << endl;
        ds[i].nhap();
    }
    cout << "\n===== DANH SACH CAN BO =====" << endl;
    for (int i = 0; i < n; i++){
        cout << "\n--- CAN BO " << i + 1 << " ---" << endl;
        ds[i].xuat();
    }
    cout << "\n===== LUONG CUA CAC CAN BO =====" << endl;
    for (int i = 0; i < n; i++){
        cout << "Can bo " << i + 1
             << ": " << ds[i].getLuong() << endl;
    }
    double minLuong = ds[0].getLuong();
    for (int i = 1; i < n; i++){
        if (ds[i].getLuong() < minLuong){
            minLuong = ds[i].getLuong();
        }
    }
    cout << "\n===== CAN BO CO LUONG THAP NHAT =====" << endl;
    cout << "Luong thap nhat: " << minLuong << endl;
    for (int i = 0; i < n; i++){
        if (ds[i].getLuong() == minLuong){
            ds[i].xuat();
            cout << endl;
        }
    }
    delete[] ds;
    return 0;
}