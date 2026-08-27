#pragma once
#include <string>

class Nguoi{
    private:
        std::string hoten;
        std::string diachi;
        std::string sdt;
    public:
        Nguoi();
        Nguoi(std::string hoten, std::string diachi, std::string sdt);
        void nhap();
        void xuat() const;
};