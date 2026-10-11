#include "../include/student.h"
#include <cstring>
#include <cctype>

Student::Student() : Person(){
    studentID = new char[1];
    studentID[0] = '\0';
    classInfo = nullptr;
    gpa4 = 0.0;
}
Student::Student(const char *name, int age, const char *address, bool gender, const char *studentID, LopSinhHoat *classInfo, double gpa4) 
    : Person(name, age, address, gender){
    
    if (isValidStudentID(studentID)){
        this->studentID = new char[strlen(studentID) + 1];
        strcpy(this->studentID, studentID);
    } else{
        this->studentID = new char[1];
        this->studentID[0] = '\0';
    }
    this->classInfo = classInfo;
    if (isValidGPA(gpa4)){
        this->gpa4 = gpa4;
    } else{
        this->gpa4 = 0.0;
    }
}
Student::Student(const Student &s) : Person(s){
    studentID = s.studentID ? new char[strlen(s.studentID) + 1] : nullptr;
    if (studentID) strcpy(studentID, s.studentID);
    classInfo = s.classInfo;
    gpa4 = s.gpa4;
}
Student::~Student(){
    delete[] studentID;
}
bool Student::isValidStudentID(const char *id) const{
    if (!id || strlen(id) != 10) return false;
    if (id[0] == '0') return false; 
    for (int i = 0; i < 10; i++) {
        if (!isdigit(id[i])) return false; 
    }
    return true;
}
bool Student::isValidGPA(double gpa) const{
    return (gpa >= 0.0 && gpa <= 4.0);
}
char *Student::getStudentID() const{ 
    return studentID; 
}
LopSinhHoat *Student::getClassInfo() const{ 
    return classInfo; 
}
double Student::getGPA4() const{ 
    return gpa4; 
}
void Student::setStudentID(const char *id){
    if (isValidStudentID(id)){
        delete[] studentID;
        studentID = new char[strlen(id) + 1];
        strcpy(studentID, id);
    } else{
        cout << "MSSV khong hop le" << endl;;
    }
}
void Student::setClassInfo(LopSinhHoat *classInfo){
    this->classInfo = classInfo;
}
void Student::setGPA4(double gpa){
    if (isValidGPA(gpa)){
        gpa4 = gpa;
    } else{
        cout << "GPA khong hop le" << endl;
    }
}
Student &Student::operator=(const Student &s){
    if (this != &s){
        Person::operator=(s); 
        delete[] studentID;

        studentID = s.studentID ? new char[strlen(s.studentID) + 1] : nullptr;
        if (studentID) strcpy(studentID, s.studentID);

        classInfo = s.classInfo;
        gpa4 = s.gpa4;
    }
    return *this;
}
ostream &operator<<(ostream &os, const Student &s){
    os << static_cast<const Person&>(s)
       << ", MSSV: " << (s.studentID ? s.studentID : "")
       << ", GPA: " << s.gpa4;
    return os;
}
istream &operator>>(istream &is, Student &s){
    is >> static_cast<Person&>(s); 

    char tempID[50];
    do {
        cout << "Nhap MSSV (10 ky tu, khong bat dau bang '0'): ";
        is >> tempID;
        if (!s.isValidStudentID(tempID)) {
            cout << "MSSV khong hop le! Vui long nhap lai.\n";
        }
    } while (!s.isValidStudentID(tempID));

    delete[] s.studentID;
    s.studentID = new char[strlen(tempID) + 1];
    strcpy(s.studentID, tempID);

    double tempGPA;
    do {
        cout << "Nhap diem trung binh (0 -> 4): ";
        is >> tempGPA;
        if (!s.isValidGPA(tempGPA)) {
            cout << "Diem khong hop le! Vui long nhap lai.\n";
        }
    } while (!s.isValidGPA(tempGPA));

    s.gpa4 = tempGPA;
    return is;
}