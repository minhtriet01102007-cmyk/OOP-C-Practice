#include <iostream>
#include "taikhoantk.h"
using namespace std;

int main(){
    TaiKhoanTietKiem tk(6, 0.005);
    tk.napTien(10000000);
    cout << "So du ban dau: " << tk.baoSoDu() << endl;
    // Gửi được 6 tháng
    for (int i = 0; i < 6; i++){
        tk.tangThang();
    }
    cout << "So du hien tai: " << tk.tinhSoDu() << endl;
    // Rút 2 triệu
    tk.rutTien(2000000);
    cout << "So du sau khi rut: " << tk.baoSoDu() << endl;
    return 0;
}