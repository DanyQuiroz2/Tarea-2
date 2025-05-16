#include <stdio.h>

int main()
{
    float capital_inicial, tasa_interes, monto_final;

    printf("Ingrese el capital inicial: ");
    scanf("%f", &capital_inicial);

    printf("Ingrese la tasa de interés mensual (en %%): ");
    scanf("%f", &tasa_interes);

    monto_final = capital_inicial + (capital_inicial * tasa_interes / 100);

    printf ("El monto al finalizar el mes será: %.2f\n", monto_final);

    return 0;
}
