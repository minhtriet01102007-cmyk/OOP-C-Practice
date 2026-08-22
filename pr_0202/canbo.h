#pragma one
#include <date.h>
#include <string>

class CanBo: public Date{
    private:
        std::string ma_canbo;
        std::string ten_canbo;
        double luong_basic;
        static double tien_phu_cap;
    public:
        CanBo();
        CanBo(int day, int month, int year, std::string ma_canbo, 
              std::string ten_canbo, int luong_basic);
        void taoThongtin();
        void nhap();
        void xuat() const;
        double tinhLuong() const;
        double getLuong() const;
};