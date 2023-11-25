#include<stdio.h>
char c = 0 ;
int nbe_mots = 0 ;
int main(){
    printf("Veuillez saisir un message en morse (commencer par un espace):");
    while((c =getchar())!= '\n'){
        putchar(c);
        if ( c == ' '){
            nbe_mots = nbe_mots + 1  ;
        }
    }
    printf("Nombre de mots = %i \n", nbe_mots);
    return 0 ;
}
