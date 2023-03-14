#include <stdio.h>

int main()
{
    int x;

    x = 0;
    while(x <= 100)
    {
        printf("%d", x);
        x++;
        x = x + 1;
    }
}