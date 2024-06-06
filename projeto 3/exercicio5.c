#include <stdio.h>

int main()
{
    int quantidade, count, numero, soma;
    float media;
    printf("Digite uma quantidade de numeros: ");
    scanf("%d", &quantidade);
    count = 1;
    soma = 0;
    while (count <= quantidade)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        soma += numero;
        count++;
    }
    media = soma / quantidade;
    printf("Media: %.1f", media);
    
    return 0;
}