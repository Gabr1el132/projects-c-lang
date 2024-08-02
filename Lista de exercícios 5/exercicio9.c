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
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
    printf("Resultado: ");
    for (int k = 0; k < n; k++)
    {
        printf("%d ", vetor[k]);
    }
    return 0;
}