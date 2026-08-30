#include "media.h"
#include "book.h"
#include <iostream>
using namespace std;

int main(){
    cout << "=== NHAP THONG TIN MEDIA ===" << endl;
    Media m;
    m.nhap();
    cout << "\n=== THONG TIN MEDIA ===" << endl;
    m.show();

    int n;
    cout << "\nNhap so luong sach: ";
    cin >> n;
    Book ds[100];
    for (int i = 0; i < n; i++) {
        cout << "\n=== NHAP SACH THU " << i + 1 << " ===" << endl;
        ds[i].nhap();
    }
    cout << "\n=== DANH SACH SACH ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\n--- SACH THU " << i + 1 << " ---" << endl;
        ds[i].display();
    }
    cout << "\n=== SACH CO TEN \"Lap trinh C++\" " << "VA TAC GIA \"Nguyen Thanh Thuy\" ===" << endl;
    bool timThay = false;
    for (int i = 0; i < n; i++) {
        if (ds[i].getTen() == "Lap trinh C++" &&
            ds[i].getTacGia() == "Nguyen Thanh Thuy") {
            ds[i].display();
            timThay = true;
        }
    }
    if (!timThay){
        cout << "Khong tim thay sach!" << endl;
    }
    return 0;
}