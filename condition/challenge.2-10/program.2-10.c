#include <stdio.h>
int main() {

    int date,jour,mois,annee;

    printf("entrez le jour de la date :");
    scanf("%d",&jour);
    printf("entrez le mois de la date :");
    scanf("%d",&mois);
    printf("entrez lannee de la date :");
    scanf("%d",&annee);

    printf("\nvotre date est : %d/%d/%d",jour,mois,annee);


    switch (mois){
    case 1 :
        printf("\n%d/jan/%d",jour,annee);
        break;
    case 2 :
        printf("\n%d/feb/%d",jour,annee);
        break;
    case 3 :
        printf("\n%d/mar/%d",jour,annee);
        break;
    case 4 :
        printf("\n%d/apr/%d",jour,annee);
        break;
    case 5 :
        printf("\n%d/may/%d",jour,annee);
        break;
    case 6 :
        printf("\n%d/jun/%d",jour,annee);
        break;
    case 7 :
        printf("\n%d/jul/%d",jour,annee);
        break;
    case 8 :
        printf("\n%d/aug/%d",jour,annee);
        break;
    case 9 :
        printf("\n%d/sep/%d",jour,annee);
        break;
    case 10 :
        printf("\n%d/oct/%d",jour,annee);
        break;
    case 11 :
        printf("\n%d/nov/%d",jour,annee);
        break;
    case 12 :
        printf("\n%d/dec/%d",jour,annee);
        break;
    default:
        printf("erreur");
    }





    return 0;
}
