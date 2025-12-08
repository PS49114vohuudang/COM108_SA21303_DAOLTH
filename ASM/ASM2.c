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

int main() {
    chucNang1();
    return 0;
}
