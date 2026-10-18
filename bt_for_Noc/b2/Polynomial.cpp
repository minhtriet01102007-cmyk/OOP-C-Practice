#include "Polynomial.h"

Polynomial::Polynomial(int deg) : deg(deg){
    coeff = new int[deg + 1];
    for (int i = 0; i <= deg; i++){
        *(coeff + i) = 0;
    }
}
Polynomial::Polynomial(const Polynomial &p) : deg(p.deg){
    coeff = new int[deg + 1];
    for (int i = 0; i <= deg; i++){
        *(coeff + i) = *(p.coeff + i);
    }
}
Polynomial::~Polynomial(){
    delete[] coeff;
}
int Polynomial::getDegree() const{
    return deg;
}
void Polynomial::setDegree(int deg){
    deg = deg;
    delete[] coeff;
    coeff = new int[deg + 1];
    for (int i = 0; i <= deg; i++){
        *(coeff + i) = 0;
    }
}
Polynomial Polynomial::operator+(const Polynomial &p){
    int maxDegree = max(deg, p.deg);
    Polynomial sum(maxDegree);
    for (int i = 0; i <= maxDegree; i++){
        if (i <= deg) sum[i] += *(coeff + i);
        if (i <= p.deg) sum[i] += *(p.coeff + i);
    }
    return sum;
}

Polynomial Polynomial::operator-(const Polynomial &p){
    int maxDegree = max(deg, p.deg);
    Polynomial diff(maxDegree);
    for (int i = 0; i <= maxDegree; i++){
        if (i <= deg) diff[i] += *(coeff + i);
        if (i <= p.deg) diff[i] -= *(p.coeff + i);
    }
    return diff;
}

Polynomial Polynomial::operator*(const Polynomial &p){
    int newDegree = deg + p.deg;
    Polynomial prod(newDegree);
    for (int i = 0; i <= deg; i++){
        for (int j = 0; j <= p.deg; j++){
            *(prod.coeff + i + j) += *(coeff + i) * *(p.coeff + j);
        }
    }
    return prod;
}
Polynomial& Polynomial::operator=(const Polynomial &p){
    if (this == &p) return *this;
    deg = p.deg;
    delete[] coeff;
    coeff = new int[deg + 1];
    for (int i = 0; i <= deg; i++){
        *(coeff + i) = *(p.coeff + i);
    }
    return *this;
}
int& Polynomial::operator[](int i){
    return *(coeff + i);
}
int Polynomial::operator()(int x) const{
    int result = 0;
    int power = 1;
    for (int i = 0; i <= deg; i++){
        result += *(coeff + i) * power;
        power *= x;
    }
    return result;
}
istream &operator>>(istream &is, Polynomial &p){
    cout << "Nhap cap cua da thuc";
    is >> p.deg;
    delete[] p.coeff;
    p.coeff = new int[p.deg + 1];
    for (int i = 0; i <= p.deg; i++){
        cout << "x^" << i << ": ";
        is >> *(p.coeff + i);
    }
    return is;
}
ostream &operator<<(ostream &os, const Polynomial &p){
    for (int i = p.deg; i >= 0; i--){
        os << *(p.coeff + i);
        if (i != 0) os << "x^" << i << " + ";
    }
    return os;
}