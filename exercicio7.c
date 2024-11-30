#include <stdio.h>

int main()
{
    float salario1, reajuste, salario2;
    int codigo;
    printf("Digite o seu salario atual e o codigo do seu cargo:\n");
    scanf("%f%d", &salario1, &codigo);
    switch (codigo)
    {
    case 1:
        reajuste = salario1 * 0.1;
        salario2 = salario1 + reajuste;
        printf("O reajuste eh de %f e o novo salario eh R$%f", reajuste, salario2);
        break;
    case 2:
        reajuste = salario1 * 0.07;
        salario2 = salario1 + reajuste;
        printf("O reajuste eh de %f e o novo salario eh R$%f", reajuste, salario2);
        break;
    case 3:
        reajuste = salario1 * 0.12;
        salario2 = salario1 + reajuste;
        printf("O reajuste eh de %f e o novo salario eh R$%f", reajuste, salario2);
        break;
    case 4:
        reajuste = salario1 * 0.11;
        salario2 = salario1 + reajuste;
        printf("O reajuste eh de %f e o novo salario eh R$%f", reajuste, salario2);
        break;
    default:
        break;
    }
}