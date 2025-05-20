#include <stdio.h>

int main() {
    float sueldo, aumento, sueldo_final;

    printf("Introduce el sueldo del trabajador: ");
    scanf("%f", &sueldo);

    if (sueldo < 1000) {
        aumento = sueldo * 0.15; // 15% de aumento
    } else {
        aumento = sueldo * 0.12; // 12% de aumento
    }

    sueldo_final = sueldo + aumento;

    printf("El sueldo con el aumento es: %.2f\n", sueldo_final);

    return 0;
}
