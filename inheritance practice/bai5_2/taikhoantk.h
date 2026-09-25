#pragma once
#include "taikhoan.h"

class TaiKhoanTietKiem : public TaiKhoan{
    private:
        int kyHan;
        float laiSuat;
        int soThangDaGui;
    public:
        TaiKhoanTietKiem(int kyHan = 0, float laiSuat = 0, int soThangDaGui = 0);
        void napTien(float fSoTien);
        void rutTien(float fSoTien);
        void tangThang();
        float tinhSoDu();
};