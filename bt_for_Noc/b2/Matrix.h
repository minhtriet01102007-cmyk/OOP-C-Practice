#pragma once
#include <iostream>
using namespace std;

class Matrix{
    private:
        int row, col;
        int **a;
    public:
        Matrix(int = 0, int = 0);
        Matrix(const Matrix &);
        int getRow() const; 
        int getCol() const;
        void setRow(int);
        void setCol(int);
        Matrix operator+(const Matrix &);
        Matrix operator-(const Matrix &);
        Matrix operator*(const Matrix &);
        Matrix operator=(const Matrix &);
        friend istream &operator>>(istream &, Matrix &);
        friend ostream &operator<<(ostream &, const Matrix &);
        int* operator[](int);
        int operator^(const Matrix &);
        int operator()(const int&, const int&s);
        ~Matrix();
};
