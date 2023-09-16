#include <stdio.h>
int main() {
        char alpha;
    printf("entrez un un alphabet :");
    scanf("%c",&alpha);

    if ((alpha >= 'a' && alpha <='z') || (alpha >= 'A' && alpha<='Z')) {
            printf("%c fait partie des alphabet");
        if (alpha>=65 && alpha<=90) {
            printf("\nlalphabet %c est majuscule",alpha);
        } else if (alpha>=97 && alpha<=122) {
            printf("\nlalphabet %c est miniscule",alpha);
        }
    }  else {
            printf("nappartien pas a les alphabet");
         }







    return 0;
}
