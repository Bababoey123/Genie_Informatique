/*
Adam Caulier
03/10/2023

algorytme de tri sur place 

commande pour le compiler gcc -Wall -W -std=c99 -S trisurplace.c -o trisurplace

executer le programme ./trisurplace

*/

#include<stdio.h>
#include<stdlib.h>
#define TAILLE 7  

int tab[TAILLE] = {0};
int nb_perm = 0, nb_comp = 0 ;
int tmp = 0 ;
int pmin = 0 ;
int j = 0;

int main (){

  
  printf("Remplissage aleatoire du tableau\n");

    for ( int i = 0 ; i < TAILLE ; i++){
        tab[i] = rand()%100;

    }
     
  printf("\n");
  
     for ( int i = 0 ;  i < TAILLE ; i++){
       printf("%3i  ", tab[i]);
 
     }

    
    
    for ( int i = 0 ; i < TAILLE  ; ++i){
        tmp = tab[i] ;
        j = i ;
        nb_comp ++ ; 

          while ( j>0 && tmp < tab[j-1])
          {
            tab[j]=tab[j-1] ;
            j-- ;
            nb_perm ++ ;
            nb_comp ++ ;
          }
        tab[j]= tmp ;
    }
  printf("\n");
  printf("Tableau trie\n");
  printf("\n");
     for ( int i = 0 ;  i < TAILLE ; i++){
        printf("%3i  ", tab[i]);
 
      }
    printf("\n");
    printf("Nombre de comparaisons = %i" , nb_comp);
    printf("\n");
    printf("Nombre de permutations = %i" , nb_perm);
    printf("\n");

   /* for ( int i = 0 ;  i < TAILLE ; i++){
      printf("%3i  ", tab[i]);
 
    }
  printf("\n");
  */
  return 0;

  
  }


