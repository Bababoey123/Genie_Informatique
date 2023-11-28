/*
Adam Caulier
02/10/2023

multiplication d'un entier jusqua 10 
 commande pour le compiler gcc -W -Wall --std=c99 mul.c -o mul

executer le programme ./mul

*/

#include<stdio.h>


int x = 0 ;
int tmp = 1 ;


int main (){
   
  printf("Saisir un entier a multiplier: \n  ");
  printf("x = ?  \n ");
  scanf("%i", &x);
  tmp = x;

  for( int i = 1 ; i <= 10 ; ++i){
    x = tmp * i  ;
    printf("%3i ", x);
  }
  printf("\n");
  return 0 ;
  }




