#pragma once
#include <string>
using namespace std;

class Hanghoa{
    private:
        string ma_hang;
        string ten_hang;
    public:
        Hanghoa();
        Hanghoa(string ma_hang, string ten_hang);
        void nhap();
        void xuat() const;
};
