#include <stdio.h>

// ================= BAI 1 =================
int my_min(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

int my_max(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

// ================= BAI 2 =================
int is_leap_year(int year) {
    if (year % 400 == 0)
        return 1;
    if (year % 4 == 0 && year % 100 != 0)
        return 1;
    return 0;
}

// ================= MAIN =================
int main() {
    int choice;

    do {
        printf("\n===== MENU CHUONG TRINH =====\n");
        printf("1. Tim min - max cua 3 so\n");
        printf("2. Kiem tra nam nhuan\n");
        printf("3. Kiem tra so chia het cho 5 va 9\n");
        printf("0. Thoat chuong trinh\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1: {
            int a, b, c;
            printf("Nhap 3 so: ");
            scanf("%d %d %d", &a, &b, &c);

            printf("So nho nhat: %d\n", my_min(a, b, c));
            printf("So lon nhat: %d\n", my_max(a, b, c));
            break;
        }

        case 2: {
            int year;
            printf("Nhap nam: ");
            scanf("%d", &year);

            if (is_leap_year(year))
                printf("%d la nam nhuan\n", year);
            else
                printf("%d khong phai nam nhuan\n", year);
            break;
        }

        case 3: {
            int n;
            printf("Nhap so trong khoang 1..1000: ");
            scanf("%d", &n);

            if (n >= 1 && n <= 1000) {
                if (n % 5 == 0 && n % 9 == 0)
                    printf("%d chia het cho 5 va 9\n", n);
                else
                    printf("%d KHONG chia het cho 5 va 9\n", n);
            } else {
                printf("So nhap khong hop le!\n");
            }
            break;
        }

        case 0:
            printf("Thoat chuong trinh...\n");
            break;

        default:
            printf("Lua chon khong hop le!\n");
        }

    } while (choice != 0);

    return 0;
}
