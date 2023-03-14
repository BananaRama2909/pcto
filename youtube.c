#include <stdio.h>

int main ()
{
    
    char sesso;

    printf("di che sesso sei: ");
    scanf("%c", &sesso);
    if (sesso == 'M')
    {
        printf("sei maschio\n");
    }
    else if (sesso == 'F')
    {
        printf("sei femmina\n");
    }
    else if (sesso == 'N')
    {
        printf("sei non binary\n");
    }
    else 
    {
        printf("errore");
    }
}