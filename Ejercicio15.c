
#include <stdio.h>

int main() {
    int arreglo[] = {3, -1, 0, 7, -5, 0, 2, -8};  // Puedes modificar los valores aquí
    int n = sizeof(arreglo) / sizeof(arreglo[0]);

    int positivos = 0, negativos = 0, nulos = 0;

    for (int i = 0; i < n; i++) {
        if (arreglo[i] > 0) {
            positivos++;
        } else if (arreglo[i] < 0) {
            negativos++;
        } else {
            nulos++;
        }
    }

    printf("Cantidad de positivos: %d\n", positivos);
    printf("Cantidad de negativos: %d\n", negativos);
    printf("Cantidad de nulos (ceros): %d\n", nulos);

    return 0;
}
