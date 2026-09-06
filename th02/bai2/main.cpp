#include <iostream>
#include "stack.h"


int main(){
    std::cout << "=== KHOI TAO STACK 1 ===\n";
    Stack s1(3);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.print(); 

    std::cout << "\nThu nghiem push phan tu thu 4 vao Stack 1:\n";
    s1.push(40); 

    std::cout << "\n=== KHOI TAO STACK 2 BANG CACH SAO CHEP TU STACK 1 ===\n";
    Stack s2 = s1; 
    std::cout << "Ket qua in Stack 2:\n";
    s2.print(); 

    std::cout << "\n=== TIEN HANH POP MOT PHAN TU TU STACK 1 ===\n";
    int v = s1.pop();
    std::cout << "Gia tri lay ra tu Stack 1: " << v << "\n";
    std::cout << "\nTrang thai Stack 1 sau khi pop:\n";
    s1.print();
    std::cout << "Trang thai Stack 2:\n";
    s2.print();
    return 0;
}