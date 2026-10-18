#include "Vecto.h"
#include "Matrix.h"
#include "Polynomial.h"

int main(){
    // Test Vecto class
    Vecto v1, v2;
    cout << "Nhap v1: " << endl; cin >> v1;
    cout << "Nhap v2: " << endl; cin >> v2;
    Vecto v3 = v1 + v2;
    Vecto v4 = v1 - v2;
    Vecto v5 = v1 * v2;
    cout << "Vecto v1 + v2: " << v3 << endl;
    cout << "Vecto v1 - v2: " << v4 << endl;
    cout << "Vecto v1 * v2: " << v5 << endl;
    cout << "v1 ^ v2: " << (v1 ^ v2) << endl;
    for (int i = 0; i < v1.getSochieu(); i++){
        cout << "v1[" << i << "] = " << v1[i] << endl;
    }   

    // Test Matrix class
    Matrix m1, m2;
    cout << "Nhap m1: " << endl; cin >> m1;
    cout << "Nhap m2: " << endl; cin >> m2;
    Matrix m3 = m1 + m2;
    Matrix m4 = m1 - m2;
    Matrix m5 = m1 * m2;
    cout << "Matrix m1 + m2: " << m3 << endl;
    cout << "Matrix m1 - m2: " << m4 << endl;
    cout << "Matrix m1 * m2: " << m5 << endl;
    cout << "m1 ^ m2: " << (m1 ^ m2) << endl;
    for (int i = 0; i < m1.getRow(); i++){
        for (int j = 0; j < m1.getCol(); j++){
            cout << "m1(" << i << ", " << j << ") = " << m1(i, j) << endl;
        }
    }

    // Test Polynomial class
    Polynomial p1, p2;
    cout << "Nhap p1: " << endl; cin >> p1;
    cout << "Nhap p2: " << endl; cin >> p2;
    Polynomial p3 = p1 + p2;
    Polynomial p4 = p1 - p2;
    Polynomial p5 = p1 * p2;
    cout << "Polynomial p1 + p2: " << p3 << endl;
    cout << "Polynomial p1 - p2: " << p4 << endl;
    cout << "Polynomial p1 * p2: " << p5 << endl;
    cout << "p1(2) = " << p1(2) << endl;
    for (int i = 0; i <= p1.getDegree(); i++){
        cout << "p1[" << i << "] = " << p1[i] << endl;
    }
    return 0;
}