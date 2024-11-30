#include <stdio.h>

int main()
{
    int x, y, permuta;
    printf("Digite os valores para x e y, respectivamente: \n");
    scanf("%i%i", &x, &y);
    permuta = x;
    x = y;
    y = permuta;
    printf("Valores originais: \nx=%i \ny=%i \nValores permutados: \nx=%i \ny=%i", y, x, x, y);
    return 0;
}