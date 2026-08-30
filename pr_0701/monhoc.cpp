#include "monhoc.h"
#include <iostream>
#include <iomanip>
using namespace std;

MonHoc::MonHoc(){
    MaMH = "";
    TenMH = "";
    DTB = 0;
    soTC = 0;
}
MonHoc::MonHoc(string MaMH, string TenMH, double DTB, int soTC){
    this->MaMH = MaMH;
    this->TenMH = TenMH;
    this->DTB = DTB;
    this->soTC = soTC;
}
MonHoc::~MonHoc(){}
void MonHoc::nhap(){
    cout << "Nhap ma mon hoc: ";
    getline(cin, MaMH);
    cout << "Nhap ten mon hoc: ";
    getline(cin, TenMH);
    cout << "Nhap diem trung binh: ";
    cin >> DTB;
    cout << "Nhap so tin chi: ";
    cin >> soTC;
    cin.ignore();
}
void MonHoc::xuat() const{
    cout << "Ma mon hoc: " << MaMH << endl;
    cout << "Ten mon hoc: " << TenMH << endl;
    cout << "Diem trung binh: " << fixed << setprecision(2) << DTB << endl;
    cout << "So tin chi: " << soTC << endl;
}
int MonHoc::getTC() const{
    return soTC;
}
void MonHoc::setTC(int soTC){
    this->soTC = soTC;
}
double MonHoc::getDTB() const{
    return DTB; 
}
