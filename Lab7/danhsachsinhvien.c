#include <stdio.h>

struct SinhVien {
    char maSV[30];
    char ten[50];
    int tuoi;
    float diem;
};
void xepHocLuc(float diem, char hocluc[]) {
    if (diem >= 8.0)
        sprintf(hocluc, "Gioi");
    else if (diem >= 6.5)
        sprintf(hocluc, "Kha");
    else if (diem >= 5.0)
        sprintf(hocluc, "Trung Binh");
    else
        sprintf(hocluc, "Yeu");
}
void nhapSV(struct SinhVien *sv) {
    fflush(stdin);

    printf("Nhap ma sinh vien: ");
    fgets(sv->maSV, 30, stdin);

    printf("Nhap ten: ");
    fgets(sv->ten, 50, stdin);

    printf("Nhap tuoi: ");
    scanf("%d", &sv->tuoi);

    printf("Nhap diem: ");
    scanf("%f", &sv->diem);
}
void xuatSV(struct SinhVien sv) {
    char hocluc[36];
    xepHocLuc(sv.diem, hocluc);

    printf("Ma SV: %sTen: %sTuoi: %d | Diem: %.2f | Hoc luc: %s\n",
           sv.maSV, sv.ten, sv.tuoi, sv.diem, hocluc);
}
void sapXepGiamDan(struct SinhVien ds[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].diem < ds[j].diem) {  // nếu điểm nhỏ hơn → đổi chỗ
                struct SinhVien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}

int main() {
    struct SinhVien ds[2];
    int n = 2  ;
    for (int i = 0; i < n; i++) {
        printf("\n--- Sinh vien %d ---\n", i + 1);
        nhapSV(&ds[i]);
    }
    sapXepGiamDan(ds, n);
    printf("\nDANH SACH SINH VIEN\n");
    for (int i = 0; i < n; i++) {
        printf("%d. ", i + 1);
        xuatSV(ds[i]);
    }

    return 0;
}

