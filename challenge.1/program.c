#include<stdio.h>
#include <stdbool.h>
int main()
{
    char nom[25];
    char prenom[25];
    int age;
    char sexe[25];
    int num;

    printf("whats your first name ?\n");
    scanf("%s", &nom);

    printf("whats your second name ?\n");
    scanf("%s", &prenom);

    printf("How old are you ?\n");
    scanf("%d", &age);

    printf("whats your gender ?\n");
    scanf("%s", &sexe);

    printf("whats your phone number?\n");
    scanf("%d", &num);


    printf("your first name is: %s\n",nom);
    printf("your second name is: %s\n",prenom);
    printf("your are %d years old\n",age);
    printf("you are: %s\n",sexe);
    printf("your phone number: %d\n",num);



    return 0;

}
















