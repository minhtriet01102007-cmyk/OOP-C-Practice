#include "date.h"
#include <iostream>
using namespace std;

Date::Date(int d, int m, int y) : day(d), month(m), year(y){}
Date::Date(const Date& date) : day(date.day), month(date.month), year(date.year){}
Date::~Date(){}
int Date::getDay() const{ 
    return this->day; 
}
int Date::getMonth() const{ 
    return this->month; 
}
int Date::getYear() const{ 
    return this->year; 
}
void Date::setDay(int d){ 
    this->day = d; 
}
void Date::setMonth(int m){ 
    this->month = m; 
}
void Date::setYear(int y){ 
    this->year = y; 
}
Date& Date::operator++(){
    this->day++;
    if(this->month == 1 || this->month == 3 || this->month == 5 || this->month == 7 || this->month == 8 || this->month == 10 || this->month == 12){
        if(this->day > 31){
            this->day = 1;
            this->month++;
            if(this->month > 12){  
                this->month = 1;
                this->year++;
            }
        }
    }else if(this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11){
        if(this->day > 30){
            this->day = 1;
            this->month++;
        }
    }else if(this->month == 2){
        if((this->year % 4 == 0 && this->year % 100 != 0) || this->year % 400 == 0){
            if(this->day > 29){
                this->day = 1;
                this->month++;
            }
        } else{
            if(this->day > 28){
                this->day = 1;
                this->month++;
            }
        }
    }
    return *this;
}
const Date Date::operator++(int){ 
    Date temp = *this;
    ++(*this);
    return temp;
}
Date& Date::operator--(){ 
    this->day--;
    if(this->month == 1 || this->month == 3 || this->month == 5 || this->month == 7 || this->month == 8 || this->month == 10 || this->month == 12){
        if(this->day < 1){
            this->day = 31;
            this->month--;
            if(this->month < 1){
                this->month = 12;
                this->year--;
            }
        }
    }else if(this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11){
        if(this->day < 1){
            this->day = 30;
            this->month--;
        }
    }else if(this->month == 2){
        if((this->year % 4 == 0 && this->year % 100 != 0) || this->year % 400 == 0){   
            if(this->day < 1){
                this->day = 29; 
                this->month--;
            }
        }else{
            if(this->day < 1){
                this->day = 28;
                this->month--;
            }
        }
    }
    return *this;
}
const Date Date::operator--(int){ 
    Date temp = *this;
    --(*this);
    return temp;
}
Date& Date::operator+=(int days){ 
    if (days < 0){
        return *this -= -days;
    }
    this->day += days;  
    while (true){
        if (this->month == 1 || this->month == 3 || this->month == 5 || 
            this->month == 7 || this->month == 8 || this->month == 10){
            if (this->day > 31){
                this->day -= 31;
                this->month++;
            } else break;  
        } else if (this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11){
            if (this->day > 30){
                this->day -= 30;
                this->month++;
            } else break;  
        } else if (this->month == 2){
            if ((this->year % 4 == 0 && this->year % 100 != 0) || this->year % 400 == 0){
                if (this->day > 29){
                    this->day -= 29;
                    this->month++;
                } else break;  
            } else {
                if (this->day > 28){
                    this->day -= 28;
                    this->month++;
                } else break;  
            }
        }
        if (this->month > 12){
            this->month = 1;
            this->year++;
        }
    }
    return *this;
}
Date& Date::operator-=(int days){ 
    if (days < 0){
        return *this += -days;
    }
    this->day -= days;  
    while (true){
        if (this->month == 1 || this->month == 3 || this->month == 5 || 
            this->month == 7 || this->month == 8 || this->month == 10){
            if (this->day < 1){
                this->day += 31;
                this->month--;
            } else break;  
        } else if (this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11){
            if (this->day < 1){
                this->day += 30;
                this->month--;
            } else break;  
        } else if (this->month == 2){
            if ((this->year % 4 == 0 && this->year % 100 != 0) || this->year % 400 == 0){
                if (this->day < 1){
                    this->day += 29;
                    this->month--;
                } else break;  
            } else {
                if (this->day < 1){
                    this->day += 28;
                    this->month--;
                } else break;  
            }
        }
        if (this->month < 1){
            this->month = 12;
            this->year--;
        }
    }
    return *this;
}
bool Date::operator==(const Date& date) const{
    return (this->day == date.day && this->month == date.month && this->year == date.year);
}
bool Date::operator!=(const Date& date) const{
    return (this->day != date.day || this->month != date.month || this->year != date.year);
}
bool Date::operator<=(const Date& date) const{
    if(this->year < date.year){
        return true;
    } else if(this->year == date.year){
        if(this->month < date.month) {
            return true;
        } else if(this->month == date.month){
            if(this->day <= date.day) {
                return true;
            }
        }
    }
    return false;
}
bool Date::operator>=(const Date& date) const{
    if(this->year > date.year){
        return true;
    } else if(this->year == date.year){
        if(this->month > date.month) {
            return true;
        } else if(this->month == date.month){
            if(this->day >= date.day) {
                return true;
            }
        }
    }
    return false;
}
istream& operator>>(istream& in, Date& date){
    char separator; 
    in >> date.day >> separator >> date.month >> separator >> date.year;
    return in;
}
ostream& operator<<(ostream& out, const Date& date){ 
    string day = to_string(date.day);
    string month = to_string(date.month);
    string year = to_string(date.year);
    if(day.length() == 1){
        day = "0" + day;
    }
    if(month.length() == 1){
        month = "0" + month;
    }
    out << day << "/" << month << "/" << year;
    return out;
}