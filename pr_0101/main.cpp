#include "complex.h"
#include <bits/stdc++.h>
using namespace std;

int main(){
    Complex c1(2,3);
    Complex c2(7,1);

    Complex tong = c1.addition(c2);
    tong.printComplex();

    Complex hieu = c1.subtraction(c2);
    hieu.printComplex();
return 0;
}