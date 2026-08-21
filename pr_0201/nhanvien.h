#include "nguoi.h"
#include <string>

class Employees:public Nguoi{
    private:
        int nam_sinh;
        double he_so_luong;
        static double tien_phu_cap;
    public:
        Employees();
        Employees(std::string ma_dinh_danh, std::string ho_ten, 
                  int nam_sinh, double he_so_luong);
        void taoThongtin(); 
        void nhap();
        void xuat() const;
        double tinhluong() const;
        double getLuong() const;
};