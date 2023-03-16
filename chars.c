#include <stdio.h>

int main()
{
    char nome[] = "";
    char età[] = "";
    char hobby[]= "";
    printf("Ciao, come ti chiami?\n");
    scanf("%s", nome);
    printf("Piacere di conoscerti %s, mi chiamo Gianroborpo. Quanti hanni hai?\n", nome);
    scanf("%s", età);
    printf("%s? Quanto sei grande! Qual è il tuo hobby preferito?\n", età);
    scanf("%s", hobby);
    printf("%s? Che schifo di hobby, suicidati!\n", hobby);
}