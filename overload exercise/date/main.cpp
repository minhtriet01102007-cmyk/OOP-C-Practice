#include "date.h"

int main(){
    Date d1; //(28, 2, 2020);
    Date d2; //(15, 4, 2024);
    
    cout << "Nhap ngay 1: "; cin >> d1;
    cout << "Nhap ngay 2: "; cin >> d2;
    
    cout << "Ngay 1: " << d1 << endl;
    cout << "Ngay 2: " << d2 << endl;

    d1 += 3;
    cout << "Ngay 1 sau khi them 3 ngay: " << d1 << endl;
    d1 -= 5;
    cout << "Ngay 1 sau khi tru 5 ngay: " << d1 << endl;

    cout << "Ngay 1 == Ngay 2: " << (d1 == d2) << endl;
    cout << "Ngay 1 != Ngay 2: " << (d1 != d2) << endl;
    // cout << "Ngày 1 < Ngày 2: " << (d1 < d2) << endl;
    cout << "Ngay 1 <= Ngay 2: " << (d1 <= d2) << endl;
    // cout << "Ngày 1 > Ngày 2: " << (d1 > d2) << endl;
    cout << "Ngay 1 >= Ngay 2: " << (d1 >= d2) << endl;

    ++d1;
    cout << "Ngay 1 sau khi tang: " << d1 << endl;

    d1++;
    cout << "Ngay 1 sau khi tang: " << d1 << endl;

    --d2;
    cout << "Ngay 2 sau khi giam: " << d2 << endl;

    d2--;
    cout << "Ngay 2 sau khi giam: " << d2 << endl;

    return 0;
}