#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lettre;

    printf("\n enter une lettre :");
    scanf("%c",&lettre);

    switch (lettre) {
    case 'a':
        printf("%c est une voyelle",lettre);
        break;
    case 'i':
        printf("%c est une voyelle",lettre);
        break;
    case 'u':
        printf("%c est une voyelle",lettre);
        break;
    case 'y':
        printf("%c est une voyelle",lettre);
        break;
    case 'o':
        printf("%c est une voyelle",lettre);
        break;
    case 'e':
        printf("%c est une voyelle",lettre);
        break;
    default:
        printf("%c nest pas une voyelle",lettre);

    }



    return 0;
}
