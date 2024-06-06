#include <stdio.h>

int main() 
{
    float perimetro, raio, pi, area;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    pi = 3.14;
    area = pi * (raio * raio);
    perimetro = 2 * pi * raio;
    printf("A area do circulo corresponde a %.3f e o perimetro a %.3f.", area, perimetro);
    return 0;
}