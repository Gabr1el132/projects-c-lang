#include <stdio.h>

int main()
{
    int multiplo, n = 1;
    while (n <= 50)
    {
        multiplo = n * 3;
        printf("\n%d", multiplo);
        n++;
    }
    
    return 0;
}