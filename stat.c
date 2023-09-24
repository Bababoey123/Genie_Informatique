/*
Adam Caulier
09/09/2023

Hello, World ! en C

commande pour le compiler gcc -Wall -W -std=c99 -S helloworld.c -o helloworld

executer le programme ./helloworld.c

*/

#include<stdio.h>
#include<math.h>
#define TAILLE 4 

int tab[TAILLE], i = 0;
float total = 0 ;
float moyenne = 0 ;
float ecartType = 0 ;

int main (){

printf("Taille du tableau :\n");
/*scanf("%i", &n);
while(getchar() !='\n');
*/

printf("Veuillez entrer les valeurs dans le tableau une par une  :\n");

for ( int i= 0 ; i < TAILLE ; ++i )
{
  scanf("%i", &tab[i]);
  while(getchar() !='\n');

  printf("Prochaine valeur :\n");

}

for ( int i= 0 ; i < TAILLE ; ++i )   //calcul de la somme des  valeurs 
{
   total = tab[i] + total ;
}
moyenne = total/4;               // calcul de la moyenne
printf("Moyenne = %f\n", moyenne);

for ( int i= 0 ; i < TAILLE ; ++i )   //calcul de la somme des  valeurs 
{
   ecartType = ecartType + pow( tab[i] - moyenne, 2 );
}

ecartType = sqrt ( ecartType/4 );

printf("Ecart-Type = %f\n", ecartType);

return 0;
}