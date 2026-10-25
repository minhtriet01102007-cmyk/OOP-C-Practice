#include "teacher.h"

Teacher::Teacher(string name, int age) : name(name), age(age){
}
Teacher::~Teacher(){
}
ostream& operator<<(ostream& out, const Teacher& teacher){
    out << "Name: " << teacher.name << ", Age: " << teacher.age;
    return out;
}