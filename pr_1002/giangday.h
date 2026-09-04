#pragma once
#include "monhoc.h"
#include <string>

class GIANGDAY : public MONHOC{
    private:
        std::string magv;
        std::string malop;
        int soTC;
        static int sotiet;
    public:
        GIANGDAY();
        GIANGDAY(std::string magv, std::string malop, int soTC);
        void nhap();
        void xuat() const;
        double tinhtiet() const;
        int getTC() const;
        std::string getMaGV() const;
};