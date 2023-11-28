

/*
Adam Caulier
30/09/2023

affiche la chaine de characteres entrre lord de la commande d'execution 

commande pour le compiler gcc -Wall -W -std=c99 -S test_argv_argc.c -o test_argv_argc

executer le programme ./test_argv_argc

*/

#include<stdio.h>
#include<string.h>
#define TAILLE 9
int main (int argc , char * argv[]){
 printf("longeur du tableau argc = %i \n" , argc);
  for( int i = 0 ; i <= argc ;  i++ ) 
  {
    printf("argv %i = %3s \n", i , argv[i]);

  }
 printf("\n");

return 0;



}