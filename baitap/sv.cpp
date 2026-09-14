#include "sv.h"
#include <string>
#include <iostream>

SinhVien::SinhVien() : masv(""), tensv(""), ngaysinh(""){
}
SinhVien::SinhVien(std::string masv, std::string tensv, std::string ngaysinh, double GPA)
    : masv(masv), tensv(tensv), ngaysinh(ngaysinh), GPA(GPA)
{}
SinhVien::SinhVien(const SinhVien& SV){
    this->masv = SV.masv;
    this->tensv = SV.tensv;
    this->ngaysinh = SV.ngaysinh;
    this->GPA = SV.GPA;
}
SinhVien::~SinhVien(){}
std::string SinhVien::getMasv() const{
    return this->masv;
}
std::string SinhVien::getTensv() const{
    return this->tensv;
}
std::string SinhVien::getNgaysinh() const{
    return this->ngaysinh;
}
double SinhVien::getGPA() const{
    return this->GPA;
}
void SinhVien::setMaSV(std::string masv){
    this->masv = masv;
}
void SinhVien::setTensv(std::string tensv){
    this->tensv = tensv;
}
void SinhVien::setNgaysinh(std::string ngaysinh){
    this->ngaysinh = ngaysinh;
}
void SinhVien::setGPA(double GPA){
    this->GPA = GPA;
}
void SinhVien::nhap(){
    std::cout << "Nhap ma sinh vien: ";
    getline(std::cin, this->masv);
    std::cin.ignore();
    std::cout << "\n Nhap ten sinh vien: ";
    getline(std::cin, this->tensv);
    std::cout << "\n Nhap ngay sinh: ";
    getline(std::cin, this->ngaysinh);
    std::cin.ignore();
    std::cout << "Nhap GPA: ";
    std::cin >> GPA;
}
void SinhVien::show() const{
    std::cout << "Ma sinh vien: " << this->masv << std::endl;
    std::cout << "Ten sinh vien: " << this->tensv << std::endl;
    std::cout << "Ngay sinh: " << this->ngaysinh << std::endl;
    std::cout << "GPA: " << this->GPA << std::endl;
}


