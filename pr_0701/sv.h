#pragma once
#include "monhoc.h"
#include <string>
using namespace std;

class SinhVien{
    private:
        string maSV;
        string tenSV;
        int soMH;
        MonHoc arr[100];
    public:
        SinhVien();
        SinhVien(string maSV, string tenSV, int soMH, MonHoc arr[100]);
        ~SinhVien();
        void nhap();
        void xuat() const;
        double DTK() const;
};