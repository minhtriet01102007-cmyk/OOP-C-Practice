#include "date.h"
#include <iostream>
using namespace std;

Date::Date(int d, int m, int y){
    day = d;
    month = m;
    year = y;
}
int Date::getDay(){
    return day;
}
int Date::getMonth(){
    return month;
}
int Date::getYear(){
    return year;
}
void Date::setDay(int d){
    day = d;
}
void Date::setMonth(int m){
    month = m;
}
void Date::setYear(int y){
    year = y;
}
bool Date::isLeapYear(int y){
    if (y % 4 == 0 && y % 100 !=0)
        return true;
    else if (y % 400 == 0)
        return true;
    else return false;
}
int Date::monthDays(){
    switch (month){
    case 1:
        return 31;
        break;
    case 2:
        if (isLeapYear(year))
            return 29;
        else return 28;
        break;
    case 3:
        return 31;
        break;
    case 4: 
        return 30;
        break;
    case 5:
        return 31;
        break;
    case 6:
        return 30;
        break;
    case 7:
        return 31;
        break;
    case 8:
        return 31;
        break;
    case 9:
        return 30;
        break;
    case 10:
        return 31;
        break;
    case 11:
        return 30;
        break;
    case 12:
        return 31;
        break;
    default:
        return 0;
    }
}
void Date::print(){
    cout << day << " - " << month << " - " << year << endl;
}
void Date::nextDay(){
    day++;
    if (day > monthDays()){
        day = 1;
        month++;
        if (month > 12){
            month = 1;
            year++;
        }
    }
}
