#include <stdio.h>

int somaArray(int n, int array[]);

int main(){
    int n;
    printf("Digite o tamanho do array:");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Digite o valor da posicao %d do array: ", i);
        scanf("%d", &array[i]);
    }
    printf("Soma dos valores do array: %d", somaArray(n, array));
}

int somaArray(int n, int array[]){
    int soma = 0;
    if (n == 0){
        return 0;
    }
    else{
        return array[n-1] + somaArray(n-1, array);
    }
}