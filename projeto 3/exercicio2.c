#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Digite valores para x e y:\n");
    scanf("%d%d", &x, &y);
    x++;
    y--;

    if (y > x)
    {
        while(y > x){
        if((x % 5 == 2 || x % 5 == 3) && (x > 5)){
        printf("\n%d", x);
        }
        x++;
    }
    }
    else
    {
        while(y < x){
        if((x % 5 == 2 || x % 5 == 3) && (x > 5)){
        printf("\n%d", x);
        }
        y++;
    }
    }
    
    
    return 0;
}