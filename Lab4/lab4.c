#include <stdio.h>

int main() {
    int min, max;
    printf("Nhap min: ");
    scanf("%d", &min);
    printf("Nhap max: ");
    scanf("%d", &max);

    int i = min;
    float tong = 0, bienDem = 0, trungBinh = 0;

    while(i <= max){
        if(i % 2 == 0){
            tong += i;
            bienDem++;
        }
        i++;
    }

    if(bienDem > 0){
        trungBinh = tong / bienDem;
        printf("Trung binh cong cac so chan tu %d den %d = %.2f\n", min, max, trungBinh);
    } else {
        printf("Khong co so chan trong khoang!\n");
    }

    return 0;
}
