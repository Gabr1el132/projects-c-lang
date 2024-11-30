#include <stdio.h>

int main()
{
    int x, y;
    printf("Digite as coordenadas de x e y:\n");
    scanf("%d%d", &x, &y);
    if (x == 0 && y == 0)
    {
        printf("Origem.");
    }
    else if (y == 0)
    {
        printf("Eixo x");
    }
    else if (x == 0)
    {
        printf("Eixo y");
    }
    else if (x > 0 && y > 0)
    {
        printf("Primeiro quadrante.");
    }
    else if (x < 0 && y > 0)
    {
        printf("Segundo quadrante.");
    }
    else if (x < 0 && y < 0)
    {
        printf("Terceiro quadrante.");
    }
    else 
    {
        printf("Quarto quadrante.");
    }
    return 0;   
}