#include <stdio.h>

int main()
{
    int n;
    int i = 0;
    int x;
    int maggiore;
    int minore;

    printf("quanti numeri sono: ");
    scanf("%d", &n);
    int array[n];
    while(i < n)
    {
        printf("che numero è: ");
        scanf("%d", &x);
        array[i] = x;
        if(i == 0)
        {
            maggiore = x;
            minore = x;
        }
       i++;
        if(x > maggiore)
        {
            maggiore = x;
        }
        if(x < minore)
        {
            minore = x;
        }
    }
    
    printf("ïl numero maggiore è %d\n", maggiore);
    printf("ïl numero minore è %d\n", minore);
}