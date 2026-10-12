#include "svit.h"

SVIT::~SVIT(){
}
double SVIT::GPA() const{
    return tinhGPA();
}
bool SVIT::XHB() const{
    return GPA() >= 3.2 && DRL >= 80;
}
