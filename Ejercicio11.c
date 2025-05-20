#include <stdio.h>

int main ()
{
    int a, b, c;
    
    printf ("Indique en kilometros la distancia de ida: ");
    scanf ("%i", &a);
    
    printf ("Indique el numero de dias de estancia: ");
    scanf ("%i", &b);
    
    a = a * 2;
    c = a * 0.23;
    
    if (b > 7 && a > 800)
    {
        c = c * 0.7;
    }
    
    printf("El precio del ticket es: $%.2i\n", c);
    
    return 0;
}
