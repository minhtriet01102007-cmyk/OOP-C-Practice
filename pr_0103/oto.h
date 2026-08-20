#include "giaothong.h"
#include <string>

class OTo: public PhuongTienGiaoThong{
    private:
        int so_cho;
        std::string kieu_dongco;
    public:
        OTo();
        OTo(std::string hang_sx, std::string ten_phuongtien, int nam_sx, 
            float v_max, int so_cho, std::string kieu_dongco);
        ~OTo();
        void nhap() override;
        void xuat() const override;
        float vantocoso() const;
        bool operator<(const OTo& other) const;
};