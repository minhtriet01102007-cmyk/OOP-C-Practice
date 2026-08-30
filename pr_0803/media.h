#pragma once
#include <string>

class Media{
    private:
        std::string tengoi;
        double giaban;
    public:
        Media();
        Media(std::string tengoi, double giaban);
        ~Media();
        void nhap();
        void show() const;
        std::string getTen() const;
};
