#include <stdio.h>

int main()
{
    char stringa[] = "";
     int i = 0;

    printf("inserisci una parola\n");
    scanf(" %s\n", stringa);
    while(stringa[i]!= '\0')
    {
        i++;
    }
    printf("la parola è lunga %d lettere\n", i);
    return 0;
}