#include <stdio.h>

int maiorElemento(int *vet, int tam);

int main() {
    int n;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int vet[n];
    for (int i = 0; i < n; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &vet[i]);
    }

    printf("O maior elemento do array é: %d\n", maiorElemento(vet, n));
    return 0;
}

int maiorElemento(int *vet, int tam) {
    if (tam == 1) {
        return vet[0]; 
    }
    int maiorDosRestantes = maiorElemento(vet, tam - 1);
    if (vet[tam - 1] > maiorDosRestantes) {
        return vet[tam - 1];
    } else {
        return maiorDosRestantes;
    }
}