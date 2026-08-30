#include "media.h"
#include <string>
#include <iostream>

Media::Media() : tengoi(""), giaban(1){
}
Media::Media(std::string tengoi, double giaban)
     : tengoi(tengoi), giaban(giaban){
}
Media::~Media(){}
void Media::nhap(){
    std::cout << "Nhap ten goi: " << std::endl;
    getline(std::cin, tengoi);
    std::cout << "Nhap gia ban: ";
    std::cin >> giaban;
}
void Media::show() const{
    std::cout << "Ten goi: " << tengoi << std::endl;
    std::cout << "Gia ban: " << giaban << std::endl;
}
std::string Media::getTen() const{
    return tengoi;
}