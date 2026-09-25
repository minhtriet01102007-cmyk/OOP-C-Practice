#pragma once

class TaiKhoan{
    private:
        float m_fSoDu = 0;
    public:
        float baoSoDu(){
        return m_fSoDu;
        }
        void napTien(float fSoTien){
        m_fSoDu += fSoTien;
        }
        void rutTien(float fSoTien){
            if (fSoTien <= m_fSoDu) m_fSoDu -= fSoTien;
        }
};
