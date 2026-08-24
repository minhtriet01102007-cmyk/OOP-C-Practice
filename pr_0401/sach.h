#pragma once
#include <string>

class Sach{
    private:
        std::string ma_sach;
        std::string ten_sach;
    public:
        Sach();
        Sach(std::string ma_sach, std::string ten_sach);
        void nhap();
        void xuat() const;
};
