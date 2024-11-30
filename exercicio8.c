#include <stdio.h>
#include <string.h>

int ehPalindromo(char str[], int inicio, int fim);

int main() {
    char str[100];
    printf("Digite uma palavra: ");
    scanf("%s", str);

    if (ehPalindromo(str, 0, strlen(str) - 1)) {
        printf("A palavra \"%s\" é um palíndromo.\n", str);
    } else {
        printf("A palavra \"%s\" não é um palíndromo.\n", str);
    }

    return 0;
}

int ehPalindromo(char str[], int inicio, int fim) {
    if (inicio >= fim) {
        return 1; 
    }
    if (str[inicio] != str[fim]) {
        return 0; 
    }
    return ehPalindromo(str, inicio + 1, fim - 1); 
}