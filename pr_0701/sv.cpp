#include "monhoc.h"
#include "sv.h"
#include <iostream>
#include <string>
using namespace std;

SinhVien::SinhVien() : maSV(""), tenSV(""), soMH(0)
{}
SinhVien::SinhVien(string maSV, string tenSV, int soMH, MonHoc arr[100])
    : maSV(maSV), tenSV(tenSV), soMH(soMH)
{
    for (int i = 0; i < soMH; i++){
        this->arr[i] = arr[i];
    }
}
SinhVien::~SinhVien()
{}
void SinhVien::nhap(){
    cout << "Nhap ma sinh vien: ";
    getline(cin, maSV);
    cout << "Nhap ten sinh vien: ";
    getline(cin, tenSV);
    cout << "Nhap so mon hoc: ";
    cin >> soMH;
    cin.ignore();
    for (int i = 0; i < soMH; i++){
        cout << "\n=== NHAP MON HOC THU " << i + 1 << " ===\n";
        arr[i].nhap();
    }
}
void SinhVien::xuat() const{
    cout << "Ma sinh vien: " << maSV << endl;
    cout << "Ten sinh vien: " << tenSV << endl;
    cout << "So mon hoc: " << soMH << endl;
    for (int i = 0; i < soMH; i++){
        cout << "\n--- Mon hoc thu " << i + 1 << " ---\n";
        arr[i].xuat();
    }
}
double SinhVien::DTK() const{
    double tongDiem = 0;
    int tongTinChi = 0;
    for (int i = 0; i < soMH; i++){
        tongDiem += arr[i].getDTB() * arr[i].getTC();
        tongTinChi += arr[i].getTC();
    }
    if (tongTinChi == 0){
        return 0;
    }
    return tongDiem / tongTinChi;
}