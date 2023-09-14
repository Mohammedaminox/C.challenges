#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("entrer un nombre:");
    scanf("%d",&num);
    printf("Le nombre en octal est: %o",num);
    printf("\nLe nombre en hexadecimal est: %x",num);



    return 0;
}
