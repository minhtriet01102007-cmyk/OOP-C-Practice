#pragma once
#include "sv.h"

class SVCK : public SV{
    public:
         ~SVCK() override;
        double GPA() const override;
        bool XHB() const override;
};
