/*
Adam Caulier
25/11/2023 
Ce programme calcule le resusltat de trois series differentes
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (){
    int N = 0 ;
    float somme = 0 ;
    float somme2 = 0 ;
    float somme3  = 0 ; 
    printf("Veuillez entrer un nombre N :");
    scanf("%i", &N );
    for (int i = 0 ; i <= N ; ++i){
        somme = somme + pow(1.0/2.0, i);
    }
    printf("resultat serie 1 = %f \n", somme );
    for (int i = 1 ; i <= N ; ++i){
        somme2 = somme2 + pow(-1,i+1)*(1/pow(i,2));
    }
    printf("resultat serie 2 = %f \n", somme2);
    for (int k = 1 ; k<= 6 ; ++k){
        for (int i = 1 ; i <= N; ++i){
            somme3  = somme3 + (1/pow(i,2));
        }
    }
    somme3 = sqrt(somme3);
    printf("resusltat serie 3 = %f \n", somme3);
    return 0 ; 

}