/*
Adam Caulier
17/10/2023
Afficher le contenu d'une matrice 



commande pour le compiler gcc -W -std=c99 matrice_fonction.c -o matrice_fonction

executer le programme ./matrice_fonction 

*/

#include<stdio.h>
#define TAILLE1 2
#define TAILLE2 3

void afficher_matrice ( int n , int m , float mat[n][m]); 

int main (){

float mat[TAILLE1][TAILLE2]= {{1, 2, 3}, {4, 5, 6}};
afficher_matrice(TAILLE1, TAILLE2, mat);
printf("\n");

return 0;

}
void afficher_matrice ( int n , int m , float mat[n][m]){
 
for (int i = 0 ; i < n ; ++i){
    for (int j = 0; j < m ; ++j){
        printf("%0.1f  ", mat[i][j]);
    }
    
}
}