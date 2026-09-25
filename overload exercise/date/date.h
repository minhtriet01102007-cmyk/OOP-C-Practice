#pragma once
#include <iostream>
using namespace std;

class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date(int d=0, int m=0, int y=0);
        Date(const Date&);
        ~Date();

        int getDay() const;
        int getMonth() const;
        int getYear() const;

        void setDay(int);
        void setMonth(int);
        void setYear(int);

        Date& operator++(); // ++d
        const Date operator++(int); // d++
        Date& operator--(); // --d 
        const Date operator--(int); // d--
        Date& operator+=(int);
        Date& operator-=(int);

        bool operator==(const Date&) const;
        bool operator!=(const Date&) const;
        bool operator<=(const Date&) const;
        bool operator>=(const Date&) const;

        friend istream& operator>>(istream&, Date&);
        friend ostream& operator<<(ostream&, const Date&);
};  