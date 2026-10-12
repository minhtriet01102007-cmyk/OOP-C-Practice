#include "nghiepvu.h"
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

NghiepVu::NghiepVu(int capacity){
    this->capacity = (capacity > 0) ? capacity : 10;
    n = 0;
    ds = new SV*[this->capacity];
}
NghiepVu::~NghiepVu(){
    for (int i = 0; i < n; i++){
        delete ds[i];
    }
    delete[] ds;
}
void NghiepVu::tangCapacity(){
    capacity *= 2;
    SV** temp = new SV*[capacity];
    for (int i = 0; i < n; i++){
        temp[i] = ds[i];
    }
    delete[] ds;
    ds = temp;
}
void NghiepVu::them(SV* sv){
    if (sv == nullptr){
        return;
    }
    if (n == capacity){
        tangCapacity();
    }
    ds[n++] = sv;
}

bool NghiepVu::xoa(const string& mssv){
    for (int i = 0; i < n; i++){
        if (ds[i]->getMSSV() == mssv){
            delete ds[i];
            for (int j = i; j < n - 1; j++){
                ds[j] = ds[j + 1];
            }
            n--;
            return true;
        }
    }
    return false;
}
SV* NghiepVu::timKiem(const string& mssv) const{
    for (int i = 0; i < n; i++){
        if (ds[i]->getMSSV() == mssv){
            return ds[i];
        }
    }
    return nullptr;
}
void NghiepVu::sapXepTheoGPA(){
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (ds[i]->GPA() < ds[j]->GPA()){
                SV* temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}
void NghiepVu::showDanhSach() const{
    if (n == 0){
        cout << "Danh sach sinh vien rong" << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        cout << "\n===== Sinh vien thu " << i + 1 << " =====\n";
        cout << *ds[i];
    }
}
int NghiepVu::getSoLuong() const {
    return n;
}
