#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;


    printf ("che lato è: ");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    if (x + y > z && x + z > y && y + z > x)
    {
        printf("i lati appartengono ad un triangolo\n");
        if (x == y && y == z)
        {
            printf("ïl triangolo è equilatero\n");
        }
        else if ((x == y && y!=z) || (x == z && y!=z) || (y == z && x!=z))
        {
            printf("il triangolo è isoscele\n");
        }
        else
        {
            printf("il triangolo è scaleno\n");
        }
    }
    else
    {
        printf("i lati non appartengono ad un triangolo\n");
    }
}