#pragma once
#include <string>

class MONHOC{
    private:
        std::string maMH;
        std::string tenMH;
    public:
        MONHOC();
        MONHOC(std::string maMH, std::string tenMH);
        void nhap();
        void xuat() const;
};
