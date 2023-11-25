#include<stdio.h>
#include <math.h>
int N = 0 ;
float H, z = 0.0 ;
float somme, sommeH = 0 ;
float calculer_H(int k ){
    float H1 = 0 ;
    for (int i = 1 ; i <=k ; ++i){
        H1= H1 + 1.0/i ; // ATTENTION bien mettre le 1.0 afin que le calcul soit fait correcetemnt
    }
    return H1 ; 
}
int main(){
    printf("Saisir entier N : \n");
    scanf("%i", &N);
    while(getchar()!= '\n'); 
    printf("Saisir reel z : \n");
    scanf("%f", &z);
    for ( int k = 1 ; k <= N  ; ++k){
        H = calculer_H(k);
        printf("H= %f", H);
        putchar('\n') ;
        somme = somme + H*pow(z,k);
        printf("Somme etape %i = %f \n",k, somme) ;
    }
    printf("N = %d \n", N);
    printf("Somme = %f \n", somme);
    return 0 ; 

}
