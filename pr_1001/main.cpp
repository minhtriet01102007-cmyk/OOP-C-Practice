#include "tskhoia.h"
#include <iostream>

int main(){
    std::cout << "=== NHAP THONG TIN 1 THI SINH ===" << std::endl;
    ThiSinhKhoiA ts;
    ts.nhap();
    std::cout << "\n=== THONG TIN THI SINH ===" << std::endl;
    ts.xuat();

    int n;
    std::cout << "\nNhap so luong thi sinh: ";
    std::cin >> n;
    ThiSinhKhoiA* arr = new ThiSinhKhoiA[n];
    std::cin.ignore();
    for (int i = 0; i < n; i++){
        std::cout << "\n===== NHAP THI SINH THU " << i + 1 << " =====" << std::endl;
        arr[i].nhap();
    }
    std::cout << "\n========== DANH SACH THI SINH ==========" << std::endl;
    for (int i = 0; i < n; i++){
        std::cout << "\n----- THI SINH THU " << i + 1 << " -----" << std::endl;
        arr[i].xuat();
    }
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (!(arr[i] > arr[j])){
                ThiSinhKhoiA temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    std::cout << "\n===== DANH SACH GIAM DAN THEO TONG DIEM =====" << std::endl;
    for (int i = 0; i < n; i++){
        std::cout << "\n----- THI SINH THU " << i + 1 << " -----" << std::endl;
        arr[i].xuat();
    }
    delete[] arr;
    return 0;
}