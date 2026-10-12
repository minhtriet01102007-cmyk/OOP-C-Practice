#include "svck.h"
#include <iostream>
using namespace std;

SVCK::SVCK(){}
SVCK::~SVCK(){}
double SVCK::GPA(){
    return (diemve + diemchetao) /2;
}
bool SVCK::XHB(){
    if (GPA() > 3.6) return true;
    else return false;
}
void SVCK::show(){
    SV::show();
    cout << "Diem ve: " << diemve << endl;
    cout << "Diem che tao: " << diemchetao << endl;
    cout << "GPA: " << GPA() << endl;
    if (XHB())
        cout << "Duoc hoc bong" << endl;
    else
        cout << "Khong duoc hoc bong" << endl;
}