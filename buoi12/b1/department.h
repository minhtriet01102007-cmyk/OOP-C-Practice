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