#pragma once
#include "media.h"
#include <string>

class Book : public Media{
    private:
        int sotrang;
        std::string tacgia;
    public:
        Book();
        Book(int sotrang, std::string tacgia);
        void nhap();
        void display() const;
        std::string getTacGia() const;
};