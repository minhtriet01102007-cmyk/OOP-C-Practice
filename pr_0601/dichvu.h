#pragma once
#include <string>

class DichVu{
    private:
        std::string maDV;
        std::string tenDV;
        double gia_cuoc;
    public:
        DichVu();
        DichVu(std::string maDV, std::string tenDV, double gia_cuoc);
        void nhap();
        void xuat() const;
        double LayGiacuoc() const;
};

