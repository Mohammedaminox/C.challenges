#include <stdio.h>
int main (){


    int tb[5]={};
    int n,j,i,test;

    for(n=0;n<5;n++){
        printf("entrez un nombre %d:",n+1);
        scanf("%d",&tb[n]);
    }


    for(i=0;i<5;i++){

        for(j=i;j<5;j++){
            if(tb[i]<tb[j+1]){
        test=tb[i];
        tb[i]=tb[j+1];
        tb[j+1]=test;
        }
       }
    }

     for(n=0;n<5;n++){
            printf("\n%d",tb[n]);

    }

    return 0;
}
