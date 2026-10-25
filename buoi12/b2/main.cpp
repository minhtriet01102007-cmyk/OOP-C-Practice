#include "patient.h"
#include "doctor.h"

int main(){
    Patient *p1 = new Patient("John");
    Patient *p2 = new Patient("Jane");
    Patient *p3 = new Patient("Jim");
    Doctor *d1 = new Doctor("Dr. Smith");
    Doctor *d2 = new Doctor("Dr. Johnson");
    Doctor *d3 = new Doctor("Dr. Brown");

    d1->addPatient(p1);
    d1->addPatient(p2);
    d2->addPatient(p3);

    cout << *d1 << endl;
    cout << *d2 << endl;
    cout << *d3 << endl;
    cout << *p1 << endl;
    cout << *p2 << endl;
    cout << *p3 << endl;

    delete p1;
    delete p2;
    delete p3;
    delete d1;
    delete d2;

    return 0;
    
}