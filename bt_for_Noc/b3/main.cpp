#include <iostream>
#include "db.h"
using namespace std;

int main(){
    Truong& truong = Truong::getInstance();
    cout << "Cung mot instance: "
         << (&truong == &Truong::getInstance() ? "dung" : "sai") << endl;
    // Truong -> LSH
    truong.themLop("22T1", "CNTT");
    truong.themLop("22T2", "DTVT");
    truong.themLop("22T1", "CNTT"); // trùng lớp -> báo lỗi
    // LSH -> SV
    truong.themSV("22T1", "102220001", "Nguyen Van A", 3.5);
    truong.themSV("22T1", "102220002", "Tran Van B", 3.2);
    truong.themSV("22T1", "102220003", "Le Van C", 3.8);
    truong.themSV("22T2", "102220004", "Pham Van D", 3.1);
    truong.themSV("22T2", "102220005", "Hoang Van E", 3.9);
    truong.themSV("22T2", "102220001", "Trung MSSV", 2.0); // trùng toàn trường -> báo lỗi
    truong.hienThiTatCa();
 
    cout << "\n===== TIM KIEM TOAN TRUONG =====\n";
    SV* sv = truong.timSV("102220002");
    if (sv != nullptr) {
        sv->show();
        cout << "Lop sinh hoat: " << sv->getLSH()->getTenLop()
             << " (" << sv->getLSH()->getKhoa() << ")" << endl;
    }

    cout << "\n===== SV GPA CAO NHAT TRUONG =====\n";
    SV* best = truong.svGPACaoNhat();
    if (best != nullptr) {
        best->show();
        cout << "Lop: " << best->getLSH()->getTenLop() << endl;
    }

    cout << "\n===== SAP XEP GPA LOP 22T1 =====\n";
    truong.timLop("22T1")->sapXepGPA();
    truong.timLop("22T1")->hienThiDS();

    cout << "\n===== CHUYEN LOP =====\n";
    if (truong.chuyenSV("102220003", "22T2"))
        cout << truong.timSV("102220003")->getName() << " -> lop "
             << truong.timSV("102220003")->getLSH()->getTenLop() << endl;

    cout << "\n===== XOA SV, XOA LOP =====\n";
    truong.xoaSV("102220002");
    truong.xoaLop("22T2");
    truong.hienThiTatCa();

    return 0;
}