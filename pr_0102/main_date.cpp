#include "date.h"
#include <iostream>
using namespace std;

int main(){
    Date d(20,3,2003);
    for (int i=0; i<40; i++){
        d.print();
        d.nextDay();
    }
    return 0;
}