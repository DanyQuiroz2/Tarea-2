
#include <stdio.h>

int main() {
    int numero;
    int positivos = 0;
    int negativos = 0;
    int nulos = 0;

    for (int i = 1; i <= 100; i++) {
        printf("Introduce el número %d: ", i);
        scanf("%d", &numero);

        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        } else {
            nulos++;
        }
    }

    printf("\nResultados:\n");
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);

    return 0;
}
