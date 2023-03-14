#include <stdio.h>

int main()
{
    int x;
    printf("che anno è: ");
    scanf("%d", &x);
    int y = 1969 - x;
    int z = x - 1969;
    
    if (x == 1969)
    {
        printf("sei nato nell'ánno in cui l'úomo andò sulla luna\n");
    }
    else 
    {
        printf("non sei nato nell'ánno in cui l'úomo andò sulla luna\n");
        if (x < 1969)
        {
            printf("sei nato %d anni prima dell'ánno in cui l'úomo andò sulla luna\n", y);
        }
        else
        {
            printf("sei nato %d anni dopo dell'ánno in cui l'úomo andò sulla luna\n", z);
        }
    }
}