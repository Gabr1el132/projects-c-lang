#include <stdio.h>

int main()
{
    float preco, percentual, desconto, valortirado, preco2;
    printf("Digite o valor do produto: ");
    scanf("%f", &preco);
    printf("Digite o percentual de desconto: ");
    scanf("%f", &percentual);
    desconto = percentual / 100;
    valortirado = preco * desconto;
    preco2 = preco - preco2;
    printf("Valor do produto com desconto: R$%.2f", preco2);
    return 0;
}