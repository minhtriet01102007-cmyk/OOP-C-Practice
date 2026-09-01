#pragma once
#include <string>

class ThiSinh{
    private:
        std::string sbd;
        std::string Hoten;
        std::string dc;
        double diem_ut;
    public:
        ThiSinh();
        ThiSinh(std::string sbd, std::string Hoten, std::string dc, double diem_ut);
        ~ThiSinh();
        void nhap();
        void xuat() const;
};