#pragma once
#include "nguoi.h"
#include <string>

class NhanVien : public Nguoi{
    private:
        double HSThamNien;
        double MucLuong;
        double AnCa;
    public:
        NhanVien();
        NhanVien(double HSThamNien, double MucLuong, double AnCa);
        ~NhanVien();
        void nhap();
        void xuat() const;
        bool NghiHuu() const;
        double TinhLuong() const;
};
