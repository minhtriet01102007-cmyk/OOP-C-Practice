#pragma once
#include "sv.h"

class SVIT : public SV{
    public:
        ~SVIT() override;
        double GPA() const override;
        bool XHB() const override;
};
