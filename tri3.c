/*
Adam Caulier
09/09/2023

Le programme affiche trois nombres en ordre croisaant 

commande pour le compiler gcc -Wall -W -std=c99 -S tri3.c -o tri3

executer le programme ./tri3

*/

#include<stdio.h>

int main (){
int n1 = 0 ;
int n2 = 0 ;
int n3 = 0 ;



printf("Tri de trois nombres en ordre croissant \n");
printf("Veuillez enter trois nombres entiers differents \n");

printf("Nombre 1 = .....  \n");
scanf("%i", &n1);
while(getchar() !='\n');



printf("Nombre 2 = .....  \n");
scanf("%i", &n2);
while(getchar() !='\n');



printf("Nombre 3 = .....  \n");
scanf("%i", &n3);

if ( n1 > n2 && n1 > n3 && n2 > n3 )
{
 printf(" %i , %i, %i \n", n1, n2, n3 );
}

else if ( n1 > n2 && n1 > n3 && n3 > n2 )
{
 printf(" %i , %i, %i \n", n1, n3, n2 );
}

else if ( n2 > n1 && n2 > n3 && n3 > n1 )
{
 printf(" %i, %i, %i \n", n2, n3, n1 );
}
 else if ( n2 > n1 && n2 > n3 && n1 > n3 )
{
 printf(" %i , %i, %i\n", n2, n1, n3 );
}
 else if ( n3 > n1 && n3 > n2 && n1 > n2 )
{
 printf(" %i , %i, %i\n", n3, n1, n2 );
}
 else if ( n3 > n1 && n3 > n2 && n2 > n1 )
{
 printf(" %i , %i, %i\n", n3, n2, n1 );
}
else
 {
   printf("Erreur, veuillez enter trois nombres enteirs differents \n"); 
}
return 0;
}



