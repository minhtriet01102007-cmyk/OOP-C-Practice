#include <iostream>
#include "Point.h" 
using namespace std;

// Class Template Vector
template <typename T>
class Vector;

template <typename T>
ostream& operator<<(ostream&, const Vector<T>&);

template <typename T>
class Vector{
    private:
        T *p;
        int n;
    public:
        Vector(const int& = 0);
        ~Vector();
        void Show();
        T& operator[](const int&);
        friend ostream& operator<<<T>(ostream&, const Vector<T>&);
};

template <typename T>
ostream& operator<<(ostream& o, const Vector<T>& v){
    for (int i = 0; i < v.n; i++){
        o << *(v.p + i); 
    }
    return o;
}

template <typename T>
T& Vector<T>::operator[](const int& index){
    return *(this->p + index);
}

template <typename T>
Vector<T>::Vector(const int& n) : n(n){
    this->p = new T[this->n];
    for (int i = 0; i < this->n; i++){
        cin >> (*this)[i];
    }
}

template <typename T>
Vector<T>::~Vector(){
    delete[] this->p;
}

template <typename T>
void Vector<T>::Show(){
    for (int i = 0; i < this->n; i++){
        cout << (*this)[i] << " ";
    }
    cout << endl;
}

// Explicit instantiation (Khởi tạo tường minh các kiểu dữ liệu mẫu)
template class Vector<int>;
template class Vector<double>;
// template class Vector<Point, 3>;