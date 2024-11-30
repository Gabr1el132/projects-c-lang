#include <stdio.h>

int contaDigitos(int n);

int main() {
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
        return 1;
    }

    printf("O número %d possui %d dígitos.\n", n, contaDigitos(n));
    return 0;
}

int contaDigitos(int n) {
    if (n < 10) {
        return 1;
    }
    return 1 + contaDigitos(n / 10);
}
