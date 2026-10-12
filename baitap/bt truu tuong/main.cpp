#include <iostream>
#include "nghiepvu.h"
using namespace std;

int main(){
    NghiepVu ql;
    int chon;

    do {
        cout << "\n========== QUAN LY SINH VIEN ==========\n";
        cout << "1. Them sinh vien\n";
        cout << "2. Hien thi danh sach sinh vien\n";
        cout << "3. Tim sinh vien\n";
        cout << "4. Sua thong tin sinh vien\n";
        cout << "5. Xoa sinh vien\n";
        cout << "6. Hien thi sinh vien du dieu kien hoc bong\n";
        cout << "7. Sap xep theo GPA giam dan\n";
        cout << "0. Thoat\n";
        cout << "Nhap lua chon: ";

        cin >> chon;

        if (cin.fail()) {
            cout << "Lua chon khong hop le!\n";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        switch (chon) {
        case 1:
            ql.themSV();
            break;

        case 2:
            ql.hienThiDS();
            break;

        case 3:
            ql.timSV();
            break;

        case 4:
            ql.suaSV();
            break;

        case 5:
            ql.xoaSV();
            break;

        case 6:
            ql.hienThiHocBong();
            break;

        case 7:
            ql.sapXepGPA();
            break;

        case 0:
            cout << "Ket thuc chuong trinh!\n";
            break;

        default:
            cout << "Vui long chon tu 0 den 7!\n";
        }
    } while (chon != 0);

    return 0;
}
