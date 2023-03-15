#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("inserire n: ");
    scanf("%d", &x);
    y = x;
    if (x == 1)
    {
        printf("primo\n");
    }
    while(y  2)
    {
        y = y - 1;
        if (x % y == 0)
        {
            printf("non primo\n");
            y = 0;
        }
    }
    if (y!=0)
    {
        printf("primo\n");
    }
}
