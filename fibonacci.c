#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;

    printf("che numero è: ");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    if (x - y == y - z)
    {
        printf("i numeri sono in successione aritmetica\n");
    }
    else
    {
        printf("i numeri non sono in successione aritmetica\n");
    }
    
}