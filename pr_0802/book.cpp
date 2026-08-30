#include "media.h"
#include "book.h"
#include <iostream>
#include <string>

Book::Book() : Media(), sotrang(1), tacgia(""){
}
Book::Book(int sotrang, std::string tacgia) : Media(), sotrang(1), tacgia(""){
}
void Book::nhap(){
    Media::nhap();
    std::cout << "Nhap so trang: ";
    std::cin >> sotrang;
    std::cout << "Nhap tac gia: ";
    getline(std::cin, tacgia);
    std::cin.ignore();
}
void Book::display() const{
    Media::show();
    std::cout << "So trang: " << sotrang << std::endl;
    std::cout << "Tac gia: " << tacgia << std::endl;
}
std::string Book::getTacGia() const{
    return tacgia;
}
