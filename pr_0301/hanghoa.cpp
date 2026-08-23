#include "hanghoa.hpp"
#include <string>
#include <iostream>
using namespace std;

Hanghoa::Hanghoa() : ma_hang(""), ten_hang("")
{}
Hanghoa::Hanghoa(string ma_hang, string ten_hang)
       : ma_hang(ma_hang), ten_hang(ten_hang)
{}
void Hanghoa::nhap(){
    cout << "Nhap ma hang: ";
    getline(cin, ma_hang);
    cout << "Nhap ten hang: ";
    getline(cin, ten_hang);
}
void Hanghoa::xuat() const{
    cout << "Ma hang: " << ma_hang << endl;
    cout << "Ten hangL " << ten_hang << endl;
}