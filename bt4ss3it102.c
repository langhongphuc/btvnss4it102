#include <stdio.h>

int main() {
    float diemToan, diemVan, diemAnh;
    float tongDiem, diemTrungBinh;

    printf("Nhap diem Toan: ");
    scanf("%f", &diemToan);

    printf("Nhap diem Van: ");
    scanf("%f", &diemVan);

    printf("Nhap diem Anh: ");
    scanf("%f", &diemAnh);

    tongDiem = diemToan + diemVan + diemAnh;
    diemTrungBinh = tongDiem / 3.0;

    printf("Tong diem la: %.2f\n", tongDiem);
    printf("Diem trung binh la: %.2f\n", diemTrungBinh);

    return 0;
}

