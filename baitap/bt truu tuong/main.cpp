#include "sv.h"
#include "svit.h"
#include "svck.h"
#include <iostream>
using namespace std;

int main(){
    SV** p = new SV*[2];
    p[0] = new SVIT();
    p[1] = new SVCK();

    for (int i = 0; i < 2; i++){
        p[i]->show();
    }
    for (int i = 0; i < 2; i++){
        delete p[i];
    }
    delete[] p;
    return 0;
}