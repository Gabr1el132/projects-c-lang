#include <stdio.h>

int mult(int num1, int num2);

int main(){
    int n1, n2, resultado;
    printf("Digite dois numeros: ");
    scanf("%d%d", &n1, &n2);
    resultado = mult(n1, n2);
    printf("%d x %d = %d", n1, n2, resultado);
    return 0;
}

int mult(int num1, int num2) {
    if (num2 == 0) {
        return 0; 
    } else if (num2 > 0) {
        return num1 + mult(num1, num2 - 1); 
    } else { 
        return -mult(num1, -num2);
    }
}