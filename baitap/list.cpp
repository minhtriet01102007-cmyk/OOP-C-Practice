#include "list.h"
#include <string>
#include <iostream>
#include <utility>

List::List(SinhVien *SV, int count){
    this->SV = SV;
    this->count = count;
}
List::~List(){ 
    if(this->SV != NULL) 
    delete[] SV; 
}
SinhVien List::getSinhVien(int index) const{
    return *(SV + index);
}
void List::addLast(SinhVien sinhvien){
    if(count == 0){
        SV = new SinhVien[count + 1];
        *(SV + count) = sinhvien;
        count++;
    } else{
        SinhVien *temp = new SinhVien[count + 1];
        for (int i = 0; i < count; i++){
            *(temp + i) = *(SV + i);
        }
        *(temp + count) = sinhvien;
        delete[] SV;
        SV = temp;
        count++;
    }
}
void List::addRange(SinhVien *arrSV, int dem){
    if(count == 0){
        SV = new SinhVien[count + dem];
        for(int i = 0; i < dem; i++){
            *(SV + i) = *(arrSV + i);
        }
        count = dem;
    }
    else{
        SinhVien *temp = new SinhVien[count + dem];
        for(int i = 0; i < count; i++){
            *(temp + i) = *(SV + i);
        }
        for (int i = 0; i < dem; i++){
            *(temp + count + i) = *(arrSV + i);
        }
        delete[] SV;
        SV = temp;
        count += dem;
    }
}
int List::indexOf(const SinhVien& sinhvien){
    for(int i = 0; i < count; i++) {
        if(this->SV[i].getMasv() == sinhvien.getMasv()) return i;
    }
    return -1;
}
void List::removeLast(){
    if(count == 0){
        std::cout << "Danh sach rong" << std::endl;
        return;
    }
    SinhVien *temp = new SinhVien[count - 1];
    for (int i = 0; i < count - 1; i++){
        *(temp + i) = *(SV + i);
    }
    delete[] SV;
    SV = temp;
    count--;
}
void List::removeAt(const SinhVien& sinhvien) {
    if(count == 0){
        std::cout << "Danh sach rong" << std::endl;
        return;
    }
    int index = indexOf(sinhvien);
    if(index == -1){
        std::cout << "Khong tim thay sinh vien can xoa" << std::endl;
        return;
    }
    SinhVien *temp = new SinhVien[count - 1];
    for (int i = 0; i < index; i++){
        *(temp + i) = *(SV + i);
    }   
    for(int i = index; i < count - 1; i++){
        *(temp + i) = *(SV + i + 1);
    }
    delete[] SV;
    SV = temp;
    count--;
}
void List::update(const std::string& MSV){
    if(count == 0){
        std::cout << "Danh sach rong" << std::endl;
        return;
    }
    for (int i = 0; i < count; i++){
        if(this->SV[i].getMasv() == MSV) {
            this->SV[i].nhap();
            return;
        }
    }
    std::cout << "Khong tim thay sinh vien can cap nhat" << std::endl;
}
void List::searchName(const std::string& name){
    if(count == 0){
        std::cout << "Danh sach rong" << std::endl;
        return;
    }
    bool found = false;
    for (int i = 0; i < count; i++) {
        std::string tensv = this->SV[i].getTensv();
        if(tensv.find(name) == 0) {
            SV[i].show();
            std::cout << "\n";
            found = true;
        }
    }
    if(!found){
        std::cout << "Khong tim thay sinh vien can tim" << std::endl;
    }
}
void List::sortGPA(bool (*cmp)(const SinhVien& a, const SinhVien& b)){
    if(count == 0){
        std::cout << "Danh sach rong" << std::endl;
        return;
    }
    SinhVien *temp = new SinhVien[count];
    for (int i = 0; i < count; i++){
        *(temp + i) = *(SV + i);
    }
    bool swapped = true;
    while(swapped){
        swapped = false;
        for (int i = 0; i < count - 1; i++){
            if(cmp(*(temp + i), *(temp + (i + 1)))) {
                std::swap(*(temp + i), *(temp + (i + 1)));
                swapped = true;
            }
        }
    }
    for (int i = 0; i < count; i++){
        temp[i].show();
    }
    delete[] temp;
}
void List::displayAll() const{
    if(count == 0){
        std::cout << "Danh sach rong" << std::endl;
        return;
    }
    std::cout << "\n ===DANH SACH SINH VIEN=== " << std::endl;
    for(int i = 0; i < count; i++){
        std::cout << "SINH VIEN THU " << i + 1 << std::endl;
        this->SV[i].show(); 
    }
}
int List::getCount() const{
    return this->count;
}