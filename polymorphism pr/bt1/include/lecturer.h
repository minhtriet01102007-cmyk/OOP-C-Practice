#pragma once
#include "../include/person.h"
#include <iostream>
using namespace std;

class Lecturer : public Person{
    private:
        char *maLecturer; 
        char *capBac;     
    public:
        Lecturer();
        Lecturer(const char *name, int age, const char *address, bool gender, const char *capBac);
        Lecturer(const Lecturer &l);
        ~Lecturer();
        char *getMaLecturer() const;
        char *getCapBac() const;
        void setCapBac(const char *capBac);
        void generateMaLecturer(); 
        Lecturer &operator=(const Lecturer &l);
        friend ostream &operator<<(ostream &os, const Lecturer &l);
        friend istream &operator>>(istream &is, Lecturer &l);
};