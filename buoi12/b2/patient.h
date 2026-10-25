#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "doctor.h"
using namespace std;

class Doctor;
class Patient{
    private:
        string nameP;
        vector<Doctor*> doctor;
        void addDoctor(Doctor *);
    public:
        Patient(string = "");
        ~Patient();
        string getNameP();
        friend ostream &operator<<(ostream &, const Patient &);
        friend class Doctor;
};
