#include <stdio.h>

// =============================
// HÀM CHỨC NĂNG 1 – KIỂM TRA SỐ NGUYÊN
// =============================
void chuongTrinh1() {
    int x;
    printf("Nhap 1 so nguyen: ");
    scanf("%d", &x);
    printf("Ban da nhap so: %d\n", x);
}

// =============================
// HÀM CHỨC NĂNG 2 – ƯỚC SỐ CHUNG & BỘI CHUNG
// =============================
int gcd(int a, int b) {  // hàm tính UCLN
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

void chuongTrinh2() {
    int x, y;
    printf("Nhap so x: ");
    scanf("%d", &x);
    printf("Nhap so y: ");
    scanf("%d", &y);

    int ucln = gcd(x, y);
    int bcnn = (x * y) / ucln;

    printf("Uoc so chung lon nhat: %d\n", ucln);
    printf("Boi so chung nho nhat: %d\n", bcnn);
}

// =============================
// HÀM CHỨC NĂNG 3 – TÍNH TIỀN KARAOKE
// =============================
void chuongTrinh3() {
    int start, end;
    printf("Nhap gio bat dau: ");
    scanf("%d", &start);
    printf("Nhap gio ket thuc: ");
    scanf("%d", &end);

    if (start >= end) {
        printf("Gio khong hop le!\n");
        return;
    }

    int soGio = end - start;
    float tongTien;

    if (soGio <= 2) tongTien = soGio * 30000;
    else tongTien = 2 * 30000 + (soGio - 2) * 30000 * 0.7;

    printf("So gio: %d\n", soGio);
    printf("Tong tien: %.0f VND\n", tongTien);
}

// =============================
// HÀM CHỨC NĂNG 4 – TÍNH TIỀN ĐIỆN
// =============================
void chuongTrinh4() {
    int soDien;
    printf("Nhap so dien: ");
    scanf("%d", &soDien);

    int tien = 0;

    if (soDien <= 50) tien = soDien * 1678;
    else if (soDien <= 100) tien = 50 * 1678 + (soDien - 50) * 1734;
    else if (soDien <= 200) tien = 50 * 1678 + 50 * 1734 + (soDien - 100) * 2014;
    else tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (soDien - 200) * 2536;

    printf("Tien dien: %d VND\n", tien);
}

// =============================
// HÀM CHỨC NĂNG 5 – ĐỔI TIỀN
// =============================
void chuongTrinh5() {
    int money;
    printf("Nhap so tien can doi: ");
    scanf("%d", &money);

    int menhGia[] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000};
    for (int i = 0; i < 9; i++) {
        int soTo = money / menhGia[i];
        if (soTo > 0) {
            printf("%d VND: %d to\n", menhGia[i], soTo);
            money %= menhGia[i];
        }
    }
}

// =============================
// HÀM CHỨC NĂNG 6 – LÃI SUẤT NGÂN HÀNG
// =============================
void chuongTrinh6() {
    float tien, lai, thang;
    printf("Nhap so tien vay: ");
    scanf("%f", &tien);
    printf("Nhap lai suat (%%/thang): ");
    scanf("%f", &lai);
    printf("Nhap so thang: ");
    scanf("%f", &thang);

    float tong = tien;
    for (int i = 0; i < thang; i++) tong += tong * (lai / 100);

    printf("Tong tien phai tra: %.0f VND\n", tong);
}

// =============================
// HÀM CHỨC NĂNG 7 – VAY MUA XE
// =============================
void chuongTrinh7() {
    float tienXe, lai, thang;
    printf("Nhap gia xe: ");
    scanf("%f", &tienXe);
    printf("Nhap lai suat %% theo thang: ");
    scanf("%f", &lai);
    printf("Nhap so thang vay: ");
    scanf("%f", &thang);

    float traMoiThang = (tienXe / thang) + (tienXe * lai / 100);
    printf("Tien phai tra moi thang: %.0f VND\n", traMoiThang);
}

// =============================
// HÀM CHỨC NĂNG 8 – SẮP XẾP SV
// =============================
void chuongTrinh8() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    int a[100];
    for (int i = 0; i < n; i++) {
        printf("Nhap diem SV %d: ", i+1);
        scanf("%d", &a[i]);
    }

    // sort
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (a[i] > a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }

    printf("Danh sach sau sap xep: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

// =============================
// HÀM CHỨC NĂNG 9 – GAME LOTTO
// =============================
void chuongTrinh9() {
    int x;
    printf("Nhap so ban doan (1-99): ");
    scanf("%d", &x);

    int lucky = 55;  // số may mắn mẫu

    if (x == lucky) printf("Ban da trung giai!\n");
    else printf("Khong trung giai. So may man la: %d\n", lucky);
}

// =============================
// HÀM CHỨC NĂNG 10 – TÍNH TOÁN PHÂN SỐ
// =============================
void chuongTrinh10() {
    int tu1, mau1, tu2, mau2;
    printf("Nhap phan so thu 1 (tu mau): ");
    scanf("%d %d", &tu1, &mau1);
    printf("Nhap phan so thu 2 (tu mau): ");
    scanf("%d %d", &tu2, &mau2);

    int tu = tu1 * mau2 + tu2 * mau1;
    int mau = mau1 * mau2;

    printf("Tong hai phan so = %d / %d\n", tu, mau);
}

// =============================
// HÀM MAIN – MENU
// =============================
int main() {
    int luaChon;

    do {
        printf("\n===== MENU CHUONG TRINH =====\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Uoc so chung & boi so chung\n");
        printf("3. Tinh tien karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien\n");
        printf("6. Lai suat ngan hang\n");
        printf("7. Vay tien mua xe\n");
        printf("8. Sap xep sinh vien\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. Tinh toan phan so\n");
        printf("0. Thoat chuong trinh\n");
        printf("Nhap lua chon: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1: chuongTrinh1(); break;
            case 2: chuongTrinh2(); break;
            case 3: chuongTrinh3(); break;
            case 4: chuongTrinh4(); break;
            case 5: chuongTrinh5(); break;
            case 6: chuongTrinh6(); break;
            case 7: chuongTrinh7(); break;
            case 8: chuongTrinh8(); break;
            case 9: chuongTrinh9(); break;
            case 10: chuongTrinh10(); break;
            case 0: printf("Thoat chuong trinh!\n"); break;
            default: printf("Lua chon khong hop le!\n"); break;
        }

    } while (luaChon != 0);

    return 0;
}