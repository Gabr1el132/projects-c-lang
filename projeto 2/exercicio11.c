#include <stdio.h>

int main()
{
    float altura;
    int idade;
    printf("Digite a sua altura e a sua idade para checar em quais brinquedos voce pode ir:\n");
    scanf("%f%i", &altura, &idade);
    if (altura >= 1.7 && idade >= 16)
    {
        printf("Final Killer\n");
    }
    if (altura >= 1.5 && idade >= 12) 
    {
        printf("Barca Viking\n");
    }
    if (altura >= 1.4 && idade >= 14)
    {
        printf("Elevator of Death\n");
    }
    if (altura < 1.4 || idade < 12)
    {
        printf("Voce nao pode ir em nenhum dos brinquedos.");
    }
    return 0;
}