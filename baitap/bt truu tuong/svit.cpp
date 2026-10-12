#include "svit.h"
#include <iostream>
using namespace std;

SVIT::SVIT(){}
SVIT::~SVIT(){}
double SVIT::GPA(){
    return (diemtoan + diemtin)/2;
}
bool SVIT::XHB(){
    if (GPA() > 3.2) return true;
    else return false;
}
void SVIT::show(){
    SV::show();
    cout << "Diem toan: " << diemtoan << endl;
    cout << "Diem tin: " << diemtin << endl;
    cout << "GPA: " << GPA() << endl;
    if (XHB())
        cout << "Duoc hoc bong" << endl;
    else
        cout << "Khong duoc hoc bong" << endl;
}