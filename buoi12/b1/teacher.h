#include <iostream>
#include <string>
using namespace std;

class Teacher{
    private:
        string name;
        int age;
    public:
        Teacher(string = "", int = 0);
        ~Teacher();
        friend ostream& operator<<(ostream&, const Teacher&);
};