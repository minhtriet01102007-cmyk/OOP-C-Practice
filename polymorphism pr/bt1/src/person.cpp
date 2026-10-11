#include "../include/person.h"

Person::Person(){
    name = new char[1];
    name[0] = '\0';
    age = 0;
    address = new char[1];
    address[0] = '\0';
    gender = true;
}
Person::Person(const char *name, int age, const char *address, bool gender){
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    this->age = age;
    this->address = new char[strlen(address) + 1];
    strcpy(this->address, address);
    this->gender = gender;
}
Person::Person(const Person &p){
    name = p.name ? new char[strlen(p.name) + 1] : nullptr;
    if (name) strcpy(name, p.name);
    age = p.age;
    address = p.address ? new char[strlen(p.address) + 1] : nullptr;
    if (address) strcpy(address, p.address);
    gender = p.gender;
}
Person::~Person(){
    delete[] name;
    delete[] address;
}
char *Person::getName() const{
    return name;
}
int Person::getAge() const{
    return age;
}
char *Person::getAddress() const{
    return address;
}
bool Person::getGender() const{
    return gender;
}
void Person::setName(const char *name){
    delete[] this->name;
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}
void Person::setAge(int age){
    this->age = age;
}
void Person::setAddress(const char *address){
    delete[] this->address;
    this->address = new char[strlen(address) + 1];
    strcpy(this->address, address);
}
void Person::setGender(bool gender){
    this->gender = gender;
}
Person &Person::operator=(const Person &p){
    if (this != &p){
        delete[] name;
        delete[] address;

        name = p.name ? new char[strlen(p.name) + 1] : nullptr;
        if (name) strcpy(name, p.name);

        age = p.age;

        address = p.address ? new char[strlen(p.address) + 1] : nullptr;
        if (address) strcpy(address, p.address);

        gender = p.gender;
    }
    return *this;
}
ostream &operator<<(ostream &os, const Person &p){
    os << "Ten: " << (p.name ? p.name : "") 
       << ", Tuoi: " << p.age
       << ", Dia chi: " << (p.address ? p.address : "")
       << ", Gioi tinh: " << (p.gender ? "Nam" : "Nu");
    return os;
}
istream &operator>>(istream &is, Person &p){
    char temp[256];
    
    is.ignore(); 
    cout << "Nhap ten: ";
    is.getline(temp, 256);
    p.setName(temp);

    cout << "Nhap tuoi: ";
    is >> p.age;

    is.ignore();
    cout << "Nhap dia chi: ";
    is.getline(temp, 256);
    p.setAddress(temp);

    cout << "Nhap gioi tinh (1 - Nam, 0 - Nu): ";
    int g;
    is >> g;
    p.gender = (g != 0);
    return is;
}