#include <stdio.h>
int is_leap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}

int main() {
    int day, month, year;

    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);

    if (month < 1 || month > 12) {
        printf("Ngay thang nam khong hop le.\n");
        return 0;
    }

    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (is_leap(year)) {
        days_in_month[2] = 29;
    }

    if (day < 1 || day > days_in_month[month]) {
        printf("Ngay thang nam khong hop le.\n");
        return 0;
    }
    
    printf("Ngay thang nam hop le.\n");

    return 0;
}

