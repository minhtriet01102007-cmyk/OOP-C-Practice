#include <iostream>
using namespace std;
// function template 
template<typename T>
void HV(T& a, T& b){
    T t=a;
    a=b;
    b=t;
}
void HV(double& a, double& b){
    cout << a << ", " << b << endl;
}
template <typename T, typename U>
void A(T a, U b){
    cout << a << ", " << b << endl;
}
int main(){
    int x=1, y=2;
    double x1=1.1, y1=2.2;
    HV<int>(x,y); // gọi tường minh
    HV(x1,y1); // gọi ngầm định
    cout << x << ", " << y << endl;
    cout << x1 << ", " << y1 << endl;
    A<int,double>(1,1.1);
    A<int,int>(1,2);
}
