#include <stdio.h>
#include <math.h>

int main ()
{
    float a, b, c, mgeometrica, mharmonica, mponderada;
    printf("Digite os valores de A, B, e C: \n");
    scanf("%f%f%f", &a, &b, &c);
    mgeometrica = cbrt(a * b * c);
    mharmonica = 3 / ((1 / a) + (1 / b) + (1 / c));
    mponderada = (1 * a + 2 * b + 3 * c) / (1 + 2 + 3);
    printf("Media geometrica: %.1f\nMedia harmonica: %.1f\nMedia ponderada: %.1f\n", mgeometrica, mharmonica, mponderada);
    return 0;
}