#include <stdio.h>

int main() {
    int choice;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Tinh trung binh cac so tu nhien chia het cho 2\n");
        printf("2. Kiem tra so nguyen to\n");
        printf("3. Kiem tra so chinh phuong\n");
        printf("0. Thoat\n");
        printf("Moi ban chon: ");
        scanf("%d", &choice);

        if (choice == 1) {
            // ================= Bài 1 =================
            int min, max, i;
            float tong = 0, bienDem = 0, trungBinh = 0;

            printf("Nhap min: ");
            scanf("%d", &min);
            printf("Nhap max: ");
            scanf("%d", &max);

            i = min;
            while (i <= max) {
                if (i % 2 == 0) {
                    tong += i;
                    bienDem++;
                }
                i++;
            }

            if (bienDem == 0) {
                printf("Khong co so chan nao trong khoang nay!\n");
            } else {
                trungBinh = tong / bienDem;
                printf("Trung binh cac so chan tu %d den %d = %.2f\n", min, max, trungBinh);
            }
        }

        else if (choice == 2) {
            // ================= Bài 2 =================
            int x, i, count = 0;
            printf("Nhap so x: ");
            scanf("%d", &x);

            if (x < 2) {
                printf("%d khong phai so nguyen to!\n", x);
            } else {
                for (i = 2; i < x; i++) {
                    if (x % i == 0) {
                        count++;
                        break;
                    }
                }

                if (count == 0)
                    printf("%d la so nguyen to!\n", x);
                else
                    printf("%d khong phai so nguyen to!\n", x);
            }
        }

        else if (choice == 3) {
            // ================= Bài 3 =================
            int x, i, isCP = 0;
            printf("Nhap so x: ");
            scanf("%d", &x);

            for (i = 1; i * i <= x; i++) {
                if (i * i == x) {
                    isCP = 1;
                    break;
                }
            }

            if (isCP)
                printf("%d la so chinh phuong!\n", x);
            else
                printf("%d khong phai so chinh phuong!\n", x);
        }

    } while (choice != 0);

    printf("Chuong trinh ket thuc.\n");
    return 0;
}
