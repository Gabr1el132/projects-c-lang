#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inicio, fim;
    printf("Digite dois numeros:\n");
    scanf("%d%d", &inicio, &fim);
    inicio++;

    printf("Os numeros impares dentro deste intervalo sao:\n");

    while(fim > inicio){
        if(inicio % 2 == 1)
        {
            printf("%d\n", inicio);
        }
        inicio++;
    }
    return 0;
}