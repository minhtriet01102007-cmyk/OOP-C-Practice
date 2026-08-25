#pragma once
class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date();
        Date(int day, int month, int year);
        void nhap();
        void xuat() const;
};
