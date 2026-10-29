#include "teacher.h"

class Department{
    private:
        string nameDep;
        Teacher* teacher;
    public:
        Department(string = "", Teacher* = nullptr);
        ~Department();
        friend ostream& operator<<(ostream&, const Department&);
};
Department::Department(string nameDep, Teacher* teacher) : nameDep(nameDep), teacher(teacher){
}
Department::~Department(){
    delete this->teacher;
}
ostream& operator<<(ostream& out, const Department& department){
    out << "Department: " << department.nameDep << ", Teacher: " << *department.teacher;
    return out;
}