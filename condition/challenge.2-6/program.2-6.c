#include <stdio.h>
int main() {

    int x;

    printf("entrez un numbre :");
    scanf("%d",&x);

    if (x>0) {
        printf("le nombre %d est superieur a zero",x);
    } else if (x<0) {
        printf("le nombre %d est inferieur a zero",x);
    } else {
        printf("le nombre %d est null",x);
    }











    return 0;
}
