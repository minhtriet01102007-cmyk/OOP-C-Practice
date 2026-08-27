#pragma once
#include "nhanvien.h"
#include <string>

class CanBo : public NhanVien{
    private:
        double hesoluong;
        double phucap;
        std::string level;
    public:
        void Nhap();
        void Xuat() const;
        double TinhLuong() const;
};