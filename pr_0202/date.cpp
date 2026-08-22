#include "date.h"
#include <iostream>

Date::Date() : day(1), month(1), year(1)
{}
Date::Date(int day, int month, int year)
    : day(day), month(month), year(year)
{}
void Date::nhap(){
    std::cout << "Nhap ngay: " << "\n";
    std::cin >> day;
    std::cout << "Nhap thang: " << std::endl;
    std::cin >> month;
    std::cout << "Nhap nam: " << "\n";
    std::cin >> year;
}
void Date::xuat() const{
    std::cout << "Ngay: " << day << "\n";
    std::cout << "Thang: " << month << "\n";
    std::cout << "Nam: " << year << "\n";
}