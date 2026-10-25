#include "vector.h"

template <class T>
Vector<T>::Vector(){
    cout << "vector" << endl;
}

template <class T>
Vector<T>::Vector(int size, const T& t){
    cout << "vector2" << endl;
    this->size = size;
    this->Data = new T[size];
    for (int i = 0; i < this->size; i++){
        *(this->Data + i) = t;
    }
}

template <class T>
Vector<T>::~Vector(){ 
    delete[] this->Data;
}

template <class T>
void Vector<T>::show(){ 
    for(int i = 0; i < this->size; i++){
        cout << *(this->Data + i) << " ";
    }
    cout << endl;
}