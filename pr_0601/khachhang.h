#pragma once
#include "nguoi.h"
#include "dichvu.h"

class KhachHang : public Nguoi{
    private:
        int SoLuongDichVu;
        DichVu dv[100];
    public:
        KhachHang();
        KhachHang(int SoLuongDichVu, DichVu dv[100]);
        void Nhap();
        void Xuat() const;
        double TongGiaCuoc() const;
};