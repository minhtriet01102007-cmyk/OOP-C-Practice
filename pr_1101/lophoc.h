#pragma once
#include <string>

class LopHoc{
    private:
        std::string malop;
        std::string tenlop;
    public:
        LopHoc();
        LopHoc(std::string malop, std::string tenlop);
        void nhap();
        void xuat() const;
};