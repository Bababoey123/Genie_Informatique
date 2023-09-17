/*
Adam Caulier
09/09/2023

Le programme affiche deux nombres en ordre croisaant 

commande pour le compiler gcc -Wall -W -std=c99 -S tri2.c -o tri2

executer le programme ./tri2

*/

#include<stdio.h>

int main (){
int n1 = 0 ;
int n2 = 0 ;
int n3 = 0 ;

int tab[] = {n1, n2, n3}, i = 0 ;

printf("Tri de deux nombres en ordre croissant \n");
printf("Veuillez entert deux nombres  \n");

printf("Nombre 1 = .....  \n");
scanf("%i", &n1);
while(getchar() !='\n');

printf("Nombre 2 = .....  \n");
scanf("%i", &n2);
while(getchar() !='\n');

printf("Nombre 3 = .....  \n");
scanf("%i", &n3);

for ( i = 0 ; i < 3 ; i ++)
{
    printf("%d\n", tab[i]);
}

/* if ( n1 > n2 )
{
 printf(" %i , %i \n", n1, n2 );
}

else if ( n2 > n1 )
{
 printf(" %i , %i \n", n2, n1 );
}

else
{
 printf("Les nombres sont egaux   \n");
 printf(" %i = %i \n", n2, n1 );
}
*/


return 0;
}



