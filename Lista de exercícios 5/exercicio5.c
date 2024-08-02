#include <stdio.h>

#define TAM 100

int main(){
    int n, aparicao = 0;
    int i = 0;
    int vetor[TAM];
    printf("Digite numeros(-1 para encerrar o programa): ");
    do
    {
        scanf("%d", &n);
        vetor[i++] = n;
    } while (n != -1);
    for (int j = 0; j < i; j++)
    {
        if (vetor[j] >= 10 && vetor[j] <= 50 )
        {
            aparicao++;
        }
    }
    printf("Aparecereu(ram) %d numero(s) entre o intervalo de 10 e 50.", aparicao);
    return 0;
}