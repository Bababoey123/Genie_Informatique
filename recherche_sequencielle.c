/*
Adam Caulier
09/09/2023

template 

3
commande pour le compiler gcc -W -std=c99 template.c -o a.out

executer le programme ./a.out

*/

#include<stdio.h>

int main (){

int recherche = 0 ;
int trouve = 0 ;
int position = 0 ;

recherche = 26;

printf("Algoritme de recherche sequentielle / recherche de la valeur 26 dans un tableau de 15 valeurs \n");

int tab[] = {1, 3, 6, 9, 45, 67, 33, 22 ,14, 26, 65, 34, 54, 7, 19}, i = 0 ;

for ( i = 0 ; i < 14 ; ++i)
{
    if ( tab[i] == recherche ){

        position = i + 1;
        trouve = 1 ;
        break ;
    }

}

if ( trouve == 1 )
{
    printf("Le nombre %i est en position %i dans le tableau\n", recherche, position);

}
if ( trouve == 0 )
{
    printf("Le nombre ne se trouve pas  dans le tableau\n");

}

return 0;




}