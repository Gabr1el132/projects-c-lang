#include <stdio.h>
#include <math.h>

int main()
{
    float altura, peso, imc;
    printf("Digite a sua altura em metros: \n");
    scanf("%f", &altura);
    printf("Digite o seu peso em kg: \n");
    scanf("%f", &peso);
    imc = peso / pow(altura, 2);
    printf("Seu IMC: %.3f", imc);
    return 0;
}