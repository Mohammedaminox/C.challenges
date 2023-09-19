#include <stdio.h>
int main() {

    int n,i,csm,x,y;
    float moy,som,min,max;


    int count=0;
    printf("entres le nombre des notes :");
    scanf("%d",&n);
    float tb[n];

    for(i=0;i<n;i++){

        printf("entrer la note %d :",i+1);
        scanf("%f",&tb[i]);
        if(tb[i]>20 || tb[i]<0){
            printf("\nerreur");
            return 0;
        } count++;
    }

    for(i=0;i<count;i++){
        printf("\n la note %d :%.2f",i+1,tb[i]);
    }
    printf("\nle nombre de notes est :%d",count);

    for(i=0;i<n;i++){
        som+=tb[i];
        moy=som/(float)count;
    }
    printf("\nla moyenne est : %.2f",moy);
    for(i=0;i<n;i++){
        if(tb[i]<moy)
            printf("\n%.2f < %.2f",tb[i],moy);
        else if (tb[i]>moy){
            printf("\n%.2f > %.2f",tb[i],moy);
            csm++;
        }
        else
            printf("\n%.2f = %.2f",tb[i],moy);
    }
    for(i=0;i<count;i++){
        if (tb[i]>moy){
             printf("\n%.2f est superieur au moyenne",tb[i]);
        }
    }
    printf("\nle nombre des notes sup au moy %d",csm);

    min=tb[0];
    for(i=0;i<count;i++){
            if(min>tb[i]){
               min=tb[i];
               x=i;
            }
    }
               printf("\nla plus petite note est :%.2f est sa pos %d",min,x+1);

    max=tb[0];

    for(i=0;i<count;i++){
            if(max<tb[i]){
               max=tb[i];
               y=i;
            }
    }
               printf("\nla plus grande note est :%.2f est sa pos %d",max,y+1);





    return 0;
}
