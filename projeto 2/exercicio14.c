#include <stdio.h>

int main()
{
    float kmpercorrido, consumo;
    char tipo;
    printf("Digite tipo do veiculo (A, B ou C) e a quantidade de km rodados: ");
    scanf("%c%f", &tipo, &kmpercorrido);
    switch (tipo)
    {
    case 'A':
        consumo = kmpercorrido / 15;
        printf("Consumo estimado: %.3fL", consumo);
        break;
    case 'B':
        consumo = kmpercorrido / 12;
        printf("Consumo estimado: %.3fL", consumo);
        break; 
    case 'C':
        consumo = kmpercorrido / 10;
        printf("Consumo estimado: %.3fL", consumo);
        break;
    default:
        printf("Voce nao digitou um tipo valido de veiculo.");
        break;
    }
    return 0;
}