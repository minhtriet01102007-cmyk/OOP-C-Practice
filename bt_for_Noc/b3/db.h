#pragma once
#include <iostream>
#include <string>
#include "dslkdon.h"
#include "lsh.h"
#include "sv.h"
using namespace std;

class Truong{
private:
    string ten;
    SinglyLinkedList<LSH*> dsLop;
    Truong();  
    ~Truong();
public:
    Truong(const Truong&) = delete;
    Truong& operator=(const Truong&) = delete;
    static Truong& getInstance();
    LSH* themLop(const string& tenLop, const string& khoa);
    LSH* timLop(const string& tenLop) const;
    bool xoaLop(const string& tenLop); 
    bool themSV(const string& tenLop, const string& mssv, const string& name, double gpa);
    SV* timSV(const string& mssv) const;
    bool xoaSV(const string& mssv);
    bool chuyenSV(const string& mssv, const string& tenLopMoi);
    SV* svGPACaoNhat() const;
    int tongSV() const;
    int soLop() const;
    void hienThiTatCa() const;
};

Truong::Truong(){
    this->ten = "Truong Dai hoc";
}
Truong::~Truong(){
    while (!this->dsLop.isEmpty()){
        LSH* lop = this->dsLop.getHead();
        this->dsLop.popFront();
        delete lop; 
    }
}
Truong& Truong::getInstance(){
    static Truong instance; 
    return instance;
}
LSH* Truong::themLop(const string& tenLop, const string& khoa){
    if (this->timLop(tenLop) != nullptr){
        cout << "Lop da ton tai" << endl;
        return nullptr;
    }
    LSH* lop = new LSH(tenLop, khoa);
    this->dsLop.pushBack(lop);
    return lop;
}
LSH* Truong::timLop(const string& tenLop) const{
    for (int i = 0; i < this->dsLop.getSize(); i++){
        LSH* lop = this->dsLop.get(i);
        if (lop->getTenLop() == tenLop) return lop;
    }
    return nullptr;
}
bool Truong::xoaLop(const string& tenLop){
    LSH* lop = this->timLop(tenLop);
    if (lop == nullptr) {
        cout << "Khong tim thay lop" << endl;
        return false;
    }
    this->dsLop.remove(lop);
    delete lop;
    cout << "Xoa lop thanh cong" << endl;
    return true;
}
bool Truong::themSV(const string& tenLop, const string& mssv, const string& name, double gpa){
    LSH* lop = this->timLop(tenLop);
    if (lop == nullptr){
        cout << "Khong tim thay lop" << endl;
        return false;
    }
    if (this->timSV(mssv) != nullptr){
        cout << "MSSV da ton tai trong truong" << endl;
        return false;
    }
    return lop->themSV(mssv, name, gpa);
}
SV* Truong::timSV(const string& mssv) const{
    for (int i = 0; i < this->dsLop.getSize(); i++){
        SV* sv = this->dsLop.get(i)->timSV(mssv);
        if (sv != nullptr) return sv;
    }
    return nullptr;
}
bool Truong::xoaSV(const string& mssv){
    SV* sv = this->timSV(mssv);
    if (sv == nullptr) {
        cout << "Khong tim thay sinh vien" << endl; 
        return false;
    }
    return sv->getLSH()->xoaSV(mssv); 
}
bool Truong::chuyenSV(const string& mssv, const string& tenLopMoi) {
    SV* sv = this->timSV(mssv);
    if (sv == nullptr){
        cout << "Khong tim thay sinh vien" << endl;
        return false;
    }
    LSH* lopMoi = this->timLop(tenLopMoi);
    if (lopMoi == nullptr){
        cout << "Khong tim thay lop moi" << endl;
        return false;
    }
    return sv->getLSH()->chuyenSV(mssv, *lopMoi);
}
SV* Truong::svGPACaoNhat() const{
    SV* best = nullptr;
    for (int i = 0; i < this->dsLop.getSize(); i++){
        SV* sv = this->dsLop.get(i)->svGPACaoNhat();
        if (sv != nullptr && (best == nullptr || sv->getGPA() > best->getGPA()))
            best = sv;
    }
    return best;
}
int Truong::tongSV() const{
    int tong = 0;
    for (int i = 0; i < this->dsLop.getSize(); i++)
        tong += this->dsLop.get(i)->getSize();
    return tong;
}
int Truong::soLop() const{
    return this->dsLop.getSize(); 
}
void Truong::hienThiTatCa() const{
    cout << this->ten << "\n";
    cout << "So lop: " << this->soLop() << " | Tong SV: " << this->tongSV() << endl;
    for (int i = 0; i < this->dsLop.getSize(); i++) this->dsLop.get(i)->hienThiDS();
}