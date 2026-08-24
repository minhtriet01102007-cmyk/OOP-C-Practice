#pragma once
#include "sach.h"
#include <string>

class Muontra : public Sach{
    private:
        std::string ma_docgia;
        int so_luong;
        static double phi_cuoc;
    public:
        Muontra();
        void nhap();
        void xuat() const;
        double tinh() const;
};