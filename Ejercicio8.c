
#include <stdio.h>

int main() {
    int N, i = 1;
    unsigned long long producto = 1;

    printf("Ingrese un número natural N: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("Por favor, ingrese un número natural mayor o igual a 1.\n");
        return 1;
    }

    while (i <= N) {
        producto *= i;
        i++;
    }

    printf("El producto de los primeros %d números naturales es: %llu\n", N, producto);

    return 0;
}
