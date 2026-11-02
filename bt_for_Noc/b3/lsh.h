#pragma once
#include <iostream>
#include <string>
#include "dslkdon.h"
#include "sv.h"
using namespace std;

class Truong; 
class LSH{
private:
    string tenLop;
    string khoa;
    SinglyLinkedList<SV*> ds;
    friend class Truong;
    LSH(const string& tenLop, const string& khoa);
    ~LSH();
public:
    LSH(const LSH&) = delete;
    LSH& operator=(const LSH&) = delete;
    bool themSV(const string& mssv, const string& name, double gpa);
    bool xoaSV(const string& mssv);
    SV* timSV(const string& mssv) const;
    bool chuyenSV(const string& mssv, LSH& lopMoi);
    void hienThiDS() const;
    void sapXepGPA();          // tăng dần
    SV* svGPACaoNhat() const;  // nullptr nếu lớp rỗng
    string getTenLop() const;
    string getKhoa() const;
    int getSize() const;
};
LSH::LSH(const string& tenLop, const string& khoa){
    this->tenLop = tenLop;
    this->khoa = khoa;
}

LSH::~LSH(){
    while (!this->ds.isEmpty()){
        SV* sv = this->ds.getHead();
        this->ds.popFront();
        delete sv;
    }
}
bool LSH::themSV(const string& mssv, const string& name, double gpa){
    if (this->timSV(mssv) != nullptr){
        cout << "MSSV da ton tai" << endl;
        return false;
    }
    this->ds.pushBack(new SV(mssv, name, gpa, this)); // gắn ngược về lớp này
    return true;
}
SV* LSH::timSV(const string& mssv) const{
    for (int i = 0; i < this->ds.getSize(); i++){
        SV* sv = this->ds.get(i);
        if (sv->getMSSV() == mssv) return sv;
    }
    return nullptr;
}
bool LSH::xoaSV(const string& mssv){
    SV* sv = this->timSV(mssv);
    if (sv == nullptr) {
        cout << "Khong tim thay sinh vien" << endl;
        return false;
    }
    this->ds.remove(sv); 
    delete sv;          
    cout << "Xoa thanh cong" << endl;
    return true;
}
bool LSH::chuyenSV(const string& mssv, LSH& lopMoi){
    if (&lopMoi == this) return false;
    if (lopMoi.timSV(mssv) != nullptr){
        cout << "MSSV da ton tai o lop moi" << endl;
        return false;
    }
    SV* sv = this->timSV(mssv);
    if (sv == nullptr){
        cout << "Khong tim thay sinh vien" << endl;
        return false;
    }
    this->ds.remove(sv);    
    sv->setLSH(&lopMoi);    
    lopMoi.ds.pushBack(sv); 
    return true;
}
void LSH::hienThiDS() const{
    cout << "\n===== LOP SINH HOAT =====\n";
    cout << "Ten lop: " << this->tenLop << endl;
    cout << "Khoa: " << this->khoa << endl;
    cout << "Si so: " << this->ds.getSize() << endl;
    if (this->ds.isEmpty()){
        cout << "Danh sach rong" << endl;
        return;
    }
    for (int i = 0; i < this->ds.getSize(); i++) this->ds.get(i)->show();
}
void LSH::sapXepGPA(){
    int n = this->ds.getSize();
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - 1 - i; j++){
            SV* a = this->ds.get(j);
            SV* b = this->ds.get(j + 1);
            if (a->getGPA() > b->getGPA()){
                this->ds.set(j, b);
                this->ds.set(j + 1, a);
            }
        }
    }
}
SV* LSH::svGPACaoNhat() const{
    SV* best = nullptr;
    for (int i = 0; i < this->ds.getSize(); i++){
        SV* sv = this->ds.get(i);
        if (best == nullptr || sv->getGPA() > best->getGPA()) best = sv;
    }
    return best;
}
string LSH::getTenLop() const{ 
    return this->tenLop; 
}
string LSH::getKhoa() const{ 
    return this->khoa; 
}
int LSH::getSize() const{ 
    return this->ds.getSize(); 
}