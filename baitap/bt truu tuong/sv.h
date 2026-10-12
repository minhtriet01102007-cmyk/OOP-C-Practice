#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "monhoc.h"
using namespace std;

class SV{
    protected:
        string MSSV;
        string Name;
        double DRL;
        vector<MonHoc> dsMon;
    public:
        SV();
        virtual ~SV();
        virtual double GPA() = 0;
        virtual bool XHB() = 0;
        virtual void nhap();
        virtual void show();
        string getMSSV() const;
        string getName() const;
        double getDRL() const;
        void setName(const string& name);
        void setDRL(double drl);
        void nhapDanhSachMon();
        int tongTinChi() const;
        double tinhGPA() const;
        void showDanhSachMon() const;
        friend istream& operator>>(istream& in, SV& sv);
        friend ostream& operator<<(ostream& out, const SV& sv);
};
