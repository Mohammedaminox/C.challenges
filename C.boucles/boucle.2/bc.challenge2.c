#include<stdio.h>
int main()
{

    int n,i,j;



    printf("entrer le nombre des ligne :");
    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        for (j=1; j<=(n*2)-1; j++)
        {
            if(j>=n-(i-1)&& j<=n+(i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }

    return 0;
}
