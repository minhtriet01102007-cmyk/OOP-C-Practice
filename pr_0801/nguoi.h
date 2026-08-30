#pragma once
#include <string>

class Nguoi{
private:
    std::string hoten;
    std::string gioitinh;
    int namsinh;

public:
    Nguoi();
    Nguoi(std::string hoten, std::string gioitinh, int namsinh);
    ~Nguoi();
    void nhap();
    void xuat() const;
    int tinhtuoi() const;
};