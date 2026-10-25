#include "doctor.h"

Doctor::Doctor(string name) : nameD(name){
}
Doctor::~Doctor(){
}
void Doctor::addPatient(Patient *pat){
    this->patient.push_back(pat);
    pat->addDoctor(this);
}
string Doctor::getNameD(){
    return this->nameD;
}
ostream &operator<<(ostream &out, const Doctor &doc){
    int number = doc.patient.size();
    if(number == 0){
        out << doc.nameD << " has no patients." << endl;
    }
    else{
        out << doc.nameD << " has " << number << " patients:" << endl;
        for(int i = 0; i < number; i++){
            out << doc.patient[i]->getNameP() << endl;
        }
    }
    return out;
}