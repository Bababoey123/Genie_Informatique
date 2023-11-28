/*
Adam Caulier
29/09/2023

Affiche la chaine de characteres 

commande pour le compiler gcc -Wall -W -std=c99 -S helloworldstr.c -o str.out

executer le programme ./str.out

*/

#include<stdio.h>
#include<stdlib.h>
#define TAILLE 20 

int tab[TAILLE] = {0};

int x = 0 ;
int tmp = 0 ;
int pmin = 0 ;


int main (){

  printf("Remplissage aleatoire du tableau\n");

    for ( int i = 0 ; i < TAILLE ; i++){
        tab[i] = rand()%100;

    }
     
  printf("\n");
  
     for ( int i = 0 ;  i < TAILLE ; i++){
       printf("%3i  ", tab[i]);
 
     }

    
    
    for ( int debut = 0 ; debut < TAILLE-1  ; ++debut){
        pmin = debut ;

          for ( int i = debut + 1 ; i < TAILLE ; ++i)
          {

             if ( tab[pmin] > tab[i])
             {
               pmin = i;
             }

          }

        tmp = tab[debut];
        tab[debut]=tab[pmin];
        tab[pmin]= tmp;
    }
  printf("\n");
  printf("Tableau trie\n");
  printf("\n");
     for ( int i = 0 ;  i < TAILLE ; i++){
        printf("%3i  ", tab[i]);
 
      }
    printf("\n");

   /* for ( int i = 0 ;  i < TAILLE ; i++){
      printf("%3i  ", tab[i]);
 
    }
  printf("\n");
  */
  return 0;

  
  }


