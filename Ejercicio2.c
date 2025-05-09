#include <stdio.h>

int main() {
    float radio, area, circunferencia;
    const float PI = 3.1416;

    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);

    area = PI * radio * radio;
    circunferencia = 2 * PI * radio;

    printf("Área del círculo: %.2f\n", area);
    printf("Circunferencia del círculo: %.2f\n", circunferencia);

    return 0;
}

