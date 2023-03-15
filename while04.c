#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    int media;
    
    
    while(x >= 0)
    {
        printf("inserire numero: ");
        scanf("%d", &x);
        z = z + 1;
        y = y + x;
        media = y / z;
        if(x >= 0 && z > 0)
        {
            printf("la media è %d\n", media);
        }
    }
    if(x <= 0)
    {
        printf("ciao\n");
    }
}