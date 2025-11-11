#include <stdio.h>
#define PI 3.14

int main()
{// #BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ 
    int x, y, tong, hieu;
    printf("Nhap vao 2 so nguyen x va y:");
    scanf("%d %d", &x, &y);
    tong = x + y;
    hieu = x - y;
    printf("Tong cua 2 so nguyen la: %d\n", tong);
    printf("Hieu cua 2 so nguyen la: %d\n", hieu);
   
// #BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
    float cdai, crong;
    float chuvi, dientich;
    printf("Nhap chieu dai va chieu rong hinh chu nhat: ");
    scanf("%f %f", &cdai, &crong);
    chuvi=(cdai + crong)*2;
    dientich=cdai*crong;
    printf("Chu vi hinh chu nhat la: %.2f\n", chuvi);
    printf("Dien tich hinh chu nhat la: %.2f\n", dientich);

// #BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN

   double banKinh, chuvi_tron, dientich_tron;
    printf("Nhap vao ban kinh hinh tron:");
    scanf("%lf", &banKinh);
    chuvi_tron = 2 * PI * banKinh;
    dientich_tron = PI * banKinh * banKinh;
    printf("Chu vi hinh tron la: %.2lf\n", chuvi_tron);
    printf("Dien tich hinh tron la: %.2lf\n", dientich_tron);
    
 //#Bài 4: TÍNH ĐIỂM TRUNG BÌNH TOÁN, LÝ, HOÁ

    float toan, ly, hoa, dtb;
    printf("Nhap diem toan, ly, hoa: ");
    scanf("%f %f %f", &toan, &ly, &hoa);
    dtb = (toan + ly + hoa) / 3;
    printf("Diem trung binh la: %.2f\n", dtb);
//#Bài 5: Tính Chu VI, Diện Tích Hình Tam Giác Vuông

     float canh1, canh2;
    printf("\nnhap vao 2 canh ke hinh tam giac vuong: ");
    scanf("%f %f", &canh1, &canh2);
    float chuvi_tamgiac = canh1 + canh2 + (float)(canh1*canh1 + canh2*canh2);
    float dientich_tamgiac = (canh1 * canh2) / 2;
    printf("chu vi hinh tam giac vuong: %.2f", chuvi_tamgiac);
    printf("\ndien tich hinh tam giac vuong: %.2f", dientich_tamgiac);
    return 0;
}