#include <stdio.h>

int main()
{
    int idade, resposta, menor18=0, maior30=0;
    do
    {
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Deseja parar o programa?(Sim = 0/Nao = 1) ");
        scanf("%d", &resposta);
        if(idade < 18){
            menor18++;
        }
        else if (idade > 30)
        {
            maior30++;
        }
        
    } while (resposta != 0);
    
    printf("Menor que 18: %d\nMaior que 30: %d", menor18, maior30);

    return 0;
}