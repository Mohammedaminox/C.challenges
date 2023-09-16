#include <stdio.h>
int main () {
    srand(time(NULL));


    int randday = rand() % 7;

    switch (randday) {

        case 1:
            printf("lundi");
            break;
        case 2:
            printf("mardi");
            break;
        case 3:
            printf("mercredi");
            break;
        case 4:
            printf("jeudi");
            break;
        case 5:
            printf("vendredi");
            break;
        case 6:
            printf("samedi");
            break;
        case 7:
            printf("dimande");
            break;


    }












    return 0;
}
