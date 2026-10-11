#pragma once
#include <iostream>
#include "../include/student.h"
#include "../include/lecturer.h"
using namespace std;

class LopSinhHoat{
    private:
        char *tenLop;              
        Student *danhSachSinhVien; 
        Lecturer giaoVienChuNhiem; 
        int siSo;                  
    public:
        LopSinhHoat();
        LopSinhHoat(const char *tenLop, const Lecturer &gvcn, int siSo, const Student *dsSv);
        LopSinhHoat(const LopSinhHoat &l);
        ~LopSinhHoat();

        char *getTenLop() const;
        int getSiSo() const;
        Lecturer getGiaoVienChuNhiem() const;
        Student *getDanhSachSinhVien() const;

        void setTenLop(const char *tenLop);
        void setGiaoVienChuNhiem(const Lecturer &gvcn);
    
        void themSinhVien(const Student &sv);
        void xoaSinhVien(int index);
        
        LopSinhHoat &operator=(const LopSinhHoat &l);
        Student &operator[](int index);
        const Student &operator[](int index) const;
        friend ostream &operator<<(ostream &os, const LopSinhHoat &l);
        friend istream &operator>>(istream &is, LopSinhHoat &l);
};