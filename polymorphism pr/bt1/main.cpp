#include <iostream>
#include "person.h"
#include "lecturer.h"
#include "student.h"
#include "lopsinhhoat.h"
using namespace std;

void hienThiMenu(){
    cout << "\n================= QUAN LY LOP SINH HOAT =================" << endl;
    cout << "1. Nhap thong tin lop (Ten lop, GVCN, Danh sach sinh vien)" << endl;
    cout << "2. Hien thi thong tin lop (Display Class)" << endl;
    cout << "3. Them mot sinh vien moi" << endl;
    cout << "4. Xoa sinh vien theo vi tri (Index)" << endl;
    cout << "5. Xem thong tin sinh vien tai vi tri cu the ([])" << endl;
    cout << "0. Thoat chuong trinh" << endl;
    cout << "=========================================================" << endl;
    cout << "Nhap lua chon cua ban: ";
}

int main() {
    LopSinhHoat lopHienTai;
    int choice;
    do {
        hienThiMenu();
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "\n--- NHAP THONG TIN LOP ---\n";
                cin >> lopHienTai;
                cout << "=> Nhap thong tin lop thanh cong!\n";
                break;
            }
            case 2: {
                cout << "\n--- THONG TIN LOP SINH HOAT ---\n";
                cout << lopHienTai; 
                cout << endl;
                break;
            }
            case 3: {
                cout << "\n--- THEM SINH VIEN MOI ---\n";
                Student svMoi;
                cin >> svMoi;
                lopHienTai.themSinhVien(svMoi);
                cout << "=> Da them sinh vien thanh cong!\n";
                break;
            }
            case 4: {
                cout << "\n--- XOA SINH VIEN ---\n";
                cout << "Nhap chi số sinh vien can xoa (tu 0 den " << lopHienTai.getSiSo() - 1 << "): ";
                int idx;
                cin >> idx;
                if (idx >= 0 && idx < lopHienTai.getSiSo()) {
                    lopHienTai.xoaSinhVien(idx);
                    cout << "=> Xoa sinh vien thanh cong!\n";
                } else {
                    cout << "=> Chi so khong hop le!\n";
                }
                break;
            }
            case 5: {
                cout << "\n--- TRUY CAP SINH VIEN BANG TOAN TU [] ---\n";
                cout << "Nhap chi so sinh vien can xem: ";
                int idx;
                cin >> idx;
                if (idx >= 0 && idx < lopHienTai.getSiSo()) {
                    cout << "Thong tin sinh vien tai vi tri [" << idx << "]:\n";
                    cout << lopHienTai[idx] << endl;
                } else {
                    cout << "=> Chi so khong hop le!\n";
                }
                break;
            }
            case 0:
                cout << "\nCam ơn ban da su dung chuong trinh!\n";
                break;
            default:
                cout << "\n=> Lua chon khong hop le. Vui long chon lai!\n";
        }
    } while (choice != 0);
    return 0;
}