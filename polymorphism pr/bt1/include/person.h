#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Person{
    protected:
        char *name;
        int age;
        char *address;
        bool gender; // true – nam, false – nữ
    public:
        Person();
        Person(const char *name, int age, const char *address, bool gender);
        Person(const Person &p);
        virtual ~Person();
        char *getName() const;
        int getAge() const;
        char *getAddress() const;
        bool getGender() const;
        void setName(const char *name);
        void setAge(int age);
        void setAddress(const char *address);
        void setGender(bool gender);
        Person &operator=(const Person &p);
        friend ostream &operator<<(ostream &os, const Person &p);
        friend istream &operator>>(istream &is, Person &p);
};