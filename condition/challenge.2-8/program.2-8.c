#include <stdio.h>
int main() {


    float moy;

    printf("entez votre moyenne :");
    scanf("%f",&moy);
    if (moy<=0) {
        printf("erreur");
    } else if (moy < 10) {
        printf("tu est recale");
    } else if (moy < 12) {
        printf("tu a la mention passable");
    } else if (moy < 14) {
        printf("tu a la mention assez bien");
    } else if (moy < 16) {
        printf("tu a la mention bien");
    } else if (moy <= 20) {
        printf("tu a la mention tres bien");
    } else {
        printf("erreur");
    }










    return 0;
}
