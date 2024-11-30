#include <stdio.h>

int main()
{
    float saldomedio, credito;
    printf("Digite o valor do saldo medio do ano anterior:\n");
    scanf("%f", &saldomedio);
    if (saldomedio > 400)
    {
        credito = saldomedio * 0.3;
        printf("Credito: R$%.2f", credito);
    }
    else if (saldomedio > 300 && saldomedio <= 400)
    {
        credito = saldomedio * 0.25;
        printf("Credito: R$%.2f", credito);
    }
    else if (saldomedio > 200 && saldomedio <= 300)
    {
        credito = saldomedio * 0.2;
        printf("Credito: R$%.2f", credito);
    }
    else
    {
        credito = saldomedio * 0.1;
        printf("Credito: R$%.2f", credito);
    }
    return 0;
}