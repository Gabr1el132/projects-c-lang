#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, a2, b2, distancia;
    printf("Digite as coordenadas de dois pontos: \n");
    scanf("%f%f%f%f", &a, &b, &a2, &b2);
    distancia = sqrt(pow(a2 - a, 2) + pow(b2 - b, 2));
    printf("Distancia entre os pontos: %.1f", distancia);
    return 0;
}