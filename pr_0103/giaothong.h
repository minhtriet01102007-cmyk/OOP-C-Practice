#include <string>

class PhuongTienGiaoThong{
    private:
        std::string hang_sx;
        std::string ten_phuongtien;
        int nam_sx;
        float v_max;
    public:
        PhuongTienGiaoThong();
        PhuongTienGiaoThong(std::string hang_sx, std::string ten_phuongtien,
                            int nam_sx, float v_max);
        virtual ~PhuongTienGiaoThong();
        virtual void nhap();
        virtual void xuat() const;
        float getVmax() const;
};
