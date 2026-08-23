#pragma once
#include "hanghoa.hpp"
#include <string>
using namespace std;

class Maytinh : public Hanghoa{
    private:
        string nha_sx;
        int nam_sx;
        double gia_banny;
        static double tyle_km;
    public:
        Maytinh();
        Maytinh(string ma_hang, string ten_hang, string nha_sx, int nam_sx, double gia_banny);
        void tao_thongtin();
        void nhap();
        void xuat() const;
        void tinhGB_real() const;
        void getGB_real() const;
};