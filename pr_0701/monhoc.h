#pragma once
#include <string>

class MonHoc{
    private:
        std::string MaMH;
        std::string TenMH;
        double DTB;
        int soTC;
    public:
        MonHoc();
        MonHoc(std::string MaMH, std::string TenMH, double DTB, int soTC);
        ~MonHoc();
        void nhap();
        void xuat() const;
        int getTC() const;
        void setTC(int soTC);
        double getDTB() const;
};
