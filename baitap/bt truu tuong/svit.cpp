#include "svit.h"
#include <iostream>
using namespace std;

double SVIT::GPA(){
    return tinhGPA();
}
bool SVIT::XHB(){
    return GPA() >= 8.0 && DRL >= 80;
}
void SVIT::nhap(){
    SV::nhap();
}
void SVIT::show() {
    cout << "Loai sinh vien: Cong nghe thong tin\n";
    cout << "MSSV: " << MSSV << '\n';
    cout << "Ho ten: " << Name << '\n';
    cout << "DRL: " << DRL << '\n';
    showDanhSachMon();
    cout << "Hoc bong: "
         << (XHB() ? "Du dieu kien" : "Khong du dieu kien")
         << '\n';
}
