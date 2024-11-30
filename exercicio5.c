#include <stdio.h>

int main()
{
    float valor, gasto, troco;
    int pedidos;
    printf("Digite o valor que voce vai usar (multiplo de 5): ");
    scanf("%f", &valor);
    pedidos = valor / 7;
    gasto = pedidos * 7;
    troco = valor - gasto;
    printf("O valor perdido no troco corresponde a R$%.2f", troco);
    return 0;
}