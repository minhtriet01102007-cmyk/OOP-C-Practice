#pragma once
#include "svit.h"
#include "svck.h"

class NghiepVu {
    private:
        SV** ds;
        int n;
        int capacity;
        void moRong();
    public:
        NghiepVu();
        ~NghiepVu();
        void themSV();
        void hienThiDS();
        void timSV();
        void suaSV();
        void xoaSV();
        void hienThiHocBong();
        void sapXepGPA();
};
