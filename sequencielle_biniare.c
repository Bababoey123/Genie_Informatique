#include<stdio.h>
#include<stdlib.h>
#define TAILLE 20
 int tab[TAILLE] = {0};
 int x = 0 ;

 void fibonacci (int T, int tab[T]){
    for (int i = 0 ; i < T ; i++){
        if ( i == 0){
            tab[i]= 0;
        }
        if ( i == 1){
            tab[i]= 1 ;
        }
        else {
            tab[i]= tab[i-1]+ tab[i-2];
        }
        
    }
 }
 void recherche_sequencielle( int x, int T,  int tab[T]){
    int flag = 0 ;
    int position = 0 ;
    for (int i = 0 ; i < T ; i++){
        if (tab[i] == x) {
            flag = 1 ;
            position =i ;
        }
    }
    if ( flag == 1) printf("le nombre %i se trouve en positon %i\n", x, position);
    if (flag == 0) printf("le nombre %i ne se trouve pas dans la suite de fibonacci \n", x);


 }
 void recherche_biniare( int debut, int fin , int x, int T, int tab[T]){
    int position, flag, i= 0 ;
    while(debut <=fin){
        i = (debut+fin)/2;
        if (tab[i]==x){
            position = i ;
            flag = 1 ;
            break;
        }
        if(tab[i]<x){
            debut = i + 1;
        }
        if (tab[i]>x){
            fin = i -1 ;
        }

    }
    if ( flag == 1) printf("le nombre %i se trouve en positon %i\n", x, position);
    if (flag == 0) printf("le nombre %i ne se trouve pas dans la suite de fibonacci \n", x);
 }
 int main(){
    int debut, fin = 0 ;
    printf("veuillez saisir un entier a rechercher :");
    scanf("%i", &x);
    debut = 0 ;
    fin = TAILLE-1 ;
    fibonacci(TAILLE, tab);
    for (int i = 0 ; i < TAILLE ; i++){
        printf("%i ", tab[i]) ;
        
    }
    putchar('\n');
    recherche_biniare(debut, fin, x, TAILLE, tab);
    recherche_sequencielle(x, TAILLE, tab);
    return 0 ; 
 }
