#include <iostream>
#include "phanso.h"
using namespace std;

int main(){
    PhanSo a(1, 2);
    PhanSo b(2, 3);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    return 0;
}