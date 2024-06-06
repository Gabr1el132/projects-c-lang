#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, raiz1, raiz2;
    printf("Digite os coeficientes de a, b e c:\n");
    scanf("%f%f%f", &a, &b, &c);
    if ((a != 0) && (b == 0 || c == 0))
    {
        printf("Nao eh uma equacao de segundo grau.");
    }
    else
    {
        delta = pow(b, 2) - 4 * a * c;
        if (delta > 0)
        {
            raiz1 = (-(b) + sqrt(delta)) / (2 * a); 
            raiz2 = (-(b) - sqrt(delta)) / (2 * a); 
            printf("Raiz 1: %.1f\nRaiz 2: %.1f", raiz1, raiz2);
        }
        else
        {
            printf("A equacao nao possui raizes reais para o delta %.1f.", delta);   
        }
    }
    return 0;
}