
#include <iostream>
#include <string>
#include "sv.h"
#include "svit.h"
#include "svck.h"
#include "nghiepvu.h"
using namespace std;

int main(){
    NghiepVu ql;
    int chon;
    do{
        cout << "========== QUAN LY SINH VIEN ==========" << endl;
        cout << "1. Them sinh vien IT" << endl;
        cout << "2. Them sinh vien CK" << endl;
        cout << "3. Xoa sinh vien theo MSSV" << endl;
        cout << "4. Tim kiem sinh vien theo MSSV" << endl;
        cout << "5. Sap xep sinh vien theo GPA giam dan" << endl;
        cout << "6. Xuat danh sach sinh vien" << endl;
        cout << "0. Thoat" << endl;
        cout << "=======================================" << endl;
        cout << "Nhap lua chon: ";
        cin >> chon;

        switch (chon){
            case 1:{
                SV* sv = new SVIT();
                cin >> *sv;
                ql.them(sv);
                cout << "Da them sinh vien IT!\n";
                break;
            }
            case 2:{
                SV* sv = new SVCK();
                cin >> *sv;
                ql.them(sv);
                cout << "Da them sinh vien CK!\n";
                break;
            }
            case 3:{
                string mssv;
                cout << "Nhap MSSV can xoa: ";
                cin >> mssv;
                if (ql.xoa(mssv)){
                    cout << "Xoa sinh vien thanh cong" << endl;
                } else{
                    cout << "Khong tim thay sinh vien" << endl;
                }
                break;
            }
            case 4:{
                string mssv;
                cout << "Nhap MSSV can tim: ";
                cin >> mssv;
                SV* sv = ql.timKiem(mssv);
                if (sv != nullptr){
                    cout << *sv;
                } else{
                    cout << "Khong tim thay sinh vien" << endl;
                }
                break;
            }
            case 5:{
                ql.sapXepTheoGPA();
                cout << "Da sap xep GPA giam dan" << endl;
                ql.showDanhSach();
                break;
            }
            case 6:{
                ql.showDanhSach();
                break;
            }
            case 0:
                cout << "Ket thuc chuong trinh" << endl;
                break;
            default:
                cout << "Lua chon khong hop le" << endl;
        }
    } while (chon != 0);
    return 0;
}
