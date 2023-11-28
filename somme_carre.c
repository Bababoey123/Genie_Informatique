#include<stdio.h>

int somme = 0 ;

int n = 2;
int main () {
    for ( int i = 1  ; i <= n ; ++i){
        somme = i + i* i ;
    }
    printf("%i\n", somme) ;
    return 0 ;
}