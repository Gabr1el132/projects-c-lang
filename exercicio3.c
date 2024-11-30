#include <stdio.h>

void divBinario(int n);

int main(){
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    if (n == 0){
        printf("0");
    }
    else{
        printf("%d em binario: ", n);
        divBinario(n);
    }
    return 0;
}

void divBinario(int n){
    if (n == 0){
        return;
    }
    else{
        divBinario(n / 2);
        printf("%d", n % 2);
    }
}