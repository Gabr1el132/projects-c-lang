#include <stdio.h>

int main()
{
    int ig, ia, enc, ind, structs;
    printf("Digite 1 caso o requisito tenha sido atingido e 0 caso nao.\nInterface grafica: ");
    scanf("%d", &ig);
    printf("Inteligencia Artificial: ");
    scanf("%d", &ia);
    printf("Encapsulamento: ");
    scanf("%d", &enc);
    printf("Indentacao: ");
    scanf("%d", &ind);
    printf("Uso de Structs: ");
    scanf("%d", &structs);
    if ((ig == 1 || ia == 1) && (enc == 1 && ind == 1) && (structs == 1))
    {
        printf("O trabalho sera avaliado.");
    }
    else
    {
        printf("Zero.");
    }
    return 0;
}