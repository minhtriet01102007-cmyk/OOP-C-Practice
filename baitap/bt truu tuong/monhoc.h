#pragma once
#include <string>
using namespace std;

class MonHoc{
    private:
        string tenmon;
        double tinchi;
        double diem;
    public:
        void nhap();
        void xuat() const;
        int getTinChi() const;
        double getDiem() const;
};
