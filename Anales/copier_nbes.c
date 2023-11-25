#include <stdio.h>

int n = 0 ;
int a = 0 ;

int main (){

    printf( "Saisir un nombre n :  " );
    scanf("%i", &n);
    a = n ;
    
    for ( int i = 1 ; i <= n ; ++i){

        for ( int j = 1  ; j <= a ; ++j){

            printf("%i", j);
        
         }
      a = a -1 ;
      printf("\n");
    }

 return 0 ;

}