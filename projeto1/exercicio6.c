#include <stdio.h>

int main()
{
    float km, litros, media;
    printf("Digite o numero de km rodados: ");
    scanf("%f", &km);
    printf("Digite o numero de litros de combustivel gastos: ");
    scanf("%f", &litros);
    media = km / litros;
    printf("Consumo medio de veiculo: %.1f litros por km.", media);
    return 0;
}