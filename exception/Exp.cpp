#include "Exp.h"
Exp::Exp(string s) : msg(s){
}
Exp::~Exp(){
}
ostream& operator<<(ostream& o, const Exp& e){
    o << e.msg << endl;
    return o;
}