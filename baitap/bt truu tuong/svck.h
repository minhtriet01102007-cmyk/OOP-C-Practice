#pragma once
#include "sv.h"
#include <iostream>
using namespace std;

class SVCK : public SV{
    private:
        double diemve;
        double diemchetao;
    public:
        SVCK();
        ~SVCK();
        double GPA() override;
        bool XHB() override;
        void show() override;
};