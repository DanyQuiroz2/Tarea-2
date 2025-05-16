int main ()
{
    int a, b;
    
    printf ("dolares que desea transformar");
    scanf ("%i", &a);

    b = a * 11.96;

    printf("en pesos equivale a: %.2i\n", b);

    return 0;
}
