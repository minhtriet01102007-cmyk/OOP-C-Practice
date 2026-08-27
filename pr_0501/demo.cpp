#include "date.h"
#include "muontra.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "===Nhap thong tin cua ngay-thang-nam===" << endl;
    Date A;
    A.nhap();

    cout << "===Ngay-thang-nam==" << endl;
    A.xuat();

    int n;
    cout << "===Nhap thong tin doi tuong muon tra===" << endl;
    cout << "Nhap so luong: ";
    cin >> n;

    Muontra* ds = new Muontra[n];
    for (int i=0; i<n; i++){
        ds[i].nhap();
    }
    cout << endl;

    cout << "===Thong tin doi tuong muon tra===" << endl;
    for (int i=0; i<n; i++){
        ds[i].xuat();   
        cout << "Tien cuoc: " << ds[i].tinh() << endl; 
    }
    cout << endl;

    cout << "===Danh sach doc gia muon truoc ngay 1/1/2020===" << endl;
    bool coDocGia = false;
    for (int i = 0; i < n; i++) {
        if (ds[i].getNam() < 2020) {
            ds[i].xuat();
            cout << "Tien cuoc: " << ds[i].tinh() << endl;
            coDocGia = true;
        }
    }
    if (!coDocGia){
        cout << "Khong co doc gia nao!" << endl;
    }
    cout << endl;
    cout << "===Ma doc gia co tien cuoc nhieu nhat===" << endl;
    if (n > 0) {
        double max_tien = ds[0].tinh();
        for (int i = 1; i < n; i++) {
            if (ds[i].tinh() > max_tien) {
                max_tien = ds[i].tinh();
            }
        }
        for (int i = 0; i < n; i++) {
            if (ds[i].tinh() == max_tien) {
                cout << ds[i].getMaDG() << endl; 
            }
        }
    }
    cout << endl;
    delete[] ds;
    return 0;
}