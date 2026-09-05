#include <iostream>
#include "stack.h"

int main(){
    Stack s; 
    // Thử nghiệm khi stack có 0 phần tử
    std::cout << "Kiem tra khi Stack co 0 phan tu" << std::endl;
    std::cout << "Kiem tra isEmpty(): " << (s.isEmpty() ? "True" : "False") << std::endl; 
    std::cout << "So phan tu: " << s.numOfElement() << std::endl; 
    s.print(); 
    std::cout << "Gia tri pop(): " << s.pop() << std::endl; 

    // Thử nghiệm khi stack có 1 phần tử
    std::cout << "Them 1 phan tu (10)" << std::endl;
    s.push(10);
    std::cout << "Kiem tra isEmpty(): " << (s.isEmpty() ? "True" : "False") << std::endl; 
    std::cout << "So phan tu: " << s.numOfElement() << std::endl; 
    s.print(); 

    // Thử nghiệm khi stack có 2 phần tử
    std::cout << "Them phan tu thu 2 (20)" << std::endl;
    s.push(20);
    std::cout << "So phan tu: " << s.numOfElement() << std::endl; 
    s.print(); 

    // Thử nghiệm khi stack có 3 phần tử
    std::cout << "Them phan tu thu 3 (30)" << std::endl;
    s.push(30);
    std::cout << "So phan tu: " << s.numOfElement() << std::endl; 
    s.print(); 

    // Kiểm tra thao tác lấy phần tử (pop)
    std::cout << "Kiem tra thao tac pop" << std::endl;
    std::cout << "Lay ra tu dinh: " << s.pop() << std::endl; 
    s.print();    
    std::cout << "Lay ra tu dinh: " << s.pop() << std::endl; 
    std::cout << "So phan tu hien tai: " << s.numOfElement() << std::endl; 
    return 0;
}