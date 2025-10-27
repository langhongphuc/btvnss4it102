#include <stdio.h>

int main() {
    int chiSoCu, chiSoMoi;
    int soDienTieuThu;
    double tienDien = 0;

    printf("Nhap chi so dien cu (kWh): ");
    scanf("%d", &chiSoCu);
    printf("Nhap chi so dien moi (kWh): ");
    scanf("%d", &chiSoMoi);

    soDienTieuThu = chiSoMoi - chiSoCu;

    if (soDienTieuThu >= 0 && soDienTieuThu < 50) {
        tienDien = soDienTieuThu * 10000;
    } else if (soDienTieuThu >= 50 && soDienTieuThu < 100) {
        tienDien = 50 * 10000 + (soDienTieuThu - 50) * 15000;
    } else if (soDienTieuThu >= 100 && soDienTieuThu < 150) {
        tienDien = 50 * 10000 + 50 * 15000 + (soDienTieuThu - 100) * 20000;
    } else if (soDienTieuThu >= 150 && soDienTieuThu < 200) {
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (soDienTieuThu - 150) * 25000;
    } else if (soDienTieuThu >= 200) {
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (soDienTieuThu - 200) * 30000;
    } else {
        printf("Chi so dien khong hop le.\n");
        return 1;
    }

    printf("So kWh tieu thu: %d\n", soDienTieuThu);
    printf("So tien dien phai tra: %.2lf VNÐ\n", tienDien);

    return 0;
}
