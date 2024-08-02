#include <stdio.h>

void ler(int n, int vetor[n]){
    int ocorrencia = 0,  ultimoelemento = vetor[n - 1];
    for (; n >= 0; n--)
    {
        if (vetor[n] == ultimoelemento)
        {
            ocorrencia++;
        }
    }
    printf("O ultimo numero lido aparece %d vezes.", ocorrencia);
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
    ler(n, vetor);
    return 0;
}