#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float letraA, letraB, letraC, letraD;
    printf("Digite os valores para A, B e C nessa ordem:\n");
    scanf("%f%f%f", &a, &b, &c);
    letraA = (a * b) / c;
    letraB = pow(a, 2) + b + 5 * c;
    letraC = (a * b * c) + (c / 3) * 5 + 1;
    letraD = pow(a * b * c, 3) / 2;
    printf("Letra A:%.1f \nLetra B:%.1f \nLetra C:%.1f \nLetra D:%.1f ", letraA, letraB, letraC, letraD);
    return 0;
}