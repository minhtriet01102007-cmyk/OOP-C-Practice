#include "complex.h"
#include <bits/stdc++.h>
using namespace std;

Complex::Complex(double r, double i){
    setComplexNumber(r, i);
}
void Complex::setComplexNumber(double r, double i){
    realPart = r;
    imaginaryPart = i;
}
Complex Complex::addition(const Complex& a){
    return Complex(realPart + a.realPart, imaginaryPart + a.imaginaryPart);
}
Complex Complex::subtraction(const Complex& a){
    return Complex(realPart - a.realPart, imaginaryPart - a.imaginaryPart);
}
void Complex::printComplex(){
    cout << realPart;
    if (imaginaryPart >=0){
        cout << "+" << imaginaryPart << "i" << endl;
    } else{
        cout << "-" << abs(imaginaryPart) << "i" << endl;
    }
}