#include <stdio.h>

int main(){
    int vetor[50], p = 0, imp = 0; 
    int par[50], impar[50];
    for (int i = 0; i < 50; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    for (int k = 0; k < 50; k++)
    {
        if (vetor[k] % 2 == 0)
        {
            par[p] = vetor[k];
            p++;
        }
        else
        {
            impar[imp] = vetor[k];
            imp++;
        }
    }
    printf("Pares que voce digitou: ");
    for (int m = 0; m < p; m++)
    {
        printf("%d", par[m]);
        if (m < p - 1)
        {
            printf(", ");
        }
        else
        {
            printf(".");
        }
    }
    printf("\nImpares que voce digitou: ");
    for (int n = 0; n < imp; n++)
    {
        printf("%d", impar[n]);
                if (n < imp - 1)
        {
            printf(", ");
        }
        else
        {
            printf(".");
        }
    }
    return 0;
}