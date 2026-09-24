#include <iostream>
#include "sophuc.h"
using namespace std;

int main(){
    SoPhuc a(2, 3);
    SoPhuc b(4, 5);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;

    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;

    ++a;
    cout << "++a = " << a << endl;

    --a;
    cout << "--a = " << a << endl;
    return 0;
}