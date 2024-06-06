#include <stdio.h>

int main()
{
    int numero, antecessor, sucessor;
    printf("Digite um numero: ");
    scanf("%i", &numero);
    antecessor = numero - 1;
    sucessor = numero + 1;
    printf("Antecessor: %i\nSucessor: %i", antecessor, sucessor);
    return 0;
}