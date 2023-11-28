/*
Adam Caulier
21/10/2023



executer le programme ./a.out

*/

#include<stdio.h>
#define TAILLE 20 

int main (){

int pmin = 0 ;
int trouve = 0 ;
int pmax = 0 ;
int recherche = 0  ;
int j = 0 ;
int tab[TAILLE] = {0} ;


printf("Algoritme de recherche binaire \n");

printf("Saisir un entier a rechercher: \n  ");
printf("recherche = ?      ");
scanf("%i", &recherche);
printf("\n");

// remplissage du tableau avec la suite de fibonacci 

for ( int i = 0 ; i <= TAILLE ; ++i){

    if ( i == 0){
        tab[i] = 0 ;
        
    }
     if ( i == 1){
        tab[i] = 1 ;
    }
    else{
        tab[i] = tab[i-1] + tab[i-2];
    }
}

for ( int i = 0 ; i <= TAILLE ; ++i){
    printf("%i \n", tab[i]);
}


// recherche biniare

pmin = 0 ;
pmax = TAILLE - 1 ;

while( pmin <= pmax )
{

  j = (pmin+pmax)/2 ;

  if ( tab[j]==recherche){

    
    trouve=1 ;
   
    break;
    
  }
   if ( tab[j] < recherche){
    pmin = j + 1  ;
  }
  if ( tab[j] > recherche){
    pmax  = j -1  ;
  }

}

if ( trouve == 1 )
{
    printf("Le nombre %i est en position %i dans le tableau\n", recherche, j);

}
if ( trouve == 0 )
{
    printf("Le nombre ne %i se trouve pas  dans le tableau\n", recherche);
}

return 0;




}