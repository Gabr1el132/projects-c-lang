#include <stdio.h>

#define n 21

int main(){
    int vetor[n], ultimoelemento;
    for (int i = 0; i < n; i++)
    {
        printf("Digite umm numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("O numero %d se repete nas seguintes posicoes: ", vetor[n - 1]);
    ultimoelemento = vetor[n - 1];
    for (int j = 0; j < n; j++)
    {
        if (vetor[j] == ultimoelemento)
        {
            if (j == n - 1)
            {
                continue;
            }
            printf("%d ", j);           
        }
    }
    return 0;
}