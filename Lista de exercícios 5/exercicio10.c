#include <stdio.h>

int main(){
    int vetor[20];
    for (int i = 0; i < 20; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    int x;
    for (int j = 0; j < 10; j++)
    {
        x = vetor[j];
        vetor[j] = vetor[10 + j];
        vetor[10 + j] = x;
    }
    printf("Vetor resultante: ");
    for (int k = 0; k < 20; k++)
    {
        printf("%d\n", vetor[k]);
    }
    return 0;
}