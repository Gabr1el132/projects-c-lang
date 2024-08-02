#include <stdio.h>

#define TAM 100

int main(){
    int vetor[TAM];
    int n, i=0, maisque30=0, menosque18=0;
    printf("Digite as idades das pessoas(digite 0 para encerrar o programa):\n");
    do
    {
        scanf("%d", &n);
        vetor[i++] = n;
    } while (n != 0);
    for(int j = 0; j < i; j++)
    {
        if(vetor[j] < 18 && vetor[j] != 0)
        {
            menosque18++;
        }
        else if(vetor[j] > 30)
        {
            maisque30++;
        }
    }
    printf("Pessoa com menos de 18 anos: %d\nPessoas com mais de 30 anos: %d", menosque18, maisque30);
    return 0;
}