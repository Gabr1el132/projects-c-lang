#include <stdio.h>

int main()
{
    int codigo, quantidade;
    float desconto, valor, valormod;
    printf("Digite o codigo do produto e a quantidade:");
    scanf("%d%d", &codigo, &quantidade);

    switch (codigo)
    {
    case 1:
        valor = 5.30 * quantidade;
        if (valor >= 40.00 || quantidade >= 15)
        {
            desconto = valor * 0.15;
            valormod = valor - desconto;
            printf("O valor da compra eh R$%.1f com o desconto.", valormod);
        }
        else
        {
            printf("O valor da compra eh R$%.1f", valor);
        }
        break;
    case 2:
        valor = 6.00 * quantidade;
        if (valor >= 40.00 || quantidade >= 15)
        {
            desconto = valor * 0.15;
            valormod = valor - desconto;
            printf("O valor da compra eh R$%.1f com o desconto.", valormod);
        }
        else
        {
            printf("O valor da compra eh R$%.1f", valor);
        }
        break;
    case 3: 
        valor = 3.20 * quantidade;
        if (valor >= 40.00 || quantidade >= 15)
        {
            desconto = valor * 0.15;
            valormod = valor - desconto;
            printf("O valor da compra eh R$%.1f com o desconto.", valormod);
        }
        else
        {
            printf("O valor da compra eh R$%.1f", valor);
        }
        break; 
    case 4:
            valor = 2.50 * quantidade;
        if (valor >= 40.00 || quantidade >= 15)
        {
            desconto = valor * 0.15;
            valormod = valor - desconto;
            printf("O valor da compra eh R$%.1f com o desconto.", valormod);
        }
        else
        {
            printf("O valor da compra eh R$%.1f", valor);
        }
        break;  
    default:
        printf("Voce nao digitou um codigo valido.");
        break;
    }
}