#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);

    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    printf("Nhap so thu ba: ");
    scanf("%d", &num3);

    if ((num3 >= num1 && num3 <= num2) || (num3 >= num2 && num3 <= num1)) {
        printf("So thu 3 nam trong khoang giua so 1 va so 2\n");
    } else {
        printf("So thu 3 khong nam trong khoang giua so 1 va so 2\n");
    }

    return 0;
}

