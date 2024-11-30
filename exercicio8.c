#include <stdio.h>

int main()
{
    int x, y, op;
    printf("Digite a operacao que voce deseja realizar:\n1.Media aritmetica\n2.Diferenca do maior para o menor\n3.Produto entre x e y\n4.Divisao entre x e y\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Digite os valores para x e y: ");
        scanf("%d%d", &x, &y);
        printf("Media Aritmetica: %d", (x +y)/2);
        break;
    case 2:
        printf("Digite os valores para x e y: ");
        scanf("%d%d", &x, &y);
        if (x > y)
        {
            printf("Diferenca: %d", x - y);
        }
        else
        {
            printf("Diferenca: %d", y - x);
        }
        break;
    case 3:
        printf("Digite os valores para x e y: ");
        scanf("%d%d", &x, &y);
        printf("Produto: %d", x * y);
        break;
    case 4:
        printf("Digite os valores para x e y: ");
        scanf("%d%d", &x, &y);
        if (y == 0)
        {
            printf("O y nao pode receber o valor 0, pois nao existe divisao por zero.");
        }
        else
        {
            printf("Divisao: %.1f", (float)x/y);
        }
        break;
    default:
        printf("Voce digitou uma operacao invalida.");
        break;
    }
}