#include <stdio.h>

int main() {
    int thang, nam;

    printf("Nhap thang (1-12): ");
    scanf("%d", &thang);

    if (thang < 1 || thang > 12) {
        printf("Thang khong hop le.\n");
        return 1;
    }

    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
        printf("Thang %d có 31 ngày.\n", thang);
    }
    else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        printf("Thang %d co 30 ngay.\n", thang);
    }
    else {
        printf("Nhap nam de xac dinh so ngay trong thang 2: ");
        scanf("%d", &nam);
        if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) {
            printf("Thang 2 cua nam %d co 29 ngay (nam nhuan).\n", nam);
        } else {
            printf("Thang 2 cua nam %d co 28 ngay.\n", nam);
        }
    }

    return 0;
}

