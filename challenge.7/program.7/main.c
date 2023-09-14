#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,w,a,m;

    printf("entrer x :");
    scanf("%d",&x);
    m = x/100;
    a = x/10-(m*10);
    w = x%10;



    printf("le nombre inverse est :%d",w);
    printf("%d",a);
    printf("%d",m);








    return 0;
}
