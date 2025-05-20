include <stdio.h>

int main() {
    int i = 10;  // Comienza desde 10
    int suma = 0;

   
    while (i <= 50) {
        if (i % 2 == 0) {
            suma += i;  // Sumar solo si es par
        }
        i++;
    }

    printf("La suma de los números pares entre 10 y 50 es: %d\n", suma);

    return 0;
}
