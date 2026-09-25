#include "taikhoantk.h"

TaiKhoanTietKiem::TaiKhoanTietKiem(int kyHan, float laiSuat, int soThangDaGui){
    this->kyHan = kyHan;
    this->laiSuat = laiSuat;
    this->soThangDaGui = soThangDaGui;
}
void TaiKhoanTietKiem::napTien(float fSoTien){
    TaiKhoan::napTien(fSoTien);
    this->soThangDaGui = 0;
}
void TaiKhoanTietKiem::tangThang(){
    this->soThangDaGui++;
}
void TaiKhoanTietKiem::rutTien(float fSoTien){
    if (this->soThangDaGui >= this->kyHan){
        TaiKhoan::rutTien(fSoTien);
    }
}
float TaiKhoanTietKiem::tinhSoDu(){
    return TaiKhoan::baoSoDu() + TaiKhoan::baoSoDu() * this->laiSuat * this->soThangDaGui;
}