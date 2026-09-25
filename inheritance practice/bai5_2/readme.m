Xây dựng lớp TaiKhoanTietKiem kế thừa từ lớp TaiKhoan.

1) Lớp TaiKhoan
Lớp cơ sở quản lý số dư tài khoản:
- m_fSoDu: số dư tài khoản.
- baoSoDu(): trả về số dư hiện tại.
- napTien(): nạp tiền vào tài khoản.
- rutTien(): rút tiền nếu số tiền rút không vượt quá số dư.
2) Lớp TaiKhoanTietKiem
Kế thừa từ TaiKhoan và bổ sung:
- Kỳ hạn gửi
- Lãi suất
- Số tháng đã gửi
Các yêu cầu:
- Khi nạp tiền, số tháng đã gửi được tính lại từ đầu.
- Chỉ được rút tiền khi đã đến kỳ hạn.
- Cho phép tăng số tháng đã gửi.
- Tính số dư tại thời điểm hiện tại.
