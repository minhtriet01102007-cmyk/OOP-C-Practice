#include "media.h"
#include <iostream>
#include <string>
#include <stdexcept>

Media::Media() : tengoi(""), giaban(1)
{}
Media::Media(std::string tengoi, double giaban)
     : tengoi(tengoi), giaban(giaban){
        if (giaban < 0) throw std::invalid_argument ("Gia ban phai > 0");
}
Media::~Media(){}
void Media::nhap(){
    std::cout << "Nhap ten goi: " << std::endl;
    getline(std::cin, tengoi);
    std::cout << "Nhap gia ban: ";
    std::cin >> giaban;
    std::cin.ignore(); 
}
void Media::show() const{
    std::cout << "Ten goi: " << tengoi << std::endl;
    std::cout << "Gia ban: " << giaban << std::endl;
}
std::string Media::getTen() const{
    return tengoi;
}

