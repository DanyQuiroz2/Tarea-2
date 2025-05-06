#include <stdio.h>

int main() {
    float monto, descuento, total;

    // Solicitar al usuario el monto de la compra
    printf("Ingrese el monto de su compra: $");
    scanf("%f", &monto);

    // Verificar si el monto es mayor a $2,500
    if (monto > 2500) {
        // Calcular el descuento del 8%
        descuento = monto * 0.08;
        // Calcular el total a pagar después del descuento
        total = monto - descuento;
        printf("\n¡Felicidades! Se ha aplicado un descuento del 8%%.\n");
        printf("Monto del descuento: $%.2f\n", descuento);
        printf("Total a pagar: $%.2f\n", total);
    } else {
        // No se aplica descuento
        total = monto;
        printf("\nNo se aplica descuento.\n");
        printf("Total a pagar: $%.2f\n", total);
    }

    return 0;
}
