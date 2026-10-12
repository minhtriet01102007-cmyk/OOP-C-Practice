#pragma once
#include "sv.h"

class SVIT : public SV{
    private:
        double diemtoan;
        double diemtin;
        double DRL;
    public:
        SVIT();
        ~SVIT();
        double GPA() override;
        bool XHB() override;
        void show() override;  
};