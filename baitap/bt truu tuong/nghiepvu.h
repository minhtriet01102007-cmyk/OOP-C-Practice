#pragma once
#include "sv.h"

class NghiepVu {
    private:
        SV** ds;
        int n;
        int capacity;
        void tangCapacity();
    public:
        NghiepVu(int capacity = 10);
        ~NghiepVu();
        void them(SV* sv);
        bool xoa(const string& mssv);
        SV* timKiem(const string& mssv) const;
        void sapXepTheoGPA();
        void showDanhSach() const;
        int getSoLuong() const;
};
