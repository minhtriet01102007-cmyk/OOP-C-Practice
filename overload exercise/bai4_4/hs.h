#pragma once
#include <iostream>
#include <string>
using namespace std;

class HocSinh{
    private:
        string hoten;
        double diemvan;
        double diemtoan;
    public:
        HocSinh();
        HocSinh(string hoten, double diemvan, double diemtoan);
        HocSinh(const HocSinh& hs);
        ~HocSinh();

        double DTB() const;
        bool operator>(const HocSinh& hs);
        bool operator<(const HocSinh& hs);
        bool operator==(const HocSinh& hs);
        bool operator>=(const HocSinh& hs);
        bool operator<=(const HocSinh& hs);
        bool operator!=(const HocSinh& hs);

        HocSinh& operator=(const HocSinh& hs);

        friend istream& operator>>(istream& in, HocSinh& hs);
        friend ostream& operator<<(ostream& o, const HocSinh& hs);
};