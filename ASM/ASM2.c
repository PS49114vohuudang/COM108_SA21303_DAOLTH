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
    printf("So %d %s la so nguyen to.\n", x, isPrime ? " " : "khong");

    int k = sqrt(x);
    printf("So %d %s la so chinh phuong.\n", x, (k * k ==x) ? " " : "khong");
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
int main() {
    int choice;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Kiem tra so nguyen / so nguyen to / so chinh phuong\n");
        printf("2. Tim UCLN & BCNN\n");
        printf("3. Tinh tien karaoke\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: chucNang1(); break;
            case 2: chucNang2(); break;
            case 3: chucNang3(); break;
            case 0: printf("Thoat chuong trinh.\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }

    } while (choice != 0);

    return 0;
}
