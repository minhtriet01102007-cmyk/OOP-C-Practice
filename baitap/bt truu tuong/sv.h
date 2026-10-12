#pragma once
#include <string>
#include <iostream>
using namespace std;

class SV{
    protected:
        string MSSV;
        string Name;
    public:
        virtual double GPA() =0;
        virtual bool XHB() =0;
        virtual void show();
};