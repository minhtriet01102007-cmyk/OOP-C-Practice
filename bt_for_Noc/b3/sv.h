#pragma once
#include <iostream>
#include <string>
using namespace std;

class LSH; 
class SV{
private:
    string mssv;
    string name;
    double gpa;
    LSH* lopsh; 
    friend class LSH;
    void setLSH(LSH* lopsh);
public:
    SV();
    SV(const string& mssv, const string& name, double gpa, LSH* lopsh);
    string getMSSV() const;
    string getName() const;
    double getGPA() const;
    LSH* getLSH() const;
    void setName(const string& name);
    void setGPA(double gpa);
    void show() const;
};
SV::SV(){
    this->mssv = "";
    this->name = "";
    this->gpa = 0;
    this->lopsh = nullptr;
}
SV::SV(const string& mssv, const string& name, double gpa, LSH* lopsh){
    this->mssv = mssv;
    this->name = name;
    this->gpa = gpa;
    this->lopsh = lopsh;
}
string SV::getMSSV() const{ 
    return this->mssv; 
}
string SV::getName() const{ 
    return this->name; 
}
double SV::getGPA() const{ 
    return this->gpa; 
}
LSH* SV::getLSH() const{ 
    return this->lopsh; 
}
void SV::setName(const string& name){ 
    this->name = name; 
}
void SV::setGPA(double gpa){ 
    this->gpa = gpa; 
}
void SV::setLSH(LSH* lopsh){ 
    this->lopsh = lopsh; 
}
void SV::show() const{
    cout << "MSSV: " << this->mssv << " | Name: " << this->name
         << " | GPA: " << this->gpa << endl;
}