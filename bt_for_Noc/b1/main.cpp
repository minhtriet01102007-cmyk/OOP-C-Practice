#include <iostream>
#include "PhanSo.h"
#include "ListPhanSo.h"
#include <stdexcept>
using namespace std;

int main(){
    try{
        cout << "Kiem tra lop PhanSo:" << endl;
        PhanSo ps1(4, 6), ps2(1, 3);
        cout << "ps1 (4/6 rut gon): " << ps1 << endl;
        cout << "ps1 + ps2 = " << ps1 + ps2 << endl;
        cout << "ps1 > ps2: " << (ps1 > ps2 ? "Dung" : "Sai") << endl;

        cout << "Kiem tra lop ListPhanSo:" << endl;
        ListPhanSo list;
        cin >> list;
        
        cout << "Danh sach vua nhap:" << endl;
        cout << list << endl;
        
        if (list[0] == ps1){
            cout << "Phan tu dau tien cua mang bang ps1" << endl;
        }
        cout << "Truy xuat phan tu thu 1 (index 0) bang toan tu []: " << list[0] << endl;
        
        cout << "Thay doi phan tu thu 1 bang toan tu []:" << endl;
        list[0] = PhanSo(9, 2);
        cout << list << endl;
    } catch (const exception& e){
        cout << "Loi: " << e.what() << endl;
    }
    return 0;
}