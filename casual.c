#include <stdio.h>

int main()
{
    int n;
    int i = 0;
    int x;
    int maggiore;

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
        }
       i++;
        if(x > maggiore)
        {
            maggiore = x;
        }
    }
    
    printf("ïl numero maggiore è %d\n", maggiore);
}