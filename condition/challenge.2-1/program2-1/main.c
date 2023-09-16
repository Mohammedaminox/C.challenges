#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("entrer un nombre :");
    scanf("%d",&x);

    if (x % 2 == 0) {
        printf("le nombre %d est PAIR",x);
    } else {
        printf("le nombre %d est IMPAIR",x);
    }
    return 0;
}
