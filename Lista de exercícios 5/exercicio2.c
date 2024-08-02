#include <stdio.h>

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
    for (int j = n; j > 0; j--)
    {
        printf("%d\n", vetor[j-1]);
    }
    return 0;
}