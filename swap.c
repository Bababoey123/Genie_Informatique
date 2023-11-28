/*
Adam Caulier
19/09/2023

test du programme swap en C

commande pour le compiler gcc -Wall -W -std=c99 -S swap.c -o swap

executer le programme ./helloworld.c

*/

#include<stdio.h>
#include<string.h>

#define TAILLE  8 
int a = 1 ;
int b = 7;
int tmp = 0;
int main (){

printf("Test du swap\n");
printf("%i , %i \n", a ,b ) ;

// swap 
tmp = a;
a = b ; 
b = tmp ;

printf("%i , %i \n", a ,b ) ;

return 0;



}