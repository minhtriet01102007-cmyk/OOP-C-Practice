#include "map.cpp"
#include "vector.cpp"

int main(){
    // Neu dung class template thi chi khai bao kieu tuong minh
    // Vector<int> v(10, 5);
    // Vector v(10, 5); -> khong nen
    // Vector<int, 3> v(10);
    // v.show();

    Map<int, double, Vector> v1;

    return 0;
}