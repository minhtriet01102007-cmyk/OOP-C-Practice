#include "home.h"
#include "list.h"
#include <iostream>
#include <string>
using namespace std;

bool isAscending(const SinhVien& a, const SinhVien& b){
    return a.getGPA() < b.getGPA();
}

bool isDescending(const SinhVien& a, const SinhVien& b){
    return a.getGPA() > b.getGPA();
}
void home(){
    List SV;
    SinhVien a, *arr;
    int choice, dem, k;
    string str;
    do{
        cout << "QUAN LY SINH VIEN" << endl;
        cout << "1. Them 1 sinh vien." << endl;
        cout << "2. Them nhieu sinh vien." << endl;
        cout << "3. Xoa sinh vien o cuoi danh sach." << endl;
        cout << "4. Xoa 1 sinh vien o vi tri bat ki." << endl;
        cout << "5. Cap nhat thong tin sinh vien." << endl;
        cout << "6. Tim kiem sinh vien theo ten." << endl;
        cout << "7. Sap xep sinh vien theo GPA." << endl;
        cout << "8. Xuat thong tin sinh vien." << endl;
        cout << "9. Xem so luong sinh vien." << endl;
        cout << "0. Thoat chuong trinh." << endl;
        cout << "Lua chon cua ban: ";
        cin >> choice;
        cin.ignore();
        switch (choice){   
            case 1:
                a.nhap();
                SV.addLast(a);
                break;
            case 2:
                cout << "So sinh vien ban muon nhap: "; cin >> dem;
                arr = new SinhVien[dem];
                for (int i = 0; i < dem; i++){
                    cout << "SINH VIEN THU " << i + 1 << endl;
                    arr[i].show();
                }
                SV.addRange(arr, dem);
                delete[] arr;
                break;
            case 3:
                SV.removeLast();
                break;
            case 4:
                if(SV.getCount() == 0){
                    cout << "Danh sach rong!" << endl;
                    break;
                }
                cout << "Nhap vi tri sinh vien can xoa (0 - " << SV.getCount() - 1 << "): ";
                cin >> k;
                if (k >= 0 && k < SV.getCount()){
                    SV.removeAt(SV.getSinhVien(k)); 
                } else {
                    cout << "Vi tri khong hop le" << endl;
                }
                break;
            case 5:
                cout << "Nhap MSV cua sinh vien can cap nhat: "; cin >> str;
                SV.update(str);
                break;
            case 6:
                cout << "Ten sinh vien can tim: "; getline(cin, str); cout << endl;
                SV.searchName(str);
                break;
            case 7:
                cout << "1. Sap xep tang dan." << endl;
                cout << "2. Sap xep giam dan." << endl;
                cout << "Lua chon cua ban: "; cin >> k;
                if (k == 1) {
                    SV.sortGPA(isAscending);
                }
                else if (k == 2) {
                    SV.sortGPA(isDescending);
                }
                break;
            case 8:
                SV.displayAll();
                break;
            case 9:
                cout << "So luong sinh vien: " << SV.getCount() << endl;
                break;
            case 0:
                return;
            default:
                cout << "Lua chon khong hop le. Vui long nhap lai." << endl;
        }
        system("pause");
    } while (true);
}
