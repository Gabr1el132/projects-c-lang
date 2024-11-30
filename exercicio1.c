#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caractere;
    printf("Digite um caractere: ");
    scanf("%c", &caractere);
    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u'){
        printf("O caractere eh uma vogal.");
    } 
    else
        printf("O caractere eh uma consoante.");
    return 0;
}