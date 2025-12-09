#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void chucNang1() {
    int x;
    printf("Nhap so nguyen x: ");
    scanf("%d", &x);
    printf("So %d la so nguyen.\n", x);

    int isPrime = 1;
    if (x < 2) isPrime = 0;
    else {
        for (int i = 2; i <= sqrt(x); i++) {
            if (x % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    printf("So %d %s la so nguyen to.\n", x, isPrime ? "" : "khong");

    int k = sqrt(x);
    printf("So %d %s la so chinh phuong.\n", x, (k * k == x) ? "" : "khong");
}

int UCLN(int a, int b) {
    while (b != 0) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int BCNN(int a, int b) {
    return (a * b) / UCLN(a, b);
}

void chucNang2() {
    int a, b;
    printf("Nhap 2 so a va b: ");
    scanf("%d %d", &a, &b);

    printf("UCLN cua %d va %d la: %d\n", a, b, UCLN(a, b));
    printf("BCNN cua %d va %d la: %d\n", a, b, BCNN(a, b));
}

void chucNang3() {
    int start, end;
    printf("Nhap gio bat dau: ");
    scanf("%d", &start);
    printf("Nhap gio ket thuc: ");
    scanf("%d", &end);

    if (start < 12 || end > 23 || start >= end) {
        printf("Gio khong hop le! (Quan hoat dong tu 12h - 23h)\n");
        return;
    }

    int gio = end - start;
    int gioDau = (gio >= 3) ? 3 : gio;
    int gioSau = (gio > 3) ? (gio - 3) : 0;

    double tien = gioDau * 150000 + gioSau * 150000 * 0.7;

    if (start >= 14 && start <= 17)
        tien *= 0.9;

    printf("Tien karaoke phai tra: %.0f VND\n", tien);
}

void chucNang4() {
    int kwh;
    printf("Nhap so kWh su dung: ");
    scanf("%d", &kwh);

    long tien = 0;

    if (kwh <= 50)
        tien = kwh * 1678;
    else if (kwh <= 100)
        tien = 50 * 1678 + (kwh - 50) * 1734;
    else if (kwh <= 200)
        tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
    else if (kwh <= 300)
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    else if (kwh <= 400)
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
    else
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;

    printf("Tien dien phai tra la: %ld VND\n", tien);
}

void chucNang5() {
    int tien;
    printf("Nhap so tien can doi: ");
    scanf("%d", &tien);

    int menhGia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int n = 9;

    printf("Ket qua doi tien:\n");
    for (int i = 0; i < n; i++) {
        int soTo = tien / menhGia[i];
        if (soTo > 0) {
            printf("%d to %d\n", soTo, menhGia[i]);
        }
        tien %= menhGia[i];
    }
}

void chucNang6() {
    double soTienGui, laiSuat;
    int thang;

    printf("Nhap so tien gui (VND): ");
    scanf("%lf", &soTienGui);

    printf("Nhap lai suat nam (%%): ");
    scanf("%lf", &laiSuat);

    printf("Nhap so thang gui: ");
    scanf("%d", &thang);

    double laiThang = laiSuat / 12 / 100;
    double tienLai = soTienGui * laiThang * thang;
    double tongTien = soTienGui + tienLai;

    printf("Tien lai: %.0lf VND\n", tienLai);
    printf("Tong tien nhan duoc: %.0lf VND\n", tongTien);
}

void chucNang7() {
    int phanTramVay;
    printf("Nhap phan tram vay (VD: 80): ");
    scanf("%d", &phanTramVay);

    double giaXe = 500000000;  // 500 trieu
    double soTienVay = giaXe * phanTramVay / 100;
    double tienTraTruoc = giaXe - soTienVay;

    int thoiHanNam = 24;
    int soThang = thoiHanNam * 12;
    double laiSuatNam = 7.2;
    double laiSuatThang = laiSuatNam / 12 / 100;

    double gocHangThang = soTienVay / soThang;
    double laiThangDau = soTienVay * laiSuatThang;
    double tongThangDau = gocHangThang + laiThangDau;

    printf("Tien tra truoc: %.0lf VND\n", tienTraTruoc);
    printf("So tien vay: %.0lf VND\n", soTienVay);
    printf("Tien tra thang dau: %.0lf VND\n", tongThangDau);
}

int main() {
    int choice;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Kiem tra so nguyen x\n");
        printf("2. UCLN & BCNN\n");
        printf("3. Tinh tien karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien\n");
        printf("6. Tinh lai tiet kiem\n");
        printf("7. Vay tien mua xe\n");
        printf("0. Thoat\n");

        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: chucNang1(); break;
            case 2: chucNang2(); break;
            case 3: chucNang3(); break;
            case 4: chucNang4(); break;
            case 5: chucNang5(); break;
            case 6: chucNang6(); break;
            case 7: chucNang7(); break;
            case 0: printf("Thoat chuong trinh.\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }
    } while (choice != 0);

    return 0;
}
