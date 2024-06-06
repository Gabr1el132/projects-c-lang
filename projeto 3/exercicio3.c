#include <stdio.h>

int main()
{
    float n, soma, i;
    printf("Digite um numero:\n");
    scanf("%f", &n);
    soma = 1;
    i = 2;
    while(i <= n){
        soma += (1 / i);
        printf("Resultado: %.3f\n", soma);
        i++;
    }
    return 0;
}