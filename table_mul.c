/*
Adam Caulier
09/09/2023

table de multiplication 





commande pour le compiler gcc -W -Wall --std=c99 table_mul.c -o table_mul

executer le programme ./table_mul

*/

#include<stdio.h>


int x = 0 ;
int tmp = 1 ;
int res = 1 ;



int main (){
   
  printf("Saisir un entier a multiplier: \n  ");
  printf("x = ?  \n ");
  scanf("%i", &x);
  tmp = 1;

  for( int i = 1 ; i <= x ; ++ i){
     
     for ( int j = 1 ; j <= 10 ; ++ j){

      res = tmp * j; 
      printf("%3i ", res);
     }

   printf(" \n ");
   tmp = tmp + 1  ;
  }
  printf("\n");

  return 0 ;
}




