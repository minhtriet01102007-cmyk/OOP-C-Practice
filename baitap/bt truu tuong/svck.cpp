#include "svck.h"
#include <iostream>
using namespace std;

double SVCK::GPA() {
    return tinhGPA();
}
bool SVCK::XHB(){
    return GPA() >= 8.0 && DRL >= 80;
}
void SVCK::nhap(){
    SV::nhap();
}
void SVCK::show(){
    cout << "Loai sinh vien: Co khi\n";
    cout << "MSSV: " << MSSV << '\n';
    cout << "Ho ten: " << Name << '\n';
    cout << "DRL: " << DRL << '\n';
    showDanhSachMon();
    cout << "Hoc bong: "
         << (XHB() ? "Du dieu kien" : "Khong du dieu kien")
         << '\n';
}
