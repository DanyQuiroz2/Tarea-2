#include <stdio.h>

int main() {
    int num1, num2;

    printf("Ingrese el primer número entero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número entero: ");
    scanf("%d", &num2);

    if (num2 % num1 == 0) {
        printf("%d es divisor de %d\n", num1, num2);
    }
   
    else if (num1 % num2 == 0) {
        printf("%d es divisor de %d\n", num2, num1);
    }
    else {
        printf("Ninguno de los dos números es divisor del otro\n");
    }

    return 0;
}
