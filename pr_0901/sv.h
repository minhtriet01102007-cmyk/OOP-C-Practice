#pragma once
#include <string>

class SV{
    private:
        std::string maSV;
        std::string hoten;
    public:
        SV();
        SV(std::string maSV, std::string hoten);
        ~SV();
        void nhap();
        void xuat() const;
};
