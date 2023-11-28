/*
Adam Caulier
09/09/2023

Affiche la chaine de characteres 

commande pour le compiler gcc -Wall -W -std=c99 -S helloworldstr.c -o str.out

executer le programme ./str.out

*/

#include<stdio.h>
#include<string.h>
#define TAILLE
int main (){

    

char chaine[TAILLE]="Hello,world!" ;

printf("%s\n", chaine );
printf("%li\n", strlen(chaine));



return 0;



}