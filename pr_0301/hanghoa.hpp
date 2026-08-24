#pragma once
#include <string>
using namespace std;

class Hanghoa{
private:
    string maHang;
    string tenHang;
public:
    Hanghoa();
    Hanghoa(string maHang, string tenHang);
    void nhap();
    void xuat() const;
    string getMaHang() const;
    string getTenHang() const;
};

