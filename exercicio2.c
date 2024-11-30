#include <stdio.h>

int main()
{
    int n1, n2 , n3;
    printf("Digite 3 numeros inteiros:\n");
    scanf("%i%i%i", &n1, &n2, &n3);
    if (n1 < n2 && n1 < n3)
    {
        printf("%i eh o menor numero.", n1);
    }
    else if (n2 < n1 && n2 < n3)
    {
        printf("%i eh o menor numero.", n2);
    }
    else
    {
        printf("%i eh o menor numero.", n3);
    }
    return 0; 
}