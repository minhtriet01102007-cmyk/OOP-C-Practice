#pragma once
#include "sv.h"

class SVSDH : public SV{
    private:
        double hocphi;
    public:
        SVSDH();
        SVSDH(double hocphi);
        ~SVSDH();
        void nhap();
        void xuat() const;
        double getHP() const;
};