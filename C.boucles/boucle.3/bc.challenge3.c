#include <stdio.h>
#include <math.h>
int main () {

    int i,x,val1,val2,count=0;

    printf("entrez un nombre :");
    scanf("%d",&x);
    val1 = ceil(sqrt(x));
    val2 = x;

    for (i=2;i<=val1;i++)
    {
        if(val2%i == 0)
            count=1;
    }
    if(count==0 && val2!=1 && val2>0)
        printf("%d is prime number",val2);
    else
        printf("%d is not prime number",val2);






    return 0;

}
