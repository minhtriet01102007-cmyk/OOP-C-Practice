#pragma once
#include <string>

class NhanVien{
    private:
        std::string manv;
        std::string hoten;
        int tuoi;
    public:
        NhanVien();
        NhanVien(std::string manv, std::string hoten, int tuoi);
        void Nhap();
        void Xuat() const;
        bool VeHuu() const;
};
