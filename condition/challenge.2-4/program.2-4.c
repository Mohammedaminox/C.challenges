#include <stdio.h>
#include <math.h>
int main() {

    int a,b,c,delta,x,x1,x2;
    printf("enter le coefficient A :");
    scanf("%d",&a);
    printf("enter le coefficient B :");
    scanf("%d",&b);
    printf("enter le coefficient C :");
    scanf("%d",&c);

    printf("\nvotre equation est : %dxx + %dx + %d = 0",a,b,c);

    delta = pow(b,2)-4*a*c;
    x = -b/2*a;

    printf("\n delte = %d",delta);


    if ( delta == 0) {

            printf("\nla solution est :x=%d",x);
    } else if ( delta > 0) {
            x1 = (-b+sqrt(delta))/2*a;
            x2 = (-b-sqrt(delta))/2*a;
            printf("\n la solution 1 est : x=%d",x1);
            printf("\n la solution 1 est : x=%d",x2);
    }
    else{
        printf("\naucun solution");
    }










    return 0;
}
