#include <stdio.h>

int main() {
    int N;

    // Solicitar al usuario el número para la tabla de multiplicar
    printf("Ingrese un número entero: ");
    scanf("%d", &N);

    // Mostrar la tabla de multiplicar de N
    printf("\nTabla de multiplicar de %d:\n", N);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}
