#include <stdio.h>

int main() {
    int num1, num2;
    
    // Solicitar al usuario los dos números
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    
    // Calcular y mostrar los resultados
    printf("\nResultados:\n");
    printf("Suma: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Resta: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplicación: %d * %d = %d\n", num1, num2, num1 * num2);
    
    return 0;
}
