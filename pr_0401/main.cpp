#include "sach.h"
#include "muontra.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "=== NHAP THONG TIN CUA 1 CUON SACH ===" << endl;
    Sach s;
    s.nhap();
    cout << endl;

    cout << "=== THONG TIN CUA CUON SACH ===" << endl;
    s.xuat();
    cout << endl;

    int n;
    cout << "=== NHAP THONG TIN DOI TUONG MUON TRA ===" << endl;
    cout << "Nhap so luong: ";
    cin >> n;

    Muontra* ds = new Muontra[n];
    for(int i = 0; i < n; i++){
        cout << "\n--- DOI TUONG MUON TRA: " << i + 1 << " ---" << endl;
        ds[i].nhap();
    }
    cout << endl;

    cout << "==== THONG TIN CAC DOI TUONG MUON TRA ====" << endl;
    for(int i = 0; i < n; i++){
        cout << "\n--- DOI TUONG " << i + 1 << " ---" << endl;
        ds[i].xuat();
        cout << "Tien cuoc: " << ds[i].tinh() << endl;
    }

    double max_tien = ds[0].tinh();
    for(int i = 1; i < n; i++){
        if(ds[i].tinh() > max_tien){
            max_tien = ds[i].tinh();
        }
    }
    cout << endl;

    cout << "==== DOI TUONG CO TIEN CUOC LON NHAT ====" << endl;
    for(int i = 0; i < n; i++){
        if(ds[i].tinh() == max_tien){
            ds[i].xuat();
            cout << "Tien cuoc lon nhat: " << ds[i].tinh() << endl;
        }
    }
    delete[] ds;
    return 0;
}