#include "ListPhanSo.h"
#include <iostream>
#include <stdexcept>
using namespace std;
ListPhanSo::ListPhanSo() : arr(nullptr), n(0){
}
ListPhanSo::~ListPhanSo(){
    delete[] arr;
}
istream& operator>>(istream& is, ListPhanSo& list){
    cout << "Nhap so luong phan so: ";
    is >> list.n;
    if (list.n <= 0) return is;
    
    delete[] list.arr;
    list.arr = new PhanSo[list.n];
    
    for (int i = 0; i < list.n; ++i){
        cout << "--- Nhap phan so thu " << i + 1 << " ---\n";
        is >> list.arr[i];
    }
    return is;
}
ostream& operator<<(ostream& o, const ListPhanSo& list){
    o << "[ ";
    for (int i = 0; i < list.n; ++i){
        o << list.arr[i] << (i < list.n - 1 ? " ; " : "");
    }
    o << " ]";
    return o;
}
PhanSo& ListPhanSo::operator[](int index){
    if (index < 0 || index >= n){
        throw out_of_range("Chi so nam ngoai pham vi mang");
    }
    return arr[index];
}
