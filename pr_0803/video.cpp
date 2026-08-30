#include "media.h"
#include "video.h"
#include <iostream>

Video::Video() : Media(), time(0)
{}
Video::Video(double time) : Media(), time(time)
{}
void Video::nhap(){
    Media::nhap();
    std::cout << "Nhap thoi gian: ";
    std::cin >> time;
}
void Video::xuat() const{
    Media::show();
    std::cout << "Thoi gian: " << time << std::endl;
}
double Video::getTime() const{
    return time;
}
