#include "department.h"

int main(){
    Teacher* teacher = new Teacher("John", 40);
    {
        Department department("Math", teacher);
        cout << department << endl;
    }
    cout << *teacher << endl;
    delete teacher;
    system("pause");
    return 0;
}
