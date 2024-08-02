#include <stdio.h>

int maior (int vetor[], int tamanho){
    int maior = vetor[0];
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    return maior;
}

int main(){
    int n;
    printf("Digite uma quantidade: ");
    scanf("%d", &n);
    int vetor[n];
    for (int i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("O maior numero eh: %d", maior(vetor, n));
    return 0;
}