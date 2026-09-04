#pragma once
#include "lophoc.h"
#include <string>

class GiangDay : public LopHoc{
    private:
        std::string magv;
        std::string mamh;
        int soTC;
        static int sotietdagiangday;
    public:
        GiangDay();
        GiangDay(std::string magv, std::string mamh, int soTC);
        void nhap();
        void xuat() const;
        int tinhsotietconlai() const;
        std::string getMagv() const;
        int getTC() const;
};