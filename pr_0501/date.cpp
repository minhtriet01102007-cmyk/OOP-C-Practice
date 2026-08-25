#include "date.h"
#include <iostream>
using namespace std;

Date::Date() : day(1), month(1), year(1)
{}
Date::Date(int day, int month, int year): day(day), month(month), year(year)
{}
void Date::nhap() {
    cout << "Nhap ngay: ";
    cin >> day;
    cout << "Nhap thang: ";
    cin >> month;
    cout << "Nhap nam: ";
    cin >> year;
    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1){
        cout << "Ngay thang nam khong hop le!" << endl;
        return;
    }
    cout << endl;
}
void Date::xuat() const{
    cout << "Ngay - Thang - Nam: " << day << " - " << month << " - " << year << endl;
}
