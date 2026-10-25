#include "department.h"

Department::Department(string nameDep, Teacher* teacher) : nameDep(nameDep), teacher(teacher){
}
Department::~Department(){
}
ostream& operator<<(ostream& out, const Department& department){
    out << "Department: " << department.nameDep << ", Teacher: " << *department.teacher;
    return out;
}