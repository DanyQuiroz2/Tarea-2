#include <stdio.h>

int main() {
    int n, i, buscar, contador = 0;

    printf("Ingrese la cantidad de elementos del arreglo: ");
    scanf("%d", &n);

    int arreglo[n];  // Declarar el arreglo

    printf("Ingrese %d números enteros:\n", n);
    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    printf("Ingrese el número que desea buscar: ");
    scanf("%d", &buscar);

    for (i = 0; i < n; i++) {
        if (arreglo[i] == buscar) {
            contador++;
        }
    }

    printf("El número %d aparece %d vez/veces en el arreglo.\n", buscar, contador);

    return 0;
}
