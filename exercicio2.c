#include <stdio.h>

int numPar(int i, int n);

int main(){
    int n;
    printf("Digite um numero par: ");
    scanf("%d", &n);
    if (n % 2 != 0){
        printf("Voce nao digitou um numero par.");
        return 1;
    }
    numPar(0, n);
    return 0;
}

int numPar(int i, int n){
    if (i == n){
        printf("%d", n);
        return 1;
    }
    else{
        printf("%d ", i);
        return numPar(i + 2, n);
    }
}