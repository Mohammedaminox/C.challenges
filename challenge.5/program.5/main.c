#include <stdio.h>
#include <stdlib.h>

int main()
{
    int xa,ya,xb,yb,dis;

    printf("entrer x du point A :");
    scanf("%d",&xa);

    printf("\nentrer y du point A :");
    scanf("%d",&ya);

    printf("\nentrer x du point B :");
    scanf("%d",&xb);

    printf("\nentrer y du point B :");
    scanf("%d",&yb);

    dis = sqrt(pow((xb-xa),2)+pow((yb-ya),2));

    printf("la distance AB est :%d",dis);

}
