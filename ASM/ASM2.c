#include <stdio.h>
#include <math.h>
#include <stdlib.h> 

void chucNang1() {
    int x;
    printf("Nhap so nguyen x: ");
    scanf("%d", &x);
    int isPrime = 1;
    if (x < 2) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= (int)sqrt(x); i++) {
            if (x % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    printf("So %d la so nguyen to.n: %s\n", x, isPrime ? "co" : "khong");
    int k = (int)sqrt(x);
    printf("So %d la so chinh phuong.n: %s\n", x, (k * k == x) ? "co" : "khong");
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
    printf("Nhap 2 so nguyen: ");
    scanf("%d%d", &a, &b);
    printf("Uoc chung lon nhat: %d\n", UCLN(a, b));
    printf("Boi chung nho nhat: %d\n", BCNN(a, b));
}
void chucNang3() {
    int start, end;
    printf("Nhap gio bat dau: ");
    scanf("%d", &start);
    printf("Nhap gio ket thuc: ");
    scanf("%d", &end);
    if (start < 12 || end > 23 || start >= end) {
        printf("Gio khong hop le!\n");
        return;
    }

    int hours = end - start;
    double money = 0;
    int first3 = (hours > 3) ? 3 : hours;
    int remain = (hours > 3) ? hours - 3 : 0; 
    money = first3 * 150000 + remain * 150000 * 0.7; 
    if (start >= 14 && start <= 17) {
        money *= 0.9;
    }
    
    printf("Tong tien thanh toan: %.0f VNĐ\n", money);
}
void chucNang4() {
    int kwh;
    printf("Nhap so kwh su dung: ");
    scanf("%d", &kwh);

    double total = 0;
    double bac1 = 1.678; 
    double bac2 = 1.734; 
    double bac3 = 2.014; 
    double bac4 = 2.536; 
    double bac5 = 2.834; 
    double bac6 = 2.927; 

    if (kwh <= 50) {
        total = kwh * bac1;
    } else if (kwh <= 100) {
        total = 50 * bac1 + (kwh - 50) * bac2;
    } else if (kwh <= 200) {
        total = 50 * bac1 + 50 * bac2 + (kwh - 100) * bac3;
    } else if (kwh <= 300) {
        total = 50 * bac1 + 50 * bac2 + 100 * bac3 + (kwh - 200) * bac4;
    } else if (kwh <= 400) {
        total = 50 * bac1 + 50 * bac2 + 100 * bac3 + 100 * bac4 + (kwh - 300) * bac5;
    } else {
        total = 50 * bac1 + 50 * bac2 + 100 * bac3 + 100 * bac4 + 100 * bac5 + (kwh - 400) * bac6;
    }

    printf("So tien dien phai tra: %.0f VND\n", total);
}
void chucNang5() {
    int menhGia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1}; 
    int money;

    printf("Nhap so tien can doi (don vi nghin dong): ");
    scanf("%d", &money);

    printf("Ket qua doi tien:\n");
    for (int i = 0; i < 9; i++) {
        int count = money / menhGia[i];
        if (count > 0) {
            printf("%d to %dK\n", count, menhGia[i]);
            money %= menhGia[i];
        }
    }
}
void chucNang6() {
    long long tienVay;
    printf("Nhap so tien vay: ");
    scanf("%lld", &tienVay);
    long long gocThang = tienVay / 12;
    long long conLai = tienVay; 

    printf("STT | Lai | Goc | Tong | Con lai\n");
    printf("---------------------------------------\n");

    for (int i = 1; i <= 12; i++) {
        long long lai = (conLai * 5) / (12 * 100); 

        long long tong = lai + gocThang;
        conLai -= gocThang;

        printf("%3d | %3lld | %3lld | %4lld | %7lld\n", i, lai, gocThang, tong, conLai);
    }
}

// Hàm main chính để chạy menu
int main() {
    int choice;

    do {
        printf("\n\n--- MENU ---\n");
        printf("1. Kiem tra so nguyen to & chinh phuong\n");
        printf("2. Tim UCLN & BCNN\n");
        printf("3. Tinh tien Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien\n");
        printf("6. Tinh tien vay 12 thang\n");
        printf("0. Thoat\n");
        printf("Lua chon: ");
        if (scanf("%d", &choice) != 1) {
            printf("Loi nhap du lieu. Vui long nhap mot so.\n");
            setbuf(stdin, NULL); 
            choice = -1; 
            continue;
        }

        switch (choice) {
            case 1:
                chucNang1();
                break;
            case 2:
                chucNang2();
                break;
            case 3:
                chucNang3();
                break;
            case 4:
                chucNang4();
                break;
            case 5:
                chucNang5();
                break;
            case 6:
                chucNang6();
                break;
            case 0:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
                break;
        }
    } while (choice != 0);

    return 0;
}