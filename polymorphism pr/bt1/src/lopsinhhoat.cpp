#include <iostream>
#include <cstring>
#include "../include/lopsinhhoat.h"
using namespace std;

LopSinhHoat::LopSinhHoat(){
    tenLop = new char[1];
    tenLop[0] = '\0';
    danhSachSinhVien = nullptr;
    siSo = 0;
}
LopSinhHoat::LopSinhHoat(const char *tenLop, const Lecturer &gvcn, int siSo, const Student *dsSv){
    if (tenLop){
        this->tenLop = new char[strlen(tenLop) + 1];
        strcpy(this->tenLop, tenLop);
    } else{
        this->tenLop = new char[1];
        this->tenLop[0] = '\0';
    }
    this->giaoVienChuNhiem = gvcn;
    this->siSo = (siSo > 0) ? siSo : 0;
    if (this->siSo > 0 && dsSv){
        danhSachSinhVien = new Student[this->siSo];
        for (int i = 0; i < this->siSo; i++) {
            danhSachSinhVien[i] = dsSv[i];
        }
    } else{
        danhSachSinhVien = nullptr;
        this->siSo = 0;
    }
}
LopSinhHoat::LopSinhHoat(const LopSinhHoat &l){
    if (l.tenLop){
        tenLop = new char[strlen(l.tenLop) + 1];
        strcpy(tenLop, l.tenLop);
    } else{
        tenLop = new char[1];
        tenLop[0] = '\0';
    }
    giaoVienChuNhiem = l.giaoVienChuNhiem;
    siSo = l.siSo;
    if (siSo > 0 && l.danhSachSinhVien){
        danhSachSinhVien = new Student[siSo];
        for (int i = 0; i < siSo; i++){
            danhSachSinhVien[i] = l.danhSachSinhVien[i];
        }
    } else{
        danhSachSinhVien = nullptr;
    }
}
LopSinhHoat::~LopSinhHoat(){
    delete[] tenLop;
    delete[] danhSachSinhVien;
}
char *LopSinhHoat::getTenLop() const { return tenLop; }
int LopSinhHoat::getSiSo() const { return siSo; }
Lecturer LopSinhHoat::getGiaoVienChuNhiem() const { return giaoVienChuNhiem; }
Student *LopSinhHoat::getDanhSachSinhVien() const { return danhSachSinhVien; }
void LopSinhHoat::setTenLop(const char *tenLop){
    delete[] this->tenLop;
    if (tenLop) {
        this->tenLop = new char[strlen(tenLop) + 1];
        strcpy(this->tenLop, tenLop);
    } else {
        this->tenLop = new char[1];
        this->tenLop[0] = '\0';
    }
}
void LopSinhHoat::setGiaoVienChuNhiem(const Lecturer &gvcn){
    giaoVienChuNhiem = gvcn;
}
void LopSinhHoat::themSinhVien(const Student &sv){
    Student *newDanhSach = new Student[siSo + 1];
    for (int i = 0; i < siSo; i++) {
        newDanhSach[i] = danhSachSinhVien[i];
    }
    newDanhSach[siSo] = sv; // Gắn sinh viên mới vào cuối

    delete[] danhSachSinhVien;
    danhSachSinhVien = newDanhSach;
    siSo++;
}
void LopSinhHoat::xoaSinhVien(int index){
    if (index < 0 || index >= siSo || siSo == 0) return;
    if (siSo == 1) {
        delete[] danhSachSinhVien;
        danhSachSinhVien = nullptr;
        siSo = 0;
        return;
    }
    Student *newDanhSach = new Student[siSo - 1];
    int k = 0;
    for (int i = 0; i < siSo; i++) {
        if (i == index) continue;
        newDanhSach[k++] = danhSachSinhVien[i];
    }

    delete[] danhSachSinhVien;
    danhSachSinhVien = newDanhSach;
    siSo--;
}
LopSinhHoat &LopSinhHoat::operator=(const LopSinhHoat &l) {
    if (this != &l) {
        delete[] tenLop;
        delete[] danhSachSinhVien;

        if (l.tenLop) {
            tenLop = new char[strlen(l.tenLop) + 1];
            strcpy(tenLop, l.tenLop);
        } else {
            tenLop = new char[1];
            tenLop[0] = '\0';
        }

        giaoVienChuNhiem = l.giaoVienChuNhiem;
        siSo = l.siSo;

        if (siSo > 0 && l.danhSachSinhVien) {
            danhSachSinhVien = new Student[siSo];
            for (int i = 0; i < siSo; i++) {
                danhSachSinhVien[i] = l.danhSachSinhVien[i];
            }
        } else {
            danhSachSinhVien = nullptr;
        }
    }
    return *this;
}
Student &LopSinhHoat::operator[](int index) {
    return danhSachSinhVien[index];
}

const Student &LopSinhHoat::operator[](int index) const {
    return danhSachSinhVien[index];
}
ostream &operator<<(ostream &os, const LopSinhHoat &l) {
    os << "----------------------------------------\n";
    os << "Ten Lop: " << (l.tenLop ? l.tenLop : "") << "\n";
    os << "Si So: " << l.siSo << "\n";
    os << "Giao Vien Chu Nhiem:\n  " << l.giaoVienChuNhiem << "\n";
    os << "Danh sach sinh vien:\n";
    if (l.siSo == 0 || !l.danhSachSinhVien) {
        os << "  (Chua co sinh vien nao)\n";
    } else {
        for (int i = 0; i < l.siSo; i++) {
            os << "  [" << i + 1 << "] " << l.danhSachSinhVien[i] << "\n";
        }
    }
    os << "----------------------------------------";
    return os;
} 
istream &operator>>(istream &is, LopSinhHoat &l) {
    char temp[256];
    cout << "Nhap ten lop sinh hoat: ";
    is >> temp;
    l.setTenLop(temp);

    cout << "--- Nhap thong tin Giao vien chu nhiem ---\n";
    is >> l.giaoVienChuNhiem;

    cout << "Nhap so luong sinh vien ban dau: ";
    int n;
    is >> n;

    delete[] l.danhSachSinhVien;
    l.siSo = 0;
    l.danhSachSinhVien = nullptr;

    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << ":\n";
        Student sv;
        is >> sv;
        l.themSinhVien(sv);
    }
    return is;
}