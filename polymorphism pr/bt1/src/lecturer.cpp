#include <iostream>
#include <cstring>
#include <sstream>
#include <vector>
#include "../include/lecturer.h"
using namespace std;

// Hàm hỗ trợ chuyển ký tự thành chữ thường
char toLowerChar(char c){
    if (c >= 'A' && c <= 'Z') return c + 32;
    return c;
}
Lecturer::Lecturer() : Person(){
    maLecturer = nullptr;
    capBac = nullptr;
}
Lecturer::Lecturer(const char *name, int age, const char *address, bool gender, const char *capBac) 
    : Person(name, age, address, gender) {
    if (capBac){
        this->capBac = new char[strlen(capBac) + 1];
        strcpy(this->capBac, capBac);
    } else{
        this->capBac = nullptr;
    }
    generateMaLecturer();
}
Lecturer::Lecturer(const Lecturer &l) : Person(l){
    if (l.maLecturer) {
        maLecturer = new char[strlen(l.maLecturer) + 1];
        strcpy(maLecturer, l.maLecturer);
    } else {
        maLecturer = nullptr;
    }

    if (l.capBac) {
        capBac = new char[strlen(l.capBac) + 1];
        strcpy(capBac, l.capBac);
    } else {
        capBac = nullptr;
    }
}
Lecturer::~Lecturer(){
    delete[] maLecturer;
    delete[] capBac;
}
char *Lecturer::getMaLecturer() const{
    return maLecturer;
}
char *Lecturer::getCapBac() const{
    return capBac;
}
void Lecturer::setCapBac(const char *capBac){
    delete[] this->capBac;
    if (capBac){
        this->capBac = new char[strlen(capBac) + 1];
        strcpy(this->capBac, capBac);
    } else {
        this->capBac = nullptr;
    }
}
void Lecturer::generateMaLecturer(){
    if (!name) {
        delete[] maLecturer;
        maLecturer = new char[4];
        strcpy(maLecturer, "102");
        return;
    }
    stringstream ss(name);
    vector<string> words;
    string word;
    while (ss >> word) {
        words.push_back(word);
    }

    string code = "102";
    if (!words.empty()) {
        // Lấy chữ cái đầu của các từ trước từ cuối cùng
        for (size_t i = 0; i < words.size() - 1; i++) {
            code += toLowerChar(words[i][0]);
        }
        // Thêm toàn bộ từ cuối cùng (tên) ở dạng chữ thường
        string lastName = words.back();
        for (char c : lastName) {
            code += toLowerChar(c);
        }
    }

    delete[] maLecturer;
    maLecturer = new char[code.length() + 1];
    strcpy(maLecturer, code.c_str());
}
Lecturer &Lecturer::operator=(const Lecturer &l) {
    if (this != &l) {
        Person::operator=(l); 
        
        delete[] maLecturer;
        delete[] capBac;

        if (l.maLecturer){
            maLecturer = new char[strlen(l.maLecturer) + 1];
            strcpy(maLecturer, l.maLecturer);
        } else{
            maLecturer = nullptr;
        }

        if (l.capBac){
            capBac = new char[strlen(l.capBac) + 1];
            strcpy(capBac, l.capBac);
        } else {
            capBac = nullptr;
        }
    }
    return *this;
}
ostream &operator<<(ostream &os, const Lecturer &l) {
    os << static_cast<const Person&>(l) 
       << ", Ma GV: " << (l.maLecturer ? l.maLecturer : "") 
       << ", Cap bac: " << (l.capBac ? l.capBac : "");
    return os;
}
istream &operator>>(istream &is, Lecturer &l) {
    is >> static_cast<Person&>(l); 
    char temp[256];
    cout << "Nhap cap bac (assistant professor, associate professor, full professor...): ";
    is.ignore();
    is.getline(temp, 256);
    l.setCapBac(temp);
    l.generateMaLecturer();
    cout << "=> Tu dong sinh Ma Lecturer: " << (l.maLecturer ? l.maLecturer : "") << "\n";
    return is;
}