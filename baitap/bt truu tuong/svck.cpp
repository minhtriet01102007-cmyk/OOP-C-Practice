#include "svck.h"

SVCK::~SVCK(){
}
double SVCK::GPA() const{
    return tinhGPA();
}
bool SVCK::XHB() const{
    return GPA() >= 3.0 && DRL >= 85;
}
