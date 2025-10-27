#include <stdio.h>

int main() {
    int a, b, c, temp;

    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);
    printf("Nhap so nguyen thu ba: ");
    scanf("%d", &c);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("\nCac so sau khi sap xep la: %d, %d, %d\n", a, b, c);

    return 0;
}

