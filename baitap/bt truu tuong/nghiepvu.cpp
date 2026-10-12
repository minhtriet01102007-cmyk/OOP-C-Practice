#include "nghiepvu.h"

NghiepVu::NghiepVu() {
    n = 0;
    capacity = 2;
    ds = new SV*[capacity];
}

NghiepVu::~NghiepVu() {
    for (int i = 0; i < n; i++) {
        delete ds[i];
    }

    delete[] ds;
}

void NghiepVu::moRong() {
    capacity *= 2;

    SV** dsMoi = new SV*[capacity];

    for (int i = 0; i < n; i++) {
        dsMoi[i] = ds[i];
    }

    delete[] ds;
    ds = dsMoi;
}
void NghiepVu::themSV() {
    int loai;

    cout << "\n1. Sinh vien IT";
    cout << "\n2. Sinh vien Co khi";
    cout << "\nChon loai sinh vien: ";
    cin >> loai;

    SV* sv = nullptr;

    if (loai == 1) {
        sv = new SVIT();
    } else if (loai == 2) {
        sv = new SVCK();
    } else {
        cout << "Loai sinh vien khong hop le!\n";
        return;
    }

    cin >> *sv;

    // Kiem tra trung MSSV
    for (int i = 0; i < n; i++) {
        if (ds[i]->getMSSV() == sv->getMSSV()) {
            cout << "MSSV da ton tai!\n";
            delete sv;
            return;
        }
    }

    if (n == capacity) {
        moRong();
    }

    ds[n] = sv;
    n++;

    cout << "Them sinh vien thanh cong!\n";
}
void NghiepVu::hienThiDS() {
    if (n == 0) {
        cout << "Danh sach rong!\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        cout << "\n========== SINH VIEN "
             << i + 1 << " ==========\n";

        ds[i]->show();
    }
}
void NghiepVu::timSV() {
    string ma;

    cout << "Nhap MSSV can tim: ";
    getline(cin >> ws, ma);

    for (int i = 0; i < n; i++) {
        if (ds[i]->getMSSV() == ma) {
            cout << "Tim thay sinh vien!\n";
            ds[i]->show();
            return;
        }
    }

    cout << "Khong tim thay sinh vien!\n";
}
void NghiepVu::suaSV() {
    string ma;

    cout << "Nhap MSSV can sua: ";
    getline(cin >> ws, ma);

    for (int i = 0; i < n; i++) {
        if (ds[i]->getMSSV() == ma) {
            string ten;
            double drl;

            cout << "Nhap ho ten moi: ";
            getline(cin >> ws, ten);
            ds[i]->setName(ten);

            do {
                cout << "Nhap DRL moi (0-100): ";
                cin >> drl;

                if (cin.fail()) {
                    cout << "Du lieu khong hop le!\n";
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }

                if (drl < 0 || drl > 100) {
                    cout << "DRL phai tu 0 den 100!\n";
                } else {
                    break;
                }
            } while (true);

            ds[i]->setDRL(drl);

            cout << "Cap nhat thanh cong!\n";
            return;
        }
    }

    cout << "Khong tim thay sinh vien!\n";
}
void NghiepVu::xoaSV() {
    string ma;

    cout << "Nhap MSSV can xoa: ";
    getline(cin >> ws, ma);

    for (int i = 0; i < n; i++) {
        if (ds[i]->getMSSV() == ma) {
            delete ds[i];

            for (int j = i; j < n - 1; j++) {
                ds[j] = ds[j + 1];
            }

            n--;

            cout << "Xoa sinh vien thanh cong!\n";
            return;
        }
    }

    cout << "Khong tim thay sinh vien!\n";
}
void NghiepVu::hienThiHocBong() {
    bool timThay = false;

    for (int i = 0; i < n; i++) {
        if (ds[i]->XHB()) {
            ds[i]->show();
            timThay = true;
        }
    }

    if (!timThay) {
        cout << "Khong co sinh vien du dieu kien hoc bong!\n";
    }
}
void NghiepVu::sapXepGPA() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i]->GPA() < ds[j]->GPA()) {
                SV* temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }

    cout << "Da sap xep GPA giam dan!\n";
    hienThiDS();
}