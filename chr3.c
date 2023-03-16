#include <stdio.h>

int main()
{
    int i;
    i = 1;
    char stringa[] = "";
    while(i > 0)
    {
    printf("inserisci una stringa\n");
    scanf("%s", stringa);
    
    if(stringa[0] == 'S' && stringa[1] == 'T' && stringa[2] == 'O' && stringa[3] == 'P')
    {
    printf("ti confesso che a me piace il cazzo...\n");
    break;
    }
    printf(" %s\n", stringa);
    }
}