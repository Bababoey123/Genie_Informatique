/*
Adam Caulier
19/09/2023

test du programme swap en C

commande pour le compiler gcc -Wall -W -std=c99 -S swap.c -o swap

executer le programme ./helloworld.c

*/

#include<stdio.h>
#include<string.h>

#define TAILLE  7
int tab[TAILLE]={6, 1, -2, 18, 17, 3, 0}, tmp ;
int pmin ;

 
int main (){




    for ( int i =0, i< TAILLE, ++i){    // afficahge tab non trie
     printf("%i", tab[i]);

    }

    printf ("\n");
    for ( int debut =0 , debut < TAILLE-1, ++debut)
    {
        pmin = debut ;
        for ( int i = debut + 1, i < TAILLE, ++i )
        {

            if(tab[pmin]> tab[i] )
            {

                pmin = i ;
            }

            
        }
     tmp = tab[debut];
     tab[debut]= tab[pmin];
     tab[pmin] = tmp ;
    }

 for ( int i =0, i< TAILLE, ++i)  //affichage tab trie 
 {
    printf("%i\n", tab[i]);
 }

 printf("\n");

 return 0;



}