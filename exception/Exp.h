#pragma once
#include <iostream>
#include <string>
using namespace std;
class Exp{
    protected:
        string msg;
    public:
        Exp(string = "");
        ~Exp();
        friend ostream& operator<<(ostream&, const Exp&);
};