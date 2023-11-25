#include <stdio.h>

int n = 0 ;

int main (){

    printf( "Saisir un nombre n :  " );
    scanf("%i", &n);

    for ( int i = 1 ; i <= n ; ++i){

        printf(" Hello, world !");
        printf("\n");
    }

return 0 ;
}