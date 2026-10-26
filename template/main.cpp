#include <iostream>
#include "vector.h"
#include "Map.h"
using namespace std;

int main(){
    // Vector<int> v1(2);
    // Vector<double> v2(3);
    // v1.Show();
    // cout << endl;
    // v2.Show();
    // Vector<Point> v3(2);
    //v3.Show();
    // cout << v3;
    // Vector<int,2> v1;
    // Vector<int,3> v2;
    // cout << v1 << endl << v2;
    Map<int, double, Vector> m1(2, 3);
    //key -> Vector<int> -> 2 p tu
    //value -> Vector<double> -> 3 p tu
    m1.Show();
    //cout << m1;
}