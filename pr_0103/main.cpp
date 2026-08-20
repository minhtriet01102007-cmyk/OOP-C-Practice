#include <iostream>
#include <vector>
#include <algorithm>
#include "giaothong.h"
#include "oto.h"
using namespace std;

int main(){
    cout << "========== NHAP PHUONG TIEN GIAO THONG ==========\n";
    PhuongTienGiaoThong pt;
    pt.nhap();
    cout << "\n========== THONG TIN PHUONG TIEN ==========\n";
    pt.xuat();
    int n;
    cout << "\nNhap so luong Oto: ";
    cin >> n;
    vector<OTo> dsOTo(n);
    for (int i = 0; i < n; i++){
        cout << "\n========== NHAP OTO " << i + 1 << " ==========\n";
        dsOTo[i].nhap();
    }
    cout << "\n\n========== DANH SACH OTO ==========\n";
    for (int i = 0; i < n; i++){
        cout << "\n----- OTO " << i + 1 << " -----\n";
        dsOTo[i].xuat();
    }
    sort(dsOTo.begin(), dsOTo.end(),
        [](const OTo& a, const OTo& b){
            return b < a;
        });
    cout << "\n\n========== DANH SACH SAU KHI SAP XEP ==========\n";
    for (int i = 0; i < n; i++) {
        cout << "\n----- OTO " << i + 1 << " -----\n";
        dsOTo[i].xuat();
    }
    return 0;
}