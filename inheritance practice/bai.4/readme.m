# Bài tập: Quản lý rạp chiếu phim

Một rạp chiếu phim có M hàng ghế, mỗi hàng có N ghế.
Giá vé được tính theo vị trí ngồi:
- Càng xa hàng ghế trung tâm (cả trước lẫn sau) thì giá vé càng rẻ.
- Xa hơn một hàng ghế thì giá vé giảm 2.000 VNĐ.

Có 2 loại rạp:
### Rạp thường
- Giá vé ở hàng ghế trung tâm: 60.000 VNĐ.
### Rạp cao cấp
- Giá vé ở hàng ghế trung tâm: 100.000 VNĐ.
- Giảm 50% giá vé vào ngày thứ năm hàng tuần.

## Yêu cầu
Xây dựng lớp `RapThuong` và `RapCaoCap`, cho phép:
- Khởi tạo rạp phim với số lượng ghế M × N cho trước.
- Đặt vé tại một vị trí ghế nào đó.
- Cho biết giá vé tại một vị trí ghế nào đó.
- Cho biết một vị trí ghế nào đó còn trống không.
- Cho biết số ghế còn trống trong rạp.
- Tính tổng số tiền vé bán được.
