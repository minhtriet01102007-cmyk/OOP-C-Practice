#pragma once
#include <string>

class SinhVien{
    private:
        std::string masv;
        std::string tensv;
        std::string ngaysinh;
        double GPA;
    public:
        SinhVien();
        SinhVien(std::string masv, std::string tensv, std::string ngaysinh, double GPA);
        SinhVien(const SinhVien&);
        ~SinhVien();

        std::string getMasv() const;
        std::string getTensv() const;
        std::string getNgaysinh() const;
        double getGPA() const;

        void setMaSV(std::string masv);
        void setTensv(std::string tensv);
        void setNgaysinh(std::string ngaysinh);
        void setGPA(double setGPA);

        void nhap();
        void show() const;

};