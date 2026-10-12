
#include "monhoc.h"
#include <iostream>
using namespace std;

void MonHoc::nhap(){
    cout << "Nhap ten mon: ";
    getline(cin >> ws, tenmon);

    do{
        cout << "Nhap so tin chi: ";
        cin >> tinchi;
        if (cin.fail()){
            cout << "Khong hop le" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        if (tinchi <= 0){
            cout << "Tin chi phai lon hon 0" << endl;
        } else{
            break;
        }
    } while (true);

    do{
        cout << "Nhap diem (0-10): ";
        cin >> diem;

        if (cin.fail()){
            cout << "Khong hop le" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        if (diem < 0 || diem > 10){
            cout << "Diem phai tu 0 den 10" << endl;
        } else{
            break;
        }
    } while (true);
}
void MonHoc::xuat() const{
    cout << "Ten mon: " << tenmon << " | Tin chi: " << tinchi << " | Diem: " << diem << '\n';
}
int MonHoc::getTinChi() const{
    return tinchi;
}
double MonHoc::getDiem() const{
    return diem;
}
