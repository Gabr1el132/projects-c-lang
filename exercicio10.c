#include <stdio.h>
#include <string.h>

void inverteString(char str[], int inicio, int fim);

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    size_t tamanho = strlen(str);
    if (str[tamanho - 1] == '\n') {
        str[tamanho - 1] = '\0';
        tamanho--; 
    }
    inverteString(str, 0, tamanho - 1);
    printf("String invertida: %s\n", str);
    return 0;
}

void inverteString(char str[], int inicio, int fim) {
    if (inicio >= fim) {
        return; 
    }
    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;
    inverteString(str, inicio + 1, fim - 1);
}