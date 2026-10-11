#pragma once
#include "person.h"
#include <iostream>
using namespace std;

class LopSinhHoat;
class Student : public Person{
    private:
        char *studentID;        
        LopSinhHoat *classInfo; 
        double gpa4;            
    public:
        Student();
        Student(const char *name, int age, const char *address, bool gender, const char *studentID, LopSinhHoat *classInfo, double gpa4);
        Student(const Student &s);
        ~Student();
        char *getStudentID() const;
        LopSinhHoat *getClassInfo() const;
        double getGPA4() const;
        void setStudentID(const char *studentID);
        void setClassInfo(LopSinhHoat *classInfo);
        void setGPA4(double gpa4);
        bool isValidStudentID(const char *id) const;
        bool isValidGPA(double gpa) const;
        Student &operator=(const Student &s);
        friend ostream &operator<<(ostream &os, const Student &s);
        friend istream &operator>>(istream &is, Student &s);
};