#include <stdio.h>

int main() {
    int pares[100];  

    for (int i = 0; i < 100; i++) {
        pares[i] = i * 2;
    }

    printf("Los primeros 100 números pares son:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", pares[i]);
    }

    printf("\n"); 
return 0;
}
