#include<stdio.h>

int a = 0 ;
int b = 0 ;

int main()
{
    printf("saisir un nombre a :");
    scanf("%i", &a);
    while(getchar() != '\n');

    printf("saisir un nombre b :");
    scanf("%i", &b);

    if ( a < b){

         printf(" A < B");

    }
    else{

         printf(" B > A");

    }
     printf(" \n");
    return 0;
}
