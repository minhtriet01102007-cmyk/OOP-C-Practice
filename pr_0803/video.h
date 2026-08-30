#pragma once
#include "media.h"

class Video : public Media{
    private:
        double time; 
    public:
        Video();
        Video(double time);
        void nhap();
        void xuat() const;
        double getTime() const;
};