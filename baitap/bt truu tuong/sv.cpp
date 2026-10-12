#include "sv.h"
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

SV::~SV(){
}
void SV::show(){
    cout << "MSSV: " << MSSV << endl;
    cout << "Ho ten: " << Name << endl;
    cout << "Diem ren luyen: " << fixed << setprecision(2) << DRL << endl;
    showDanhSachMon();
}
void SV::nhap(){
    cout << "Nhap MSSV: ";
    getline(cin >> ws, MSSV);
    cout << "Nhap ho ten: ";
    getline(cin, Name);
    do{
        cout << "Nhap diem ren luyen (0-100): ";
        cin >> DRL;
        if (cin.fail()){
            cout << "Diem ren luyen khong hop le" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        else if (DRL < 0 || DRL > 100){
            cout << "Diem ren luyen phai tu 0 den 100" << endl;
        }
        else{
            break;
        }
    } while (true);
}
string SV::getMSSV() const{
    return MSSV;
}
string SV::getName() const{
    return Name;
}
double SV::getDRL() const{
    return DRL;
}
void SV::setName(const string& name){
    Name = name;
}
void SV::setDRL(double drl){
    if (drl >= 0 && drl <= 100){
        DRL = drl;
    }
    else{
        cout << "Diem ren luyen khong hop le" << endl;
    }
}
void SV::nhapDanhSachMon(){
    int n;
    do{
        cout << "Nhap so mon hoc: ";
        cin >> n;
        if (cin.fail()){
            cout << "So mon hoc khong hop le" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        else if (n <= 0){
            cout << "So mon hoc phai lon hon 0" << endl;
        }
        else{
            break;
        }
    } while (true);
    dsMon.clear();
    for (int i = 0; i < n; i++){
        cout << "\n== Nhap mon hoc thu " << i + 1 << " ==\n";
        MonHoc mh;
        mh.nhap();
        dsMon.push_back(mh);
}
}
int SV::tongTinChi() const{
    int tong = 0;
    for (const MonHoc& mh : dsMon){
        tong += mh.getTinChi();
    }
    return tong;
}
double SV::tinhGPA() const{
    int tongTC = tongTinChi();
    if (tongTC == 0){
        return 0;
    }
    double tongDiem = 0;
    for (const MonHoc& mh : dsMon){
        tongDiem += mh.getDiem() * mh.getTinChi();
    }
    return tongDiem / tongTC;
}
void SV::showDanhSachMon() const{
    cout << "Danh sach mon hoc:\n";
    for (const MonHoc& mh : dsMon){
        mh.xuat();
    }
    cout << "Tong tin chi: " << tongTinChi() << endl;
    cout << fixed << setprecision(2);
    cout << "GPA: " << tinhGPA() << endl;
}
istream& operator>>(istream& in, SV& sv){
    sv.nhap();
    sv.nhapDanhSachMon();
    return in;
}
ostream& operator<<(ostream& out, const SV& sv){
    out << "MSSV: " << sv.MSSV << endl;
    out << "Ho ten: " << sv.Name << endl;
    out << "Diem ren luyen: " << fixed << setprecision(2) << sv.DRL << endl;
    out << "GPA: " << sv.GPA() << endl;
    out << "Xet hoc bong: " << (sv.XHB() ? "Du dieu kien" : "Khong du dieu kien") << endl;
    sv.showDanhSachMon();
    return out;
}
