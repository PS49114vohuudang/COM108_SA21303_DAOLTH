#include <stdio.h>

int main() {
    int x,y;
    int tong = 0;
    printf("Hello, World!\n");
    printf("Hello, World!\n");
    printf("Nhap vao hai so nguyen x va y: ");
    scanf("%d %d", &x, &y);
    tong = x + y;
    printf("Tong cua %d va %d la: %d\n", x, y, tong);
    return 0;
}