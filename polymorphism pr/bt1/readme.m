1) Lớp Person:
- Tên (char*);
- Tuổi (int);
- Địa chỉ (char*).
- Giới tính (bool): true – nam, false – nữ.
2) Lớp SinhVien: kế thừa từ lớp Person
- Mã số sinh viên (char*): gồm 10 ký tự (0, … 9), ký tự đầu tiên không được bắt đầu bằng ký tự “0”;
- Lớp (kiểu LopSinhHoat);
- Điểm trung bình (double): có giá trị trong khoảng 0 → 4.
3) Lớp Lecturer: kế thừa từ lớp Person
- Mã Lecturer (char*): 3 ký tự đầu là “102”, các ký tự tiếp theo lấy theo tên với quy tắc theo ví dụ: Lê Thị Mỹ Hạnh: “102ltmhanh”, Đặng Hoài Phương: “102dhphuong”;
- Cấp bậc của Lecturer (char*), ví dụ: assistant professor, associate professor, full professor, …
4) Lớp LopSinhHoat:
- Tên lớp sinh hoạt (char*), ví dụ: 16T1, 16T2, …;
- Danh sách các đối tượng sinh viên (sử dụng con trỏ trỏ đến mảng đối tượng);
- Giáo viên chủ nhiệm (kiểu Lecturer);
- Sĩ số sinh viên (int): số đối tượng sinh viên trong lớp (lưu ý cập nhật theo số đối tượng sinh viên hiện tại).
- Các chức năng quản lý ứng dụng sẽ viết trong lớp này.
- Đa năng hóa toán tử nhập xuất, toán tử truy cập [] và toán tử gán (=) cho lớp
