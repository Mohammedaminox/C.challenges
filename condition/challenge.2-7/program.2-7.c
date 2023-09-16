#include <stdio.h>
int main () {

    char alpha;
    printf("entrez un un alphabet :");
    scanf("%c",&alpha);

    if ((alpha >= 'a' && alpha <='z') || (alpha >= 'A' && alpha<='Z')) {
        if (alpha>=65 && alpha<=90) {
            printf("lalphabet %c est majuscule",alpha);
        } else {
            printf("lalphabet %c est miniscule",alpha);
        }
    }









    return 0;
}
