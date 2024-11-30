#include <stdio.h>

int somaArray(int array[], int index);

int main() {
    int n;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);
    
    int array[n];
    for (int i = 0; i < n; i++) {
        printf("Digite o valor da posicao %d do array: ", i);
        scanf("%d", &array[i]);
    }
    
    printf("Soma dos valores do array: %d\n", somaArray(array, n - 1));
    return 0;
}

int somaArray(int array[], int index) {
    if (index < 0) { 
        return 0;
    }
    return array[index] + somaArray(array, index - 1);
}