#pragma once
#include "thisinh.h"

class ThiSinhKhoiA : public ThiSinh{
    private:
        double toan;
        double ly;
        double hoa;
    public:
        ThiSinhKhoiA();
        ThiSinhKhoiA(double toan, double ly, double hoa);
        ~ThiSinhKhoiA();
        void nhap();
        void xuat() const;
        double getToan() const;
        double getLy() const;
        double getHoa() const;
        double tinhtong() const;
        bool operator>(const ThiSinhKhoiA& other) const;
};