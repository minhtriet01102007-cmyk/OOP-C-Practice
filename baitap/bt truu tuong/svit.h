#pragma once
#include "sv.h"

class SVIT : public SV {
    public:
        double GPA() override;
        bool XHB() override;
        void nhap() override;
        void show() override;
};
