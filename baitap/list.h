#pragma once
#include "sv.h"
#include <string>

class List{
    private:
        SinhVien *SV;
        int count;
    public:
        List(SinhVien *SV, int count);
        ~List();
        SinhVien getSinhVien(int index) const;

        void addLast(SinhVien sinhvien);
        void addRange(SinhVien *arrSV, int dem);

        int indexOf(const SinhVien& sinhvien);
        void removeLast();
        void removeAt(const SinhVien& sinhvien);

        void update(const std::string& MSV);
        void searchName(const std::string& name);
        void sortGPA(bool (*cmp)(const SinhVien& a, const SinhVien& b));
        void displayAll() const;
        int getCount() const;
};