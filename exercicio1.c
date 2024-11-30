#include <stdio.h>

int numPar(int n);

int main(){
    int n;
    printf("Digite um numero par: ");
    scanf("%d", &n);
    if (n % 2 != 0){
        printf("Voce nao digitou um numero par.");
        return 1;
    }
    numPar(n);
    return 0;
}

int numPar(int n){
    if (n == 0){
        printf("0");
        return 1;
    }
    else{
        printf("%d ", n);
        return numPar(n-2);
    }
}