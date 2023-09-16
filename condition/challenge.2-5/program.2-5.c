#include <stdio.h>
int main() {

    int anne,mois,jour,heure,minut;

    printf("entrez le numbre dannees :");
    scanf("%d",&anne);

    jour = anne * 365;
    mois = anne * 12;
    heure = anne * 365 * 24;
    minut = anne *365 * 24 * 60;

    printf("\n%d annees = %d mois = %d jours = %d heures = %d minutes" ,anne,mois,jour,heure,minut);


    return 0;
}
