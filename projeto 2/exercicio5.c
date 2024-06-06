#include <stdio.h>

int main()
{
    float lado1, lado2, lado3;
    printf("Digite o valor dos 3 lados do triangulo:\n");
    scanf("%f%f%f", &lado1, &lado2, &lado3);
    if (lado1 == lado2 && lado2 == lado3)
    {
       printf("Triangulo equilatero.");
    }
    else if ((lado1 == lado2 && lado1 != lado3) || (lado3 == lado2 && lado1 != lado3) || (lado1 == lado3 && lado2 != lado3))
    {
        printf("Triangulo isosceles.");
    }
    else
    {
        printf("Triangulo escaleno.");
    }
    return 0;
}