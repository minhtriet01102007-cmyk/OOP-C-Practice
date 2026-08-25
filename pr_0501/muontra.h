#include "date.h"
#include <string>
using namespace std;

class Muontra : public Date{
    private:
        string ma_docgia;
        string ma_sach;
        int so_luong;
        static double phi_cuoc;
    public:
        Muontra();
        void nhap();
        void xuat() const;
        double tinh() const;
};