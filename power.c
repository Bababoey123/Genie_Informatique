

/*
Adam Caulier
03/10/2023

affiche la chaine de characteres entrre lord de la commande d'execution 

commande pour le compiler gcc -Wall -W -std=c99 -S test_argv_argc.c -o test_argv_argc

executer le programme ./test_argv_argc

*/

#include<stdio.h>



int power( int x , int n ){
  int xn  = 1  ;
 for( int i = 1 ; i <= n ;  i++ ) 
  {
    xn = xn * x ;

  }
  return xn ;
}
int main (void){
  int x =2 ;
  int n = 3 ;
  int xn ;

  xn = power( x, n ) ;
 printf("x puissance n = %i \n" , xn);
  
 printf("\n");

return 0;



}