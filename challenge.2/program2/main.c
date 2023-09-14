#include <stdio.h>
#include <math.h>

int main()
{
    double F;
    double C;

    printf("enter the tempereture in Fahrenheit :");
    scanf("%lf",&F);
    C = (F-32)/1.8;
    printf("the temperature in CELSIUS is : %.2lf Celsius\n" , C);

    if (C >= 40) {
        printf("Tres chaud");
    } else if (C >= 30) {
        printf("Chaud");
    }
      else if (C >= 20) {
        printf("Bon");
    }
      else if (C >= 0) {
        printf("Froid");
    }
      else {
        printf("Tres froid");
    }


    return 0;
}
