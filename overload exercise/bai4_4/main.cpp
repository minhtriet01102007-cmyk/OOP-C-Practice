#include <iostream>
#include "hs.h"
using namespace std;

int main(){
    HocSinh hs1("Nam",8, 9);
    HocSinh hs2("Tung",5, 6);

    if (hs1 > hs2) cout << "hs1 co DTB lon hon hs2" << endl;
    else cout << "hs1 khong co DTB lon hon hs2" << endl;
    
    hs1 = hs2;
    cout << "Sau khi gan hs1 = hs2:" << endl;
    if (hs1 > hs2) cout << "hs1 > hs2" << endl;
    else  cout << "hs1 khong > hs2" << endl;
    return 0;
}