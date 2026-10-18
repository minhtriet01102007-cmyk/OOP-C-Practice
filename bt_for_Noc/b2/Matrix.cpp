#include "Matrix.h"   

Matrix::Matrix(int r, int c) : row(r), col(c)
{
    if(row == 0 && col == 0) this->a = NULL;
    else {
        a = new int*[this->row];
        for(int i = 0; i < this->row; i++) {
            *(a + i) = new int[this->col];
        }
    }
}

Matrix::Matrix(const Matrix &m) : row(m.row), col(m.col) {
    this->a = NULL;
    this->a = new int*[this->row];
    for(int i = 0; i < this->row; i++) {
        *(this->a + i) = new int[this->col];
        for(int j = 0; j < this->col; j++) {
            *(*(this->a + i) + j) = *(*(m.a + i) + j);
        }
    }
}

Matrix::~Matrix()
{
    for(int i = 0; i < row; i++) delete[] *(a + i);
    delete[] a;
}

int Matrix::getRow() const
{
    return row;
}

int Matrix::getCol() const
{
    return col;
}

void Matrix::setRow(int r)
{
    row = r;
    for(int i = 0; i < row; i++) delete[] *(a + i);
    delete[] a;
    a = new int*[row];
    for(int i = 0; i < row; i++) *(a + i) = new int[col];
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++) *(*(a + i) + j) = 0;
}

void Matrix::setCol(int c)
{
    col = c;
    for(int i = 0; i < row; i++) delete[] *(a + i);
    delete[] a;
    a = new int*[row];
    for(int i = 0; i < row; i++) *(a + i) = new int[col];
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++) *(*(a + i) + j) = 0;
}

Matrix Matrix::operator+(const Matrix &x)
{
    Matrix tong(row, col);
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++) *(*(tong.a + i) + j) = *(*(a + i) + j) + *(*(x.a + i) + j);
    return tong;
}

Matrix Matrix::operator-(const Matrix &x)
{
    Matrix hieu(row, col);
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++) *(*(hieu.a + i) + j) = *(*(a + i) + j) - *(*(x.a + i) + j);
    return hieu;
}   

Matrix Matrix::operator*(const Matrix &x)
{
    Matrix tich(row, x.col);
    for(int i = 0; i < row; i++)
        for(int j = 0; j < x.col; j++)
        {
            *(*(tich.a + i) + j) = 0;
            for(int k = 0; k < col; k++) *(*(tich.a + i) + j) += *(*(a + i) + k) * *(*(x.a + k) + j);
        }
    return tich;
}   

Matrix Matrix::operator=(const Matrix &x)
{
    row = x.row;
    col = x.col;
    for(int i = 0; i < row; i++) delete[] *(a + i);
    delete[] a;
    a = new int*[row];
    for(int i = 0; i < row; i++) *(a + i) = new int[col];
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++) *(*(a + i) + j) = *(*(x.a + i) + j);
    return *this;
}   

istream &operator>>(istream &is, Matrix &x)
{
    cout << "Nhap so hang: ";
    is >> x.row;
    cout << "Nhap so cot: ";
    is >> x.col;
    x.a = new int*[x.row];
    for(int i = 0; i < x.row; i++) *(x.a + i) = new int[x.col];
    for(int i = 0; i < x.row; i++)
        for(int j = 0; j < x.col; j++) is >> *(*(x.a + i) + j);
    return is;
}

ostream &operator<<(ostream &os, const Matrix &x)
{
    for(int i = 0; i < x.row; i++)
    {
        for(int j = 0; j < x.col; j++) os << *(*(x.a + i) + j) << " ";
        os << endl;
    }
    return os;
}   

int* Matrix::operator[](int i)
{
    return *(a + i);
}

int Matrix::operator^(const Matrix &x)
{
    if(row != x.row || col != x.col) return 0;
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            if(*(*(a + i) + j) != *(*(x.a + i) + j)) return 0;
    return 1;
}

int Matrix::operator()(const int& row, const int& col) {
    static int t = 0;
    if(row >= 0 && row < this->row && col >= 0 && col < this->col) {
        return *(*(this->a + row) + col);
    } else {
        return t;
    }
}