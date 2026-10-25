#include "patient.h"

void Patient::addDoctor(Doctor *doc){
    doctor.push_back(doc);
}
Patient::Patient(string name) : nameP(name){
}
Patient::~Patient(){
}
string Patient::getNameP(){
    return this->nameP;
}
ostream &operator<<(ostream &out, const Patient &pat){
    int number = pat.doctor.size();
    if(number == 0){
        out << pat.nameP << " has no doctors." << endl;
    }
    else{
        out << pat.nameP << " has " << number << " doctors:" << endl;
        for(int i = 0; i < number; i++){
            out << pat.doctor[i]->getNameD() << endl;
        }
    }
    return out;
}