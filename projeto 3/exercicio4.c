#include <stdio.h>

int main()
{
    float s, numerador, denominador;
    numerador = 1;
    denominador = 1;
    s = 0;
    while (numerador <= 99)
    {
        s += numerador / denominador;
        numerador += 2;
        denominador++;
    }
    printf("\nS = %.1f", s);

    return 0;
}