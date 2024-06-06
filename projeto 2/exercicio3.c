#include <stdio.h>

int main()
{
    float n1, n2, n3, media;
    printf("Digite 3 numeros:\n");
    scanf("%f%f%f", &n1, &n2, &n3);
    media = (n1 + n2 + n3)/ 3;
    if ((n1 > media && n2 > media) || (n1 > media && n3 > media) || (n2 > media && n3 > media))
    {
        printf("Dois numeros estao acima da media aritmetica.");
    }
    else if ((n1 > media) || (n2 > media) || (n3 > media))
    {
        printf("Apenas um numero esta acima da media aritmetica.");
    }
    else
    {
        printf("Nenhum dos numeros esta acima da media aritmetica.");
    }
    return 0;
}