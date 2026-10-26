#include <iostream>
using namespace std;

class Point{
    protected:
        int xval;
        int yval;
    public:
        Point(const Point&);
        Point(const int& = 2, const int& = 2);
        virtual ~Point();
        friend ostream& operator<<(ostream&, const Point&);
        friend istream& operator>>(istream&, Point&);
};

Point::Point(const Point& p) : xval(p.xval), yval(p.yval){
}

Point::Point(const int& x, const int& y) : xval(x), yval(y){
}

Point::~Point(){
}

ostream& operator<<(ostream& o, const Point& p){
    o << p.xval << ", " << p.yval << endl;
    return o;
}

istream& operator>>(istream& in, Point& p){
    cout << "xval = ";
    in >> p.xval;
    cout << "yval = ";
    in >> p.yval;
    return in;
}