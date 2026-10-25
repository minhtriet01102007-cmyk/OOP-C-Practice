#pragma once
#include "patient.h"
#include <string>
#include <vector>
using namespace std;

class Patient;
class Doctor{
    private:
        string nameD;
        vector<Patient*> patient;
    public:
        Doctor(string = NULL);
        ~Doctor();
        void addPatient(Patient *);
        string getNameD();
        friend ostream &operator<<(ostream &, const Doctor &);
};
