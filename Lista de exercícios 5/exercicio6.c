#include <stdio.h>

int main(){
    int n;
    printf("Digite uma quantidade: ");
    scanf("%d", &n);
    int vetor[n];
    for (int j = 0; j < n; j++)
    {
        printf("Digite um numero:");
        scanf("%d", &vetor[j]);
    }
    printf("Multiplos de 7 digitados: ");
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] % 7 == 0)
        {
           printf("%d ", vetor[i]);
        }
    }
    
}