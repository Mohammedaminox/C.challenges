#include <stdio.h>
int main() {



    int TB[5]={};
    int min,max;

    for(int i=0;i<5;i++){
            printf("\nentrer un nombre :");
            scanf("%d",&TB[i]);

    }

    for(int i=0;i<5;i++)
        {
            printf("\n%d",TB[i]);
     }
     max=TB[0];
     for(int i=0;i<5;i++){
            if(max < TB[i])
            max=TB[i];

     }
    min=TB[0];
    for(int i=0;i<5;i++){
            if(min > TB[i])
            min=TB[i];

     }
printf("\nle max est : %d",max);
printf("\nle min est : %d",min);







    return 0;
}
