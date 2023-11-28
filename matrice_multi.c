/*
Adam Caulier
09/09/2023

template 

3
commande pour le compiler gcc -W -std=c99 template.c -o a.out

executer le programme ./a.out

*/

#include<stdio.h>
#define TAILLE1 2
#define TAILLE2 3

int main (){

float mat[TAILLE1][TAILLE2]= {{1, 2, 3}, {4, 5, 6}};
for (int i = 0 ; i < TAILLE1 ; ++i){
    for (int j = 0; j < TAILLE2 ; ++j){
        printf("%0.1f  ", mat[i][j]);
    }
    printf("\n");
}
printf("\n");

return 0;




}