#pragma once
#include "hanghoa.hpp"
#include <string>
using namespace std;

class Maytinh : public Hanghoa {
private:
    string nhaSanXuat;
    int namSanXuat;
    double giaBanNiemYet;

    static double tyLeKhuyenMai;

public:
    Maytinh();
    Maytinh(string maHang, string tenHang,
            string nhaSanXuat, int namSanXuat,
            double giaBanNiemYet);

    void nhap();
    void xuat() const;
    double giaBanThucTe() const;
    string getNhaSanXuat() const;
    static void setTyLeKhuyenMai(double tyLe);
    static double getTyLeKhuyenMai();
};
