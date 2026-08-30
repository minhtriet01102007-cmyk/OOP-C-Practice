#pragma once
#include "sv.h"

class SVCNPM : public SV{
    private:
        double dtb;
    public:
        SVCNPM();
        SVCNPM(double dtb);
        ~SVCNPM();
        void nhap();
        void xuat() const;
        double getDTB() const;
};