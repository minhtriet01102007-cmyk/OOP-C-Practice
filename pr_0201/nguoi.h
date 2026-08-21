#ifndef NGUOI_H
#define NGUOI_H
#include <string>

class Nguoi{
    private:
        std::string ma_dinh_danh;
        std::string ho_ten;
    public:
        Nguoi();
        Nguoi(std::string ma_dinh_danh, std::string ho_ten);
        void nhap();
        void xuat() const;
};
#endif
